
(function ($, Drupal) {
  Drupal.behaviors.listenlive = {
    attach: function(context, settings) {
      // Open the live player
      $('.listen-live-button', context).click(function(e) {
        e.preventDefault();

        var width  = 520;
        var height = 90;
        var left   = (screen.width / 2) - (width / 2);
        var top    = (screen.height / 2) - (height / 2);
        window.open(Drupal.settings.basePath + "live", "", "width=" + width + ",height=" + height + ",scrollbars=yes,top=" + top + ",left=" + left);
      });

      function update_now_playing() {
        $.get(Drupal.settings.basePath + "now-playing", function(response) {
            if (response.data.media.title) {
              $('.ob-player-now-playing .track').html(response.data.media.artist + ' - ' + response.data.media.title);
            }
            else {
              $('.ob-player-now-playing .track').html('Unknown Content');
            }
          }, 'json');
      }

      update_now_playing();
      setInterval(update_now_playing, 10000);
    }
  };
})(jQuery, Drupal);

