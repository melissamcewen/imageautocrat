<?php
/**
 * @file
 * chicagoist_standard_images.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function chicagoist_standard_images_image_default_styles() {
  $styles = array();

  // Exported image style: landscape.
  $styles['landscape'] = array(
    'label' => 'Landscape',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 640,
          'height' => 480,
        ),
        'weight' => 2,
      ),
      2 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/jpeg',
          'quality' => 75,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: portrait.
  $styles['portrait'] = array(
    'label' => 'Portrait',
    'effects' => array(
      3 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 365,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      4 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/jpeg',
          'quality' => 75,
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function chicagoist_standard_images_node_info() {
  $items = array(
    'landscape_image' => array(
      'name' => t('Landscape Image'),
      'base' => 'node_content',
      'description' => t('An image that is wider than taller'),
      'has_title' => '1',
      'title_label' => t('Image title'),
      'help' => '',
    ),
    'portrait_image' => array(
      'name' => t('Portrait image'),
      'base' => 'node_content',
      'description' => t('An image than is taller than wider'),
      'has_title' => '1',
      'title_label' => t('Image title'),
      'help' => t('Once you\'ve submitted it you can just right click and save the image'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
