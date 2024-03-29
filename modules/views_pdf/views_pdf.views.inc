<?php

/**
 * @file
 * Implementaion of the views hooks.
 */

/**
 * Implementation of hook_views_handlers()
 */
function views_pdf_views_handlers() {
  return array(
    'info' => array(
      'path' => drupal_get_path('module', 'views_pdf') .'/field_plugins',
    ),
    'handlers' => array(
      'views_pdf_handler_page_break' => array(
        'parent' => 'views_handler_field',
      ),
      'views_pdf_handler_page_number' => array(
        'parent' => 'views_handler_field',
      ),
    ),
  );
}

/**
 * Implementation of hook_views_data()
 */
function views_pdf_views_data() {
  $data['pdf']['table']['group'] = t('PDF');
  $data['pdf']['table']['join'] = array(
    '#global' => array(),
  );
  
  $data['pdf']['page_break'] = array(
    'title' => t('Page Break'),
    'help' => t('Insert in the PDF view a new page.'),
    'field' => array(
      'handler' => 'views_pdf_handler_page_break',
      'click sortable' => FALSE,
      'notafield' => TRUE,
    ),
  );
  
  $data['pdf']['page_number'] = array(
    'title' => t('Page Number'),
    'help' => t('Contains the page number of the current page.'),
    'field' => array(
      'handler' => 'views_pdf_handler_page_number',
      'click sortable' => FALSE,
      'notafield' => TRUE,
    ),
  );
  
  return $data;
}


/**
 * Implementation of hook_views_plugins().
 */
function views_pdf_views_plugins() {
  $path = drupal_get_path('module', 'views_pdf');
  $theme_path = $path . '/theme';
  return array(
    'module' => 'views_pdf',
    'display' => array(
      'pdf' => array(
        'title' => t('PDF Page'),
        'help' => t('Outputs the view as a PDF file.'),
        'handler' => 'views_pdf_plugin_display',
        'parent' => 'page', // so it knows to load the page plugin .inc file
        'uses hook menu' => TRUE,
        'use ajax' => FALSE,
        'use pager' => FALSE,
        'use_more' => FALSE,
        'accept attachments' => FALSE,
        'path' => $path,
        'admin' => t('PDF Page'),
        'theme' => 'views_pdf', // For the prefix of template file!
        'theme file' => 'views_pdf.theme.inc',
      ),
    ),
    'style' => array(
      'pdf_table' => array(
        'title' => t('PDF Table'),
        'help' => t('Display the view as a table.'),
        'path' => $path,
        'handler' => 'views_pdf_plugin_style_table',
        'parent' => 'default',
        'theme' => 'views_pdf_table',
        'theme file' => 'views_pdf.theme.inc',
        'uses row plugin' => FALSE,
        'uses fields' => TRUE,
        'uses options' => TRUE,
        'type' => 'pdf',
      ),
      'pdf_unformatted' => array(
        'title' => t('PDF unformatted'),
        'help' => t('Display the view in a unformatted way.'),
        'path' => $path,
        'handler' => 'views_pdf_plugin_style_unformatted',
        'parent' => 'default',
        'theme' => 'views_pdf_unformatted',
        'theme file' => 'views_pdf.theme.inc',
        'uses row plugin' => TRUE,
        'uses fields' => TRUE,
        'uses options' => TRUE,
        'type' => 'pdf',
      ),
    ),
   'row' => array(
      'pdf_fields' => array(
        'title' => t('PDF Fields'),
        'help' => t('Displays the fields with an optional template.'),
        'handler' => 'views_pdf_plugin_row_fields',
        'theme' => 'views_pdf_fields',
        'uses fields' => TRUE,
        'uses options' => TRUE,
        'type' => 'pdf',
        'help topic' => 'style-row-fields',
      ),
    ),
 

  );
}
