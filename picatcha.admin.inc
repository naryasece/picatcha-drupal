<?php
/**
 * @file
 * Provides the Picatcha administration settings.
 */

/**
 * Form callback; administrative settings for picatcha.
 */
function picatcha_admin_settings() {
  // Load the Picatcha library.
  _picatcha_load_library();

  $form = array();
  $form['picatcha_public_key'] = array(
    '#type' => 'textfield',
    '#title' => t('Public Key'),
    '#default_value' => variable_get('picatcha_public_key', ''),
    '#maxlength' => 40,
    '#description' => t('The public key given to you when you <a href="@url" target="_blank">registered at picatcha.com</a>.', array('@url' => url(picatcha_get_signup_url($_SERVER['SERVER_NAME'], variable_get('site_name', ''))))),
    '#required' => TRUE,
  );
  $form['picatcha_private_key'] = array(
    '#type' => 'textfield',
    '#title' => t('Private Key'),
    '#default_value' => variable_get('picatcha_private_key', ''),
    '#maxlength' => 40,
    '#description' => t('The private key given to you when you <a href="@url" target="_blank">registered at picatcha.com</a>.', array('@url' => url(picatcha_get_signup_url($_SERVER['SERVER_NAME'], variable_get('site_name', ''))))),
    '#required' => TRUE,
  );

  return system_settings_form($form);
}
