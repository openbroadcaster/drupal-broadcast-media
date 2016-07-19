/**
 * @file
 * A JavaScript file for the theme.
 *
 * In order for this JavaScript to be loaded on pages, see the instructions in
 * the README.txt next to this file.
 */

// JavaScript should be made compatible with libraries other than jQuery by
// wrapping it with an "anonymous closure". See:
// - https://drupal.org/node/1446420
// - http://www.adequatelygood.com/2010/3/JavaScript-Module-Pattern-In-Depth
(function ($, Drupal, window, document, undefined) {
  Drupal.behaviors.obradio_theme = {
    attach: function(context, settings) {

      // Toggle the schedule days
      $(".schedule-day-tabs h2").click(function(e) {
        $(".schedule-day").hide();
        $(".schedule-day-tabs h2").not(this).removeClass("active");

        var target = $(this).data("target");
        $("." + target).fadeIn();

        $(this).addClass("active");
      });

      // Toggle program details
      $(".program-longdesc").hide();
      $(".schedule-day-program").has(".program-longdesc").append('<div class="program-toggle"><i class="fa fa-caret-down"></i></div>');
      $(".program-toggle").click(function(e) {
        $(this).prev().children(".program-longdesc").toggle();
        $(this).children(".fa-caret-down").toggleClass("fa-caret-up");
        $(this).parents(".schedule-day-program").toggleClass("opened");
      });

      // Toggle menu
      $(".header__mobile-menu .fa-bars").click(function() {
        if ($("#header #navigation").length < 1) {
          $("#navigation").clone().appendTo("#header");
        }
        $("#header #navigation").slideToggle();
      });

      // Stretch the background to fill the screen on larger screens
      if (screen.width > 480) {
        $.anystretch(Drupal.settings.basePath + "sites/all/themes/" + Drupal.settings.ajaxPageState.theme + "/images/background-image.jpg");
      }

    }
  };
})(jQuery, Drupal, this, this.document);

