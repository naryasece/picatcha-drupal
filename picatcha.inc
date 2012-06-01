<?php
/**
 * @file
 * Code required by both Picatcha module
 */

/**
 * Let the user know that the Picatcha PHP library is not installed
 */
function _picatcha_library_not_found() {
  global $calledalready;
  if(!$calledalready) {
    $calledalready = TRUE;
    drupal_set_message(t('The <a href="@url" target="_blank">Picatcha PHP library</a> was not found. Please install it into %picatchadir.', array('@url' => 'http://picatcha.com/plugins/php/index.html', '%picatchadir' => drupal_get_path('module', 'picatcha') . '/picatcha')), 'error');
    if(!function_exists('picatcha_get_signup_url')) {
      function picatcha_get_signup_url($domain, $appname) {
        return 'http://picatcha.com';
      }
    }
    if(!function_exists('picatcha_get_html')) {
      function picatcha_get_html($pubkey, $error = NULL, $use_ssl = FALSE) {
        return NULL;
      }
    }
    if(!function_exists('picatcha_check_answer')) {
      function picatcha_check_answer($privkey, $remoteip, $user_agent, $challenge, $response) {
        return NULL;
      }
    }
  }
}
