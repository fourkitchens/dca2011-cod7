<?php

// Plugin definition
$plugin = array(
  'title' => t('Home Page panel'),
  'category' => t('Drupal Camp'),
  'icon' => 'homepage.png',
  'theme' => 'panels_home',
  'regions' => array(
    'top' => t('Top area'),
    'left' => t('Left side'),
    'right' => t('Right side'),
    'speakers' => t('Middle Speakers')
  ),
);
