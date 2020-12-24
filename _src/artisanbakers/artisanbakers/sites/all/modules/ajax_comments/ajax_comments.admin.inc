<?php

/**
 * @file
 * AJAX comments settings form.
 */

/**
 * AJAX comments settings form.
 */
function ajax_comments_settings() {
  $options =  node_type_get_names();
  $form['ajax_comments_node_types'] = array(
    '#title' => t('Content types'),
    '#type' => 'checkboxes',
    '#description' => t('Select node types you want to activate ajax comments on. If you select nothing, AJAX Comments will be enabled everywhere.'),
    '#default_value' => variable_get('ajax_comments_node_types', array()),
    '#options' => $options, 
  );
  return system_settings_form($form);
}
