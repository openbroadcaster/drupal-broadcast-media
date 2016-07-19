<?php
/**
 * @file
 * Administrative page callbacks for the ob_player module.
 */

/**
 * Module settings configuration for ob_player.
 */
function ob_player_admin_form() {
  $form = array();

  $form['ob_player_url'] = array(
    '#title'         => t('Icecast Stream URL'),
    '#type'          => 'textfield',
    '#default_value' => variable_get('ob_player_url', 'http://'),
    '#size'          => 60,
    '#maxlength'     => 128,
    '#required'      => TRUE,
    '#description'   => t('The URL of the icecast mp3/ogg stream.'),
  );
  $form['ob_player_station'] = array(
    '#title'         => t('Station Name'),
    '#type'          => 'textfield',
    '#default_value' => variable_get('ob_player_station', 'OBTS Radio 133.7 FM'),
    '#size'          => 30,
    '#maxlength'     => 64,
    '#required'      => TRUE,
    '#description'   => t('The full station name, for use it titles.'),
  );
  $form['ob_player_logo'] = array(
    '#title'         => t('Station Logo'),
    '#type'          => 'textfield',
    '#default_value' => variable_get('ob_player_logo', ''),
    '#size'          => 60,
    '#maxlength'     => 128,
    '#required'      => FALSE,
    '#description'   => t('The URL of the image to use as the station logo.'),
  );

  return system_settings_form($form);
}
