<?php
/**
 * @file
 * Views integration for vendor applications.
 */
function ob_media_views_data() {
  // Group
  $data['ob_media']['table']['group'] = t('Scheduled programs');

  // Base table declaration
  $data['ob_media']['table']['base'] = array(
    'field'  => 'application_id',
    'title'  => t('Scheduled programs'),
    'help'   => t('Scheduled programs imported from the OpenBroadcaster API'),
    'weight' => -10,
  );

  // Duration
  $data['ob_media']['duration'] = array(
    'title' => t('Program duration'),
    'help'  => t('The length of the program in seconds.'),
    'field' => array(
      'handler'        => 'views_handler_field_numeric',
      'click sortable' => TRUE,
    ),
    'argument' => array(
      'handler'    => 'views_handler_argument_numeric',
      'name field' => 'name',
      'numeric'    => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );

  // Start
  $data['ob_media']['start'] = array(
    'title' => t('Program start'),
    'help'  => t('The timestamp of the start of the program.'),
    'field' => array(
      'handler'        => 'views_handler_field_date',
      'click sortable' => TRUE,
    ),
    'argument' => array(
      'handler'    => 'views_handler_argument_numeric',
      'name field' => 'name',
      'numeric'    => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_date',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );

  // Name
  $data['ob_media']['name'] = array(
    'title' => t('Program name'),
    'help'  => t('The name of the program.'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );

  // Description
  $data['ob_media']['description'] = array(
    'title' => t('Program description'),
    'help'  => t('The description of the program.'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );

  // Owner
  $data['ob_media']['owner'] = array(
    'title' => t('Program owner'),
    'help'  => t('The owner of the program.'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );

  // Stamp
  $data['ob_media']['stamp'] = array(
    'title' => t('Timestamp'),
    'help'  => t('The time the program was imported from OpenBroadcaster.'),
    'field' => array(
      'handler'        => 'views_handler_field_date',
      'click sortable' => TRUE,
    ),
    'argument' => array(
      'handler'    => 'views_handler_argument_numeric',
      'name field' => 'name',
      'numeric'    => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_date',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );

  return $data;
}
