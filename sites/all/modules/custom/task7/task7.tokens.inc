<?php

/**
 * @file
 * Tokens file for D7 training task 7.
 */

/**
 * Implements hook_token_info().
 */
function task7_token_info() {
  $type = array(
    'name' => t('Lottery'),
    'description' => t('Tokens for Task 7'),
  );
  $lottery['lucky_number'] = array(
    'name' => t('Lucky number'),
    'description' => t('Lucky number'),
  );
  $lottery['timestamp'] = array(
    'name' => t('Timestamp'),
    'description' => t('Lottery attempt timestamp.'),
  );
  return array(
    'types' => array('lottery' => $type),
    'tokens' => array('lottery' => $lottery),
  );
}

/**
 * Implements hook_tokens().
 */
function task7_tokens($type, $tokens, array $data = array(), array $options = array()) {
  global $user;
  $replacements = array();
  if ($type == 'lottery') {
    if (empty($data['lottery'])) {
      $data = _task7_fill_lottery_object();
    }
    $lottery = $data['lottery'];
    foreach ($tokens as $name => $original) {
      switch ($name) {
        case 'lucky_number':
          $replacements[$original] = $lottery->lucky_number;
          break;

        case 'timestamp':
          $replacements[$original] = $lottery->timestamp;
          break;
      }
    }
  }
  return $replacements;
}
