<?php
/**
 * @file
 * views_configuration.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function views_configuration_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'comment-comment_node_product-field_star_review'.
  $field_instances['comment-comment_node_product-field_star_review'] = array(
    'bundle' => 'comment_node_product',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'fivestar',
        'settings' => array(
          'expose' => TRUE,
          'style' => 'average',
          'text' => 'average',
          'widget' => array(
            'fivestar_widget' => NULL,
          ),
        ),
        'type' => 'fivestar_formatter_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'field_star_review',
    'label' => 'star_review',
    'required' => FALSE,
    'settings' => array(
      'stars' => 5,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'fivestar',
      'settings' => array(
        'widget' => array(
          'fivestar_widget' => 'default',
        ),
      ),
      'type' => 'stars',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('star_review');

  return $field_instances;
}
