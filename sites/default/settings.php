<?php

/**
 * Common database settings.
 *
 * Environment settings files should define the remainder of the
 * default array (or override it completely). At a bare minimum
 * the following should be defined:
 *
 *   $databases['default']['default']['database']
 *   $databases['default']['default']['username']
 *   $databases['default']['default']['password']
 */
$databases = array(
  'default' => array(
    'default' => array(
      'driver' => 'mysql',
      'host' => 'localhost',
      'prefix' => '',
    ),
  ),
);

/**
 * Access control for update.php script.
 */
$update_free_access = FALSE;

/**
 * Salt for one-time login links and cancel links, form tokens, etc.
 */
$drupal_hash_salt = '';

/**
 * PHP settings:
 */

/**
 * Some distributions of Linux (most notably Debian) ship their PHP
 * installations with garbage collection (gc) disabled. Since Drupal depends on
 * PHP's garbage collection for clearing sessions, ensure that garbage
 * collection occurs by using the most common settings.
 */
ini_set('session.gc_probability', 1);
ini_set('session.gc_divisor', 100);

/**
 * Set session lifetime (in seconds), i.e. the time from the user's last visit
 * to the active session may be deleted by the session garbage collector. When
 * a session is deleted, authenticated users are logged out, and the contents
 * of the user's $_SESSION variable is discarded.
 */
ini_set('session.gc_maxlifetime', 200000);

/**
 * Set session cookie lifetime (in seconds), i.e. the time from the session is
 * created to the cookie expires, i.e. when the browser is expected to discard
 * the cookie. The value 0 means "until the browser is closed".
 */
ini_set('session.cookie_lifetime', 2000000);

/**
 * Variable overrides:
 */

// Reverse proxy.
$conf['reverse_proxy'] = TRUE;
$conf['reverse_proxy_addresses'] = array('127.0.0.1');

// Disable update manager downloads.
$conf['allow_authorize_operations'] = FALSE;

/**
 * Environment specific settings.
 */
if (preg_match('/^(.+\.)?drupalcampaustin\.org(:\d+)?$/', $_SERVER['HTTP_HOST'])) {
  include_once 'sites/default/settings.live.php';
}
elseif (preg_match('/^(dca11\.webchefs\.org|dca11\.dev1\.fourkitchens\.com)(:\d+)?$/', $_SERVER['HTTP_HOST'])) {
  include_once 'sites/default/settings.stage.php';
}
else {
  // Load general dev settings.
  if (file_exists('sites/default/settings.dev.php')) {
    include_once 'sites/default/settings.dev.php';
  }

  if (preg_match('/^(.*)\.(.*)\.(webchefs\.org|dev1\.fourkitchens\.com)(:\d+)*$/', $_SERVER['HTTP_HOST'], $matches) &&
    file_exists('sites/default/settings_' . $matches[1] . '.php')
  ) {
    // Load user specific settings.
    include_once 'sites/default/settings_' . $matches[1] . '.php';
  }
  elseif (file_exists('sites/default/settings_' . getenv(USER) . '.php')) {
    include_once 'sites/default/settings_' . getenv(USER) . '.php';
  }
}

