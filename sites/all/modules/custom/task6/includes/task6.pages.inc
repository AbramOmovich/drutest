<?php

/**
 * @file
 * Page implementation file for D7 training task 6.
 */

/**
 * Callback function that returns i18n page.
 */
function task6_i18n_page() {

  ctools_include('ajax');
  drupal_add_js(drupal_get_path('module', 'task6') . '/js/task6.js', 'file');
  $form = drupal_get_form('task6_textarea_form');

  $output = format_plural(rand(1, 100), '1 task', '@count tasks')
            . '</br></br>'
            . ctools_ajax_text_button('Click me ...', 'training/nojs/click_me_link', '', '', 'use-ajax')
            . '</br></br>'
            . drupal_render($form);

  return $output;
}
