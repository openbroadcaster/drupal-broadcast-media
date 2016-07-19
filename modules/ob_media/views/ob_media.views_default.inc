<?php
/**
 * Implementation of hook_views_default_views().
 * Declare all the .view files in the views subdir that end in .view
 */
function ob_media_views_default_views() {
  $views = array();
  $files = file_scan_directory(drupal_get_path('module', 'ob_media') . '/views', '/.*\.view$/');
  if (count($files)) {
    foreach ($files as $absolute => $file) {
      require $absolute;
      if (isset($view)) {
        $views[$file->name] = $view;
      }
    }
  }
  return $views;
}
