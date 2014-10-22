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
    'name' => 'landscape',
    'label' => 'Landscape',
    'effects' => array(
      2 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 640,
          'height' => 480,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: portrait.
  $styles['portrait'] = array(
    'name' => 'portrait',
    'label' => 'Portrait',
    'effects' => array(
      3 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 365,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
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
