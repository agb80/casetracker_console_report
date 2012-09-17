<?php

/**
 * Implementation of hook_default_features_overrides().
 */
function casetracker_console_report_default_features_overrides() {
  $export = array();

  $features_override = new stdClass;
  $features_override->disabled = FALSE; /* Edit this to true to make a default features_override disabled initially */
  $features_override->api_version = 1;
  $features_override->name = 'casetracker_console_report';
  $features_override->description = '';
  $features_override->component_type = 'views';
  $features_override->component_id = 'casetracker_cases';
  $features_override->value = array(
    'additions' => array(),
    'deletions' => array(
      0 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'page_1',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'filters',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'field_due_date_value',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'value',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'value',
          ),
        ),
      ),
      1 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'page_1',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'filters',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'field_due_date_value',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'value',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'min',
          ),
        ),
      ),
      2 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'page_1',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'filters',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'field_due_date_value',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'value',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'max',
          ),
        ),
      ),
      3 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'page_1',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'handler',
          ),
          3 => array(
            'type' => 'object',
            'key' => 'options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'filters',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'field_due_date_value',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'value',
          ),
          7 => array(
            'type' => 'array',
            'key' => 'value',
          ),
        ),
      ),
      4 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'page_1',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'handler',
          ),
          3 => array(
            'type' => 'object',
            'key' => 'options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'filters',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'field_due_date_value',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'value',
          ),
          7 => array(
            'type' => 'array',
            'key' => 'min',
          ),
        ),
      ),
      5 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'page_1',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'handler',
          ),
          3 => array(
            'type' => 'object',
            'key' => 'options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'filters',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'field_due_date_value',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'value',
          ),
          7 => array(
            'type' => 'array',
            'key' => 'max',
          ),
        ),
      ),
    ),
  );
  $export['casetracker_console_report'] = $features_override;

  return $export;
}
