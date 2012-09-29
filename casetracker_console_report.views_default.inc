<?php

/**
 * Implementation of hook_views_default_views().
 */
function casetracker_console_report_views_default_views() {
  $views = array();

  // Exported view: casetracker_console_report
  $view = new view;
  $view->name = 'casetracker_cases_report';
  $view->description = 'Atrium > Case Tracker > Print Report';
  $view->tag = 'atrium';
  $view->base_table = 'node';
  $view->core = 6;
  $view->api_version = '2';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('relationships', array(
    'pid' => array(
      'label' => 'project',
      'required' => 0,
      'id' => 'pid',
      'table' => 'casetracker_case',
      'field' => 'pid',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('fields', array(
    'pid' => array(
      'label' => 'Project',
      'exclude' => 0,
      'id' => 'pid',
      'table' => 'casetracker_case',
      'field' => 'pid',
      'relationship' => 'none',
    ),
    'case_priority_id' => array(
      'label' => 'Priority',
      'exclude' => 0,
      'id' => 'case_priority_id',
      'table' => 'casetracker_case',
      'field' => 'case_priority_id',
      'relationship' => 'none',
    ),
    'last_updated' => array(
      'label' => 'Last post',
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
      'date_format' => 'small',
      'custom_date_format' => '',
      'reldate' => 'reldate',
      'exclude' => 0,
      'id' => 'last_updated',
      'table' => 'node_comment_statistics',
      'field' => 'last_updated',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'title' => array(
      'label' => 'Title',
      'link_to_node' => 1,
      'exclude' => 0,
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'relationship' => 'none',
    ),
    'assign_to' => array(
      'label' => 'Assigned',
      'exclude' => 0,
      'id' => 'assign_to',
      'table' => 'casetracker_case',
      'field' => 'assign_to',
      'relationship' => 'none',
    ),
    'case_status_id' => array(
      'label' => 'Status',
      'exclude' => 0,
      'id' => 'case_status_id',
      'table' => 'casetracker_case',
      'field' => 'case_status_id',
      'relationship' => 'none',
    ),
    'field_due_date_value' => array(
      'label' => 'Due Date',
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
      'link_to_node' => 0,
      'label_type' => 'widget',
      'format' => 'day',
      'multiple' => array(
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_to' => '',
        'group' => '',
      ),
      'repeat' => array(
        'show_repeat_rule' => '',
      ),
      'fromto' => array(
        'fromto' => 'both',
      ),
      'exclude' => 0,
      'id' => 'field_due_date_value',
      'table' => 'node_data_field_due_date',
      'field' => 'field_due_date_value',
      'relationship' => 'none',
    ),
    'timestamp' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'strip_tags' => 0,
        'html' => 0,
      ),
      'link_to_node' => 0,
      'comments' => 0,
      'exclude' => 0,
      'id' => 'timestamp',
      'table' => 'history_user',
      'field' => 'timestamp',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('filters', array(
    'case' => array(
      'operator' => '=',
      'value' => '',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'case',
      'table' => 'node',
      'field' => 'case',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
    'status' => array(
      'operator' => '=',
      'value' => 1,
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
    'status_1' => array(
      'operator' => '=',
      'value' => 1,
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'status_1',
      'table' => 'node',
      'field' => 'status',
      'relationship' => 'pid',
    ),
    'keys' => array(
      'operator' => 'optional',
      'value' => '',
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'keys_op',
        'identifier' => 'keys',
        'label' => 'Search',
        'optional' => 1,
        'remember' => 0,
      ),
      'id' => 'keys',
      'table' => 'search_index',
      'field' => 'keys',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'pid' => array(
      'operator' => 'or',
      'value' => array(),
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'pid_op',
        'identifier' => 'pid',
        'label' => 'Project',
        'optional' => 1,
        'single' => 1,
        'remember' => 0,
        'reduce' => 0,
      ),
      'id' => 'pid',
      'table' => 'casetracker_case',
      'field' => 'pid',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
      'reduce_duplicates' => 0,
    ),
    'case_priority_id' => array(
      'operator' => 'or',
      'value' => array(),
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'case_priority_id_op',
        'identifier' => 'case_priority_id',
        'label' => 'Priority',
        'optional' => 1,
        'single' => 1,
        'remember' => 0,
        'reduce' => 0,
      ),
      'id' => 'case_priority_id',
      'table' => 'casetracker_case',
      'field' => 'case_priority_id',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
      'reduce_duplicates' => 0,
    ),
    'case_status_id' => array(
      'operator' => 'or',
      'value' => array(),
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'case_status_id_op',
        'identifier' => 'case_status_id',
        'label' => 'Status',
        'optional' => 1,
        'single' => 1,
        'remember' => 0,
        'reduce' => 0,
      ),
      'id' => 'case_status_id',
      'table' => 'casetracker_case',
      'field' => 'case_status_id',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
      'reduce_duplicates' => 0,
    ),
    'case_type_id' => array(
      'operator' => 'or',
      'value' => array(),
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'case_type_id_op',
        'identifier' => 'case_type_id',
        'label' => 'Case type',
        'optional' => 1,
        'single' => 1,
        'remember' => 0,
        'reduce' => 0,
      ),
      'id' => 'case_type_id',
      'table' => 'casetracker_case',
      'field' => 'case_type_id',
      'relationship' => 'none',
      'reduce_duplicates' => 0,
    ),
    'current' => array(
      'operator' => 'all',
      'value' => 'all',
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
    'case_status_closed' => array(
      'operator' => '=',
      'value' => 0,
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'operator' => '',
        'identifier' => 'case_status_closed',
        'label' => 'Show closed cases',
        'optional' => 0,
        'single' => 0,
        'remember' => 0,
      ),
      'id' => 'case_status_closed',
      'table' => 'casetracker_case',
      'field' => 'case_status_closed',
      'relationship' => 'none',
    ),
    'field_due_date_value' => array(
      'operator' => '=',
      'value' => array(
        'min' => NULL,
        'max' => NULL,
        'value' => NULL,
        'default_date' => '',
        'default_to_date' => '',
      ),
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'operator' => 'field_due_date_value_op',
        'label' => 'Due Date',
        'use_operator' => 0,
        'identifier' => 'field_due_date_value',
        'optional' => 1,
        'remember' => 0,
      ),
      'date_fields' => array(
        'node_data_field_due_date.field_due_date_value' => 'node_data_field_due_date.field_due_date_value',
      ),
      'date_method' => 'OR',
      'granularity' => 'day',
      'form_type' => 'date_text',
      'default_date' => '',
      'default_to_date' => '',
      'year_range' => '-3:+3',
      'id' => 'field_due_date_value',
      'table' => 'node_data_field_due_date',
      'field' => 'field_due_date_value',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'spaces_feature',
    'spaces_feature' => 'atrium_casetracker',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('title', 'All cases');
  $handler->override_option('empty', 'No cases found.');
  $handler->override_option('items_per_page', 25);
  $handler->override_option('use_pager', '1');
  $handler->override_option('style_plugin', 'table');
  $handler->override_option('style_options', array(
    'grouping' => '',
    'override' => 0,
    'sticky' => 0,
    'order' => 'desc',
    'columns' => array(
      'pid' => 'case_priority_id',
      'case_priority_id' => 'case_priority_id',
      'last_updated' => 'last_updated',
      'title' => 'title',
      'assign_to' => 'assign_to',
      'case_status_id' => 'case_status_id',
      'timestamp' => 'timestamp',
      'field_due_date_value' => 'field_due_date_value',
    ),
    'info' => array(
      'pid' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'case_priority_id' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'last_updated' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'title' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'assign_to' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'case_status_id' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'timestamp' => array(
        'separator' => '',
      ),
      'field_due_date_value' => array(
        'sortable' => 1,
        'separator' => '',
      ),
    ),
    'default' => 'last_updated',
  ));
  $handler = $view->new_display('pdf', 'PDF Page', 'pdf_1');
  $handler->override_option('style_plugin', 'pdf_table');
  $handler->override_option('style_options', array(
    'mission_description' => FALSE,
    'description' => '',
    'info' => array(
      'pid' => array(
        'header_style' => array(
          'text' => array(
            'font_size' => '',
            'font_family' => 'default',
            'font_style' => array(
              'b' => 0,
              'i' => 0,
              'u' => 0,
              'd' => 0,
              'o' => 0,
            ),
            'align' => NULL,
            'hyphenate' => NULL,
            'color' => '',
          ),
          'render' => array(
            'is_html' => 1,
            'eval_before' => '',
            'eval_after' => '',
          ),
        ),
        'body_style' => array(
          'text' => array(
            'font_size' => '',
            'font_family' => 'default',
            'font_style' => array(
              'b' => 0,
              'i' => 0,
              'u' => 0,
              'd' => 0,
              'o' => 0,
            ),
            'align' => NULL,
            'hyphenate' => NULL,
            'color' => '',
          ),
          'render' => array(
            'is_html' => 1,
            'eval_before' => '',
            'eval_after' => '',
          ),
        ),
        'position' => array(
          'width' => '',
        ),
      ),
      'case_priority_id' => array(
        'header_style' => array(
          'text' => array(
            'font_size' => '',
            'font_family' => 'default',
            'font_style' => array(
              'b' => 0,
              'i' => 0,
              'u' => 0,
              'd' => 0,
              'o' => 0,
            ),
            'align' => NULL,
            'hyphenate' => NULL,
            'color' => '',
          ),
          'render' => array(
            'is_html' => 1,
            'eval_before' => '',
            'eval_after' => '',
          ),
        ),
        'body_style' => array(
          'text' => array(
            'font_size' => '',
            'font_family' => 'default',
            'font_style' => array(
              'b' => 0,
              'i' => 0,
              'u' => 0,
              'd' => 0,
              'o' => 0,
            ),
            'align' => NULL,
            'hyphenate' => NULL,
            'color' => '',
          ),
          'render' => array(
            'is_html' => 1,
            'eval_before' => '',
            'eval_after' => '',
          ),
        ),
        'position' => array(
          'width' => '',
        ),
      ),
      'last_updated' => array(
        'header_style' => array(
          'text' => array(
            'font_size' => '',
            'font_family' => 'default',
            'font_style' => array(
              'b' => 0,
              'i' => 0,
              'u' => 0,
              'd' => 0,
              'o' => 0,
            ),
            'align' => NULL,
            'hyphenate' => NULL,
            'color' => '',
          ),
          'render' => array(
            'is_html' => 1,
            'eval_before' => '',
            'eval_after' => '',
          ),
        ),
        'body_style' => array(
          'text' => array(
            'font_size' => '',
            'font_family' => 'default',
            'font_style' => array(
              'b' => 0,
              'i' => 0,
              'u' => 0,
              'd' => 0,
              'o' => 0,
            ),
            'align' => NULL,
            'hyphenate' => NULL,
            'color' => '',
          ),
          'render' => array(
            'is_html' => 1,
            'eval_before' => '',
            'eval_after' => '',
          ),
        ),
        'position' => array(
          'width' => '',
        ),
      ),
      'title' => array(
        'header_style' => array(
          'text' => array(
            'font_size' => '',
            'font_family' => 'default',
            'font_style' => array(
              'b' => 0,
              'i' => 0,
              'u' => 0,
              'd' => 0,
              'o' => 0,
            ),
            'align' => NULL,
            'hyphenate' => NULL,
            'color' => '',
          ),
          'render' => array(
            'is_html' => 1,
            'eval_before' => '',
            'eval_after' => '',
          ),
        ),
        'body_style' => array(
          'text' => array(
            'font_size' => '',
            'font_family' => 'default',
            'font_style' => array(
              'b' => 0,
              'i' => 0,
              'u' => 0,
              'd' => 0,
              'o' => 0,
            ),
            'align' => NULL,
            'hyphenate' => NULL,
            'color' => '',
          ),
          'render' => array(
            'is_html' => 1,
            'eval_before' => '',
            'eval_after' => '',
          ),
        ),
        'position' => array(
          'width' => '',
        ),
      ),
      'assign_to' => array(
        'header_style' => array(
          'text' => array(
            'font_size' => '',
            'font_family' => 'default',
            'font_style' => array(
              'b' => 0,
              'i' => 0,
              'u' => 0,
              'd' => 0,
              'o' => 0,
            ),
            'align' => NULL,
            'hyphenate' => NULL,
            'color' => '',
          ),
          'render' => array(
            'is_html' => 1,
            'eval_before' => '',
            'eval_after' => '',
          ),
        ),
        'body_style' => array(
          'text' => array(
            'font_size' => '',
            'font_family' => 'default',
            'font_style' => array(
              'b' => 0,
              'i' => 0,
              'u' => 0,
              'd' => 0,
              'o' => 0,
            ),
            'align' => NULL,
            'hyphenate' => NULL,
            'color' => '',
          ),
          'render' => array(
            'is_html' => 1,
            'eval_before' => '',
            'eval_after' => '',
          ),
        ),
        'position' => array(
          'width' => '',
        ),
      ),
      'case_status_id' => array(
        'header_style' => array(
          'text' => array(
            'font_size' => '',
            'font_family' => 'default',
            'font_style' => array(
              'b' => 0,
              'i' => 0,
              'u' => 0,
              'd' => 0,
              'o' => 0,
            ),
            'align' => NULL,
            'hyphenate' => NULL,
            'color' => '',
          ),
          'render' => array(
            'is_html' => 1,
            'eval_before' => '',
            'eval_after' => '',
          ),
        ),
        'body_style' => array(
          'text' => array(
            'font_size' => '',
            'font_family' => 'default',
            'font_style' => array(
              'b' => 0,
              'i' => 0,
              'u' => 0,
              'd' => 0,
              'o' => 0,
            ),
            'align' => NULL,
            'hyphenate' => NULL,
            'color' => '',
          ),
          'render' => array(
            'is_html' => 1,
            'eval_before' => '',
            'eval_after' => '',
          ),
        ),
        'position' => array(
          'width' => '',
        ),
      ),
      'field_due_date_value' => array(
        'header_style' => array(
          'text' => array(
            'font_size' => '',
            'font_family' => 'default',
            'font_style' => array(
              'b' => 0,
              'i' => 0,
              'u' => 0,
              'd' => 0,
              'o' => 0,
            ),
            'align' => NULL,
            'hyphenate' => NULL,
            'color' => '',
          ),
          'render' => array(
            'is_html' => 1,
            'eval_before' => '',
            'eval_after' => '',
          ),
        ),
        'body_style' => array(
          'text' => array(
            'font_size' => '',
            'font_family' => 'default',
            'font_style' => array(
              'b' => 0,
              'i' => 0,
              'u' => 0,
              'd' => 0,
              'o' => 0,
            ),
            'align' => NULL,
            'hyphenate' => NULL,
            'color' => '',
          ),
          'render' => array(
            'is_html' => 1,
            'eval_before' => '',
            'eval_after' => '',
          ),
        ),
        'position' => array(
          'width' => '',
        ),
      ),
      'timestamp' => array(
        'header_style' => array(
          'text' => array(
            'font_size' => '',
            'font_family' => 'default',
            'font_style' => array(
              'b' => 0,
              'i' => 0,
              'u' => 0,
              'd' => 0,
              'o' => 0,
            ),
            'align' => NULL,
            'hyphenate' => NULL,
            'color' => '',
          ),
          'render' => array(
            'is_html' => 1,
            'eval_before' => '',
            'eval_after' => '',
          ),
        ),
        'body_style' => array(
          'text' => array(
            'font_size' => '',
            'font_family' => 'default',
            'font_style' => array(
              'b' => 0,
              'i' => 0,
              'u' => 0,
              'd' => 0,
              'o' => 0,
            ),
            'align' => NULL,
            'hyphenate' => NULL,
            'color' => '',
          ),
          'render' => array(
            'is_html' => 1,
            'eval_before' => '',
            'eval_after' => '',
          ),
        ),
        'position' => array(
          'width' => '',
        ),
      ),
    ),
    'position' => array(
      'last_writing_position' => 1,
      'x' => '',
      'y' => '',
      'width' => '',
      'row_height' => '',
    ),
    'grouping' => '',
  ));
  $handler->override_option('row_plugin', 'pdf_fields');
  $handler->override_option('row_options', array(
    'formats' => array(
      'pid' => array(
        'position' => array(
          'object' => 'page',
          'corner' => 'top_left',
          'x' => '',
          'y' => '',
          'width' => '',
          'height' => '',
        ),
        'text' => array(
          'font_size' => '',
          'font_family' => 'default',
          'font_style' => array(
            'b' => 0,
            'i' => 0,
            'u' => 0,
            'd' => 0,
            'o' => 0,
          ),
          'align' => NULL,
          'hyphenate' => NULL,
          'color' => '',
        ),
        'render' => array(
          'is_html' => 1,
          'minimal_space' => '1',
          'eval_before' => '',
          'eval_after' => '',
        ),
      ),
      'case_priority_id' => array(
        'position' => array(
          'object' => 'page',
          'corner' => 'top_left',
          'x' => '',
          'y' => '',
          'width' => '',
          'height' => '',
        ),
        'text' => array(
          'font_size' => '',
          'font_family' => 'default',
          'font_style' => array(
            'b' => 0,
            'i' => 0,
            'u' => 0,
            'd' => 0,
            'o' => 0,
          ),
          'align' => NULL,
          'hyphenate' => NULL,
          'color' => '',
        ),
        'render' => array(
          'is_html' => 1,
          'minimal_space' => '1',
          'eval_before' => '',
          'eval_after' => '',
        ),
      ),
      'last_updated' => array(
        'position' => array(
          'object' => 'page',
          'corner' => 'top_left',
          'x' => '',
          'y' => '',
          'width' => '',
          'height' => '',
        ),
        'text' => array(
          'font_size' => '',
          'font_family' => 'default',
          'font_style' => array(
            'b' => 0,
            'i' => 0,
            'u' => 0,
            'd' => 0,
            'o' => 0,
          ),
          'align' => NULL,
          'hyphenate' => NULL,
          'color' => '',
        ),
        'render' => array(
          'is_html' => 1,
          'minimal_space' => '1',
          'eval_before' => '',
          'eval_after' => '',
        ),
      ),
      'title' => array(
        'position' => array(
          'object' => 'page',
          'corner' => 'top_left',
          'x' => '',
          'y' => '',
          'width' => '',
          'height' => '',
        ),
        'text' => array(
          'font_size' => '',
          'font_family' => 'default',
          'font_style' => array(
            'b' => 0,
            'i' => 0,
            'u' => 0,
            'd' => 0,
            'o' => 0,
          ),
          'align' => NULL,
          'hyphenate' => NULL,
          'color' => '',
        ),
        'render' => array(
          'is_html' => 1,
          'minimal_space' => '1',
          'eval_before' => '',
          'eval_after' => '',
        ),
      ),
      'assign_to' => array(
        'position' => array(
          'object' => 'page',
          'corner' => 'top_left',
          'x' => '',
          'y' => '',
          'width' => '',
          'height' => '',
        ),
        'text' => array(
          'font_size' => '',
          'font_family' => 'default',
          'font_style' => array(
            'b' => 0,
            'i' => 0,
            'u' => 0,
            'd' => 0,
            'o' => 0,
          ),
          'align' => NULL,
          'hyphenate' => NULL,
          'color' => '',
        ),
        'render' => array(
          'is_html' => 1,
          'minimal_space' => '1',
          'eval_before' => '',
          'eval_after' => '',
        ),
      ),
      'case_status_id' => array(
        'position' => array(
          'object' => 'page',
          'corner' => 'top_left',
          'x' => '',
          'y' => '',
          'width' => '',
          'height' => '',
        ),
        'text' => array(
          'font_size' => '',
          'font_family' => 'default',
          'font_style' => array(
            'b' => 0,
            'i' => 0,
            'u' => 0,
            'd' => 0,
            'o' => 0,
          ),
          'align' => NULL,
          'hyphenate' => NULL,
          'color' => '',
        ),
        'render' => array(
          'is_html' => 1,
          'minimal_space' => '1',
          'eval_before' => '',
          'eval_after' => '',
        ),
      ),
      'field_due_date_value' => array(
        'position' => array(
          'object' => 'page',
          'corner' => 'top_left',
          'x' => '',
          'y' => '',
          'width' => '',
          'height' => '',
        ),
        'text' => array(
          'font_size' => '',
          'font_family' => 'default',
          'font_style' => array(
            'b' => 0,
            'i' => 0,
            'u' => 0,
            'd' => 0,
            'o' => 0,
          ),
          'align' => NULL,
          'hyphenate' => NULL,
          'color' => '',
        ),
        'render' => array(
          'is_html' => 1,
          'minimal_space' => '1',
          'eval_before' => '',
          'eval_after' => '',
        ),
      ),
      'timestamp' => array(
        'position' => array(
          'object' => 'page',
          'corner' => 'top_left',
          'x' => '',
          'y' => '',
          'width' => '',
          'height' => '',
        ),
        'text' => array(
          'font_size' => '',
          'font_family' => 'default',
          'font_style' => array(
            'b' => 0,
            'i' => 0,
            'u' => 0,
            'd' => 0,
            'o' => 0,
          ),
          'align' => NULL,
          'hyphenate' => NULL,
          'color' => '',
        ),
        'render' => array(
          'is_html' => 1,
          'minimal_space' => '1',
          'eval_before' => '',
          'eval_after' => '',
        ),
      ),
    ),
    'leading_template' => '0',
    'template' => '0',
    'succeed_template' => '0',
    'template_file' => '',
  ));
  $handler->override_option('path', 'casetracker/filter/report');
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
  $translatables['casetracker_cases_report'] = array(
    t('All cases'),
    t('Defaults'),
    t('No cases found.'),
    t('PDF Page'),
  );

  $views[$view->name] = $view;

  return $views;
}
