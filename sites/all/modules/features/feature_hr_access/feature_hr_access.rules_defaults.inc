<?php
/**
 * @file
 * feature_hr_access.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function feature_hr_access_default_rules_configuration() {
  $items = array();
  $items['rules_redirect_after_login'] = entity_import('rules_config', '{ "rules_redirect_after_login" : {
      "LABEL" : "Redirect after login",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_login" : [] },
      "IF" : [
        { "user_has_role" : {
            "account" : [ "account" ],
            "roles" : { "value" : { "6" : "6", "3" : "3" } },
            "operation" : "OR"
          }
        }
      ],
      "DO" : [ { "redirect" : { "url" : "admin\\/surveys" } } ]
    }
  }');
  return $items;
}
