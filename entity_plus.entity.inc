<?php
/**
 * @file
 *
 * Helper functions for Entity Order.
 */

/**
 * Helper function that returns entity info for all supported core modules,
 * relevant for UUID functionality.
 *
 */
function entity_plus_get_core_entity_info() {
  $info = array();

  $info['user'] = array(
    'base table'  => 'users',
    'field_handler' => 'views_handler_field_user',
  );

  $info['block'] = array(
    'base table' => 'block',
  );

  $info['node'] = array(
    'base table' => 'node',
    'revision table' => 'node_revision',
    'field_handler' => 'views_handler_field_node',
  );
  if (module_exists('comment')) {
    $info['comment'] = array(
      'base table' => 'comment',
      'field_handler' => 'views_handler_field_comment',
    );
  }
  if (module_exists('file')) {
    $info['file'] = array(
      'base table' => 'file_managed',
      'field_handler' => 'views_handler_field_file',
    );
  }
  if (module_exists('taxonomy')) {
    $info['taxonomy_term'] = array(
      'base table' => 'taxonomy_term_data',
      'field_handler' => 'views_handler_field_taxonomy',
    );
  }
  if (module_exists('field_collection')) {
    $info['field_collection_item'] = array(
      'base table' => 'field_collection_item',
    );
  }

  return $info;
}