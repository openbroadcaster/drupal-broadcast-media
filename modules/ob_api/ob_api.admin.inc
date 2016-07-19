<?php
/**
 * @file
 * Administrative page callbacks for the ob_api module.
 */

/**
 * Module settings configuration for ob_api.
 */
function ob_api_admin_form() {
  $form = array();

  $form['ob_api_url'] = array(
    '#title'         => t('API URL'),
    '#type'          => 'textfield',
    '#default_value' => variable_get('ob_api_url', 'http://'),
    '#size'          => 60,
    '#maxlength'     => 128,
    '#required'      => TRUE,
    '#description'   => t('The top level URL of the OpenBroadcaster Manager.'),
  );
  $form['ob_api_username'] = array(
    '#title'         => t('API username'),
    '#type'          => 'textfield',
    '#default_value' => variable_get('ob_api_username', ''),
    '#size'          => 30,
    '#maxlength'     => 64,
    '#required'      => TRUE,
    '#description'   => t('The username used to connect to the OpenBroadcaster API.'),
  );
  $form['ob_api_password'] = array(
    '#title'         => t('API password'),
    '#type'          => 'textfield',
    '#default_value' => variable_get('ob_api_password', ''),
    '#size'          => 30,
    '#maxlength'     => 64,
    '#required'      => TRUE,
    '#description'   => t('The password used to connect to the OpenBroadcaster API.'),
  );
  $form['ob_api_device'] = array(
    '#title'         => t('OpenBroadcaster device ID'),
    '#type'          => 'textfield',
    '#default_value' => variable_get('ob_api_device', '1'),
    '#size'          => 3,
    '#maxlength'     => 3,
    '#required'      => TRUE,
    '#description'   => t('The ID of the device being used within OpenBroadcaster.'),
  );

  return system_settings_form($form);
}
