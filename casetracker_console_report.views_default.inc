<?php

/**
 * Implementation of hook_views_default_views().
 */
function casetracker_console_report_views_default_views() {
  $views = array();

  // Exported view: casetracker_console_report
  $view = new view;
  $view->name = 'casetracker_console_report';
  $view->description = 'Atrium > Case Tracker > Console > Report';
  $view->tag = 'atrium';
  $view->base_table = 'node';
  $view->core = 6;
  $view->api_version = '2';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('fields', array(
    'title' => array(
      'label' => 'Project',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 1,
      'spaces' => array(
        'frontpage' => 0,
        'type' => 'spaces_og',
      ),
      'exclude' => 0,
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'relationship' => 'none',
    ),
    'case_count_filter_5' => array(
      'label' => 'Closed',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'type' => 'status-8',
      'exclude' => 0,
      'id' => 'case_count_filter_5',
      'table' => 'casetracker_case',
      'field' => 'case_count_filter',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('filters', array(
    'project' => array(
      'operator' => '=',
      'value' => '',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'project',
      'table' => 'node',
      'field' => 'project',
      'relationship' => 'none',
    ),
    'status' => array(
      'operator' => '=',
      'value' => '1',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'status',
      'table' => 'node',
      'field' => 'status',
      'relationship' => 'none',
    ),
    'field_due_date_value' => array(
      'operator' => '=',
      'value' => array(
        'value' => NULL,
        'min' => NULL,
        'max' => NULL,
        'default_date' => '',
        'default_to_date' => '',
      ),
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'field_due_date_value_op',
        'identifier' => 'field_due_date_value',
        'label' => 'Due Date',
        'optional' => 1,
        'remember' => 0,
      ),
      'date_fields' => array(
        'node_data_field_due_date.field_due_date_value' => 'node_data_field_due_date.field_due_date_value',
      ),
      'date_method' => 'OR',
      'granularity' => 'day',
      'form_type' => 'date_popup',
      'default_date' => '',
      'default_to_date' => '',
      'year_range' => '-3:+3',
      'id' => 'field_due_date_value',
      'table' => 'node_data_field_due_date',
      'field' => 'field_due_date_value',
      'relationship' => 'none',
    ),
    'current' => array(
      'operator' => 'all',
      'value' => '',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'current',
      'table' => 'spaces',
      'field' => 'current',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'spaces_feature',
    'spaces_feature' => 'atrium_casetracker',
    'perm' => 'access content',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('style_plugin', 'table');
  $handler->override_option('style_options', array(
    'grouping' => '',
    'override' => 1,
    'sticky' => 0,
    'order' => 'asc',
    'columns' => array(
      'case_count_filter' => 'case_count_filter',
      'title' => 'title',
    ),
    'info' => array(
      'case_count_filter' => array(
        'separator' => '',
      ),
      'title' => array(
        'sortable' => 0,
        'separator' => '',
      ),
    ),
    'default' => '-1',
  ));
  $handler = $view->new_display('pdf', 'PDF Page', 'pdf_1');
  $handler->override_option('style_plugin', 'pdf_table');
  $handler->override_option('style_options', array(
    'mission_description' => FALSE,
    'description' => '',
  ));
  $handler->override_option('row_plugin', 'pdf_fields');
  $handler->override_option('path', 'casetracker/console/report');
  $handler->override_option('menu', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler->override_option('displays', array());
  $handler->override_option('sitename_title', FALSE);
  $handler->override_option('default_page_format', 'LETTER');
  $handler->override_option('default_page_format_custom', '');
  $handler->override_option('default_page_orientation', 'P');
  $handler->override_option('unit', 'mm');
  $handler->override_option('margin_left', '15');
  $handler->override_option('margin_right', '15');
  $handler->override_option('margin_top', '15');
  $handler->override_option('margin_bottom', '15');
  $handler->override_option('leading_template', '');
  $handler->override_option('template', '');
  $handler->override_option('succeed_template', '');
  $handler->override_option('default_font_family', 'helvetica');
  $handler->override_option('default_font_style', array());
  $handler->override_option('default_font_size', '11');
  $handler->override_option('default_text_align', 'L');
  $handler->override_option('default_font_color', '000000');
  $handler->override_option('default_text_hyphenate', 'none');
  $handler->override_option('css_file', '');
  $translatables['casetracker_console_report'] = array(
    t('Defaults'),
    t('PDF Page'),
  );

  $views[$view->name] = $view;

  return $views;
}
