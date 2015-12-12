<?php
/**
 * @file
 * feature_hr_notification.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function feature_hr_notification_default_rules_configuration() {
  $items = array();
  $items['rules_hr_notification_email_admin'] = entity_import('rules_config', '{ "rules_hr_notification_email_admin" : {
      "LABEL" : "HR notification email admin",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "entityform" ],
      "ON" : { "entityform_insert" : [] },
      "DO" : [
        { "mail" : {
            "to" : "[site:mail]",
            "subject" : "Form Submission: [entityform:type]",
            "message" : "[entityform:type] has been submitted by [entityform:field-applicant-name], [entityform:field_applicant_email] on [entityform:created]. Please review \\u003Ca href=\\u0022[site:url]entityform\\/[entityform:entityform-id]\\u0022\\u003Ehere\\u003C\\/a\\u003E.",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  return $items;
}
