<?php

// Plugin definition
$plugin = array(
  'title' => t('Home Page panel'),
  'category' => t('Columns: 2'),
  'icon' => 'home_page.png',
  'theme' => 'panels_home',
  'regions' => array(
    'top' => t('Top area'),
    'left' => t('Left side'),
    'right' => t('Right side'),
    'speakers' => t('Middle Speakers')
  ),
);
