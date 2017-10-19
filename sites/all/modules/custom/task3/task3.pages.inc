<?php

/**
 * @file
 * Page implementation file for D7 training task 3.
 */

/**
 * Callback function that implements files page view.
 */
function task3_files_page() {

  $table = array(
    'caption' => t('Server filelist'),
    'header' => array(
      t('No.'),
      t('User ID'),
      t('Path'),
      t('Status'),
      t('Download link'),
    ),
    'rows' => array(),
    'attributes' => array(
      'id' => 'filelist-table',
    ),
    'colgroups' => array(),
    'sticky' => FALSE,
    'empty' => NULL,
  );

  global $user;
  ctools_include('modal');
  ctools_include('ajax');
  task3_js_transfer('UID', $user->uid);
  task3_load_managed_files();
  ctools_modal_add_js();
  drupal_add_css(drupal_get_path('module', 'task3') . '/css/task3.css');
  drupal_add_js(drupal_get_path('module', 'task3') . '/js/task3.js');
  task3_js_transfer('loaded', FALSE);

  return theme_table($table) . ctools_modal_text_button(t('Upload file'), 'training/files/nojs', t('Upload file'));
}
