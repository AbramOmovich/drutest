<?php

/**
 * @file
 * Rules file for D7 training task 7.
 */

/**
 * Implements hook_rules_condition_info().
 */
function task7_rules_condition_info() {
  return array(
    'task7_check_winner_cache' => array(
      'label' => t('User wins'),
      'group' => t('Task7'),
    ),
  );
}
