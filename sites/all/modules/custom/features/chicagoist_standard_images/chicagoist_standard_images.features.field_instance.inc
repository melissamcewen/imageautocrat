<?php
/**
 * @file
 * chicagoist_standard_images.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function chicagoist_standard_images_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-landscape_image-field_landscape_image'
  $field_instances['node-landscape_image-field_landscape_image'] = array(
    'bundle' => 'landscape_image',
    'deleted' => 0,
    'description' => 'Click upload after selecting your image to crop it yourself, otherwise it will auto-crop towards the center of the image.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'landscape',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_landscape_image',
    'label' => 'Landscape Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'filefield_paths' => array(
        'active_updating' => 0,
        'file_name' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 1,
          ),
          'value' => '[current-date:custom:Y] [current-date:custom:n] [node:title].[file:extension]',
        ),
        'file_path' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 0,
          ),
          'value' => '',
        ),
        'retroactive_update' => 0,
      ),
      'filefield_paths_enabled' => 1,
      'max_filesize' => '',
      'max_resolution' => '2000x2000',
      'min_resolution' => '640x480',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'imagefield_crop',
      'settings' => array(
        'collapsible' => 2,
        'croparea' => '700x600',
        'enforce_minimum' => 1,
        'enforce_ratio' => 1,
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
        'resolution' => '640x480',
      ),
      'type' => 'imagefield_crop_widget',
      'weight' => -3,
    ),
  );

  // Exported field_instance: 'node-portrait_image-field_portrait_image'
  $field_instances['node-portrait_image-field_portrait_image'] = array(
    'bundle' => 'portrait_image',
    'deleted' => 0,
    'description' => 'Click upload after selecting your image to crop it yourself, otherwise it will auto-crop towards the center of the image.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'portrait',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_portrait_image',
    'label' => 'Portrait Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'filefield_paths' => array(
        'active_updating' => 0,
        'file_name' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 1,
          ),
          'value' => '[current-date:custom:Y] [current-date:custom:n] [node:title].[file:extension]',
        ),
        'file_path' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 0,
          ),
          'value' => '',
        ),
        'retroactive_update' => 0,
      ),
      'filefield_paths_enabled' => 1,
      'max_filesize' => '',
      'max_resolution' => '2000x2000',
      'min_resolution' => '365x548',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'imagefield_crop',
      'settings' => array(
        'collapsible' => 2,
        'croparea' => '600x700',
        'enforce_minimum' => 1,
        'enforce_ratio' => 1,
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
        'resolution' => '365x548',
      ),
      'type' => 'imagefield_crop_widget',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Click upload after selecting your image to crop it yourself, otherwise it will auto-crop towards the center of the image.');
  t('Landscape Image');
  t('Portrait Image');

  return $field_instances;
}
