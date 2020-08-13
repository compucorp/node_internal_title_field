<?php

/**
 * @file
 * node_internal_title_field.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function node_internal_title_field_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_node_internal_title'.
  $field_bases['field_node_internal_title'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_node_internal_title',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  return $field_bases;
}
