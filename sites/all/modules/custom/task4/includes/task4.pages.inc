<?php

/**
 * @file
 * Pages file for D7 training task 4.
 */

/**
 * Callback function that returns message page.
 */
function task4_messages_page() {

  $header = array(
    array(
      'data' => '№',
      'field' => 'id',
      'sort' => 'desc',
    ),
    array(
      'data' => t('User'),
      'field' => 'uid',
    ),
    array(
      'data' => t('Title'),
      'field' => 'id',
    ),
    array(
      'data' => t('Text'),
      'field' => 'id',
    ),
    array(
      'data' => t('Edit message'),
    ),
  );

  $table = array(
    'header' => $header,
    'rows' => array(),
    'caption' => t('Messages list'),
  );

  $messages = db_select('task4_messages', 't4m')
    ->fields('t4m', array('id', 'uid', 'title', 'body'))
    ->extend('PagerDefault')
    ->limit(3)
    ->extend('TableSort')
    ->orderByHeader($header)
    ->execute()
    ->fetchAllAssoc('id', PDO::FETCH_ASSOC);

  $table['rows'] = $messages;
  foreach ($table['rows'] as &$row) {
    $user = entity_load_single('user', $row['uid']);
    $row['uid'] = l($user->name, entity_uri('user', $user)['path']);
    $row[] = l(t('edit'), 'messages/' . $row['id'] . '/edit');

  }

  return theme('table', $table) . theme('pager');
}
