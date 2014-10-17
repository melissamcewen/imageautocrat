<?php
/**
 * @file
 * chicagoist_standard_images.features.inc
 */

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
