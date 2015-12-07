<?php
/**
 * @file
 * The primary PHP file for this theme.
 */
function hr_menu_tree__menu_administration_menu($variables) {
  return '<ul class="nav nav-pills">' . $variables['tree'] . '</ul>';
}