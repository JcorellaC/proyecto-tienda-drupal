<?php
/**
 * @file
 * proyect_wysiwyg.features.wysiwyg.inc
 */

/**
 * Implements hook_wysiwyg_default_profiles().
 */
function proyect_wysiwyg_wysiwyg_default_profiles() {
  $profiles = array();

  // Exported profile: filtered_html
  $profiles['filtered_html'] = array(
    'format' => 'filtered_html',
    'editor' => 'ckeditor',
    'settings' => FALSE,
    'rdf_mapping' => array(),
  );

  return $profiles;
}
