<?php
/**
 * @file
 * feature_hr_surveys.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_hr_surveys_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "field_validation" && $api == "default_field_validation_rules") {
    return array("version" => "2");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function feature_hr_surveys_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_entityform_type().
 */
function feature_hr_surveys_default_entityform_type() {
  $items = array();
  $items['survey'] = entity_import('entityform_type', '{
    "type" : "survey",
    "label" : "Survey",
    "data" : {
      "draftable" : 0,
      "draft_redirect_path" : "",
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "filtered_html" },
      "submit_button_text" : "",
      "submit_confirm_msg" : "",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "",
      "preview_page" : 0,
      "submission_page_title" : "",
      "submission_text" : { "value" : "", "format" : "filtered_html" },
      "submission_show_submitted" : 0,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : { "1" : "1", "5" : "5", "2" : 0, "6" : 0, "4" : 0, "3" : 0 },
      "resubmit_action" : "old",
      "redirect_path" : "\\u003Cfront\\u003E",
      "instruction_pre" : {
        "value" : "\\u003Cp\\u003ESome description here...\\u003C\\/p\\u003E",
        "format" : "filtered_html"
      },
      "anonymous_links" : 0,
      "session_save" : 0
    },
    "weight" : "0",
    "rdf_mapping" : [],
    "paths" : { "submit" : {
        "source" : "eform\\/submit\\/survey",
        "alias" : "online-survey",
        "language" : "und"
      }
    }
  }');
  return $items;
}

/**
 * Implements hook_node_info().
 */
function feature_hr_surveys_node_info() {
  $items = array(
    'agency' => array(
      'name' => t('Agency'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
