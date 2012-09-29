<?php

/**
 * Implementation of hook_default_features_overrides().
 */
function casetracker_console_report_default_features_overrides() {
  $export = array();

  $features_override = new stdClass;
  $features_override->disabled = FALSE; /* Edit this to true to make a default features_override disabled initially */
  $features_override->api_version = 1;
  $features_override->name = 'casetracker_cases_report';
  $features_override->description = 'Provide views to print report on casetracker console';
  $features_override->component_type = 'views';
  $features_override->component_id = 'casetracker_cases';
  $features_override->value = FALSE;
  $export['casetracker_cases_report'] = $features_override;

  return $export;
}
