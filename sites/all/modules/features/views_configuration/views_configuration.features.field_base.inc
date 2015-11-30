<?php
/**
 * @file
 * views_configuration.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function views_configuration_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_star_review'.
  $field_bases['field_star_review'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_star_review',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'fivestar',
    'settings' => array(
      'axis' => 'vote',
    ),
    'translatable' => 0,
    'type' => 'fivestar',
  );

  return $field_bases;
}
