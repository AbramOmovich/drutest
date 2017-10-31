<?php

/**
 * @file
 * Default rules file for D7 training task 7.
 */

/**
 * Implements hook_default_rules_configuration().
 */
function task7_default_rules_configuration() {

  $items = array();
  $items['rules_task7_view_lottery_page'] = entity_import('rules_config', '
  { "rules_task7_view_lottery_page" : {
    "LABEL" : "task7_view_lottery_page",
    "PLUGIN" : "reaction rule",
    "OWNER" : "rules",
    "REQUIRES" : [ "task7", "rules" ],
    "ON" : { "init" : [] },
    "IF" : [ { "task7_check_winner_cache" : [] } ],
    "DO" : [
      { "drupal_message" : { "message" : "Congratulations [site:current-user] you win! Lucky number is [lottery:lucky_number]. Lucky time is [lottery:timestamp]." } }
    ]
  }
}'
  );
  return $items;
}
