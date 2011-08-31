<?php
// $Id: grid_4_8.inc,v 1.1 2011/03/30 15:54:25 zachattack Exp $

// Plugin definition
$plugin = array(
  'title' => t('Grid: 4-8'),
  'category' => t('Drupal Camp'),
  'icon' => 'grid_4_8.png',
  'theme' => 'panels-grid-4-8',
  'panels' => array(
    'left' => t('Left side'),
    'right' => t('Right side'),
    'bottom' => t('Bottom wide')
  ),
);
