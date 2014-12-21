<?php
/**
 * Created by PhpStorm.
 * User: thaohuynh
 * Date: 12/21/14
 * Time: 16:00
 */

/**
 * Config form for Entity Plus Order.
 */
function entity_plus_order_config_form($form, &$form_state) {

  $form['entity_plus_node_order'] = array(
    '#type'          => 'radios',
    '#required'      => TRUE,
    '#title'         => t('Node order'),
    '#description'   => t('Enable order on node'),
    '#default_value' => variable_get('entity_plus_node_order'),
    '#options'       => array(1 => "Yes", 0 => "No"),
  );

  return system_settings_form($form);
}
