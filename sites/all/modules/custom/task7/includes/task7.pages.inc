<?php

/**
 * @file
 * Page implementation file for D7 training task 7.
 */

/**
 * Callback function that implements files page view.
 */
function task7_lottery_page() {

  task7_lottery();
  $cache = cache_get('task7_lottery');
  $header_table = array(
    t('User ID'),
    t('Winner'),
    t('First value'),
    t('Second value'),
    t('Timestamp'),
  );
  $output = theme('table',
    array(
      'caption' => t('Lottery table'),
      'header' => $header_table,
      'rows' => $cache->data,
    )
  );
  return $output;
}
