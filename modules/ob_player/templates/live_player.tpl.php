<!DOCTYPE html>
<!--[if IEMobile 7]><html class="iem7"  lang="en" dir="ltr"><![endif]-->
<!--[if lte IE 6]><html class="lt-ie9 lt-ie8 lt-ie7"  lang="en" dir="ltr"><![endif]-->
<!--[if (IE 7)&(!IEMobile)]><html class="lt-ie9 lt-ie8"  lang="en" dir="ltr"><![endif]-->
<!--[if IE 8]><html class="lt-ie9"  lang="en" dir="ltr"><![endif]-->
<!--[if (gte IE 9)|(gt IEMobile 7)]><!--><html lang="en" dir="ltr"><!--<![endif]-->
<head>
  <meta charset="utf-8">
  <title>Listen Live | <?= $ob_player_station ?></title>
  <!-- <link href="http://netdna.bootstrapcdn.com/font-awesome/4.0.3/css/font-awesome.css" rel="stylesheet"> -->
  <link href="https://cdnjs.cloudflare.com/ajax/libs/jplayer/2.9.2/skin/blue.monday/css/jplayer.blue.monday.min.css" rel="stylesheet" />

  <script src="http://ajax.googleapis.com/ajax/libs/jquery/1.12.2/jquery.min.js"></script>
  <script src="https://cdnjs.cloudflare.com/ajax/libs/jplayer/2.9.2/jplayer/jquery.jplayer.min.js"></script>

  <script>
    $(document).ready(function() {
      $("#ob-player").jPlayer({
        solution: 'html, flash',
        swfPath: "https://cdnjs.cloudflare.com/ajax/libs/jplayer/2.9.2/jplayer/jquery.jplayer.swf",
        cssSelectorAncestor: "#jp_container_1",
        ready: function () {
          $(this).jPlayer("setMedia",
            {
              "title": "<?= $ob_player_station ?>",
              "ogg": "<?= $ob_player_url ?>",
              "mp3": "<?= $ob_player_url ?>"
            });
        }
      });

      function retrieve_track() {
        $.ajax({
          url: "<?= base_path(); ?>now-playing",
          type: "GET",
          dataType: "json",
          success: function(response) {
            if (response.data.show_name) {
              $('.jp-title').html('<span class="show">' + response.data.show_name + '</span> <span class="track">' + response.data.media.artist + ' - ' + response.data.media.title + '</span>');
            }
            else {
              $('.jp-title').html('<em>Loading track information&hellip;</em>');
            }
          },
        });
      }

      retrieve_track();
      setInterval(retrieve_track, 10000);
    });
  </script>
</head>
<body>

<a href="/" target="_blank" class="station-logo"><img src="<?= $ob_player_logo ?>" alt="<?= $ob_player_station ?>" border="0" /></a>

<div id="ob-player" class="jp-jplayer"></div>
<div id="jp_container_1" class="jp-audio" role="application" aria-label="media player">
  <div class="jp-type-single">
    <div class="jp-gui jp-interface">
      <div class="jp-volume-controls">
        <button class="jp-mute" role="button" tabindex="0">mute</button>
        <button class="jp-volume-max" role="button" tabindex="0">max volume</button>
        <div class="jp-volume-bar">
          <div class="jp-volume-bar-value"></div>
        </div>
      </div>
      <div class="jp-controls-holder">
        <div class="jp-controls">
          <button class="jp-play" role="button" tabindex="0">play</button>
          <button class="jp-stop" role="button" tabindex="0">stop</button>
        </div>
        <div class="jp-current-time" role="timer" aria-label="time">&nbsp;</div>
      </div>
    </div>
    <div class="jp-details">
      <div class="jp-title" aria-label="title">&nbsp;</div>
    </div>
    <div class="jp-no-solution">
      <span>Update Required</span>
      To play the media you will need to either update your browser to a recent version or update your <a href="http://get.adobe.com/flashplayer/" target="_blank">Flash plugin</a>.
    </div>
  </div>
</div>

</body>
</html>
