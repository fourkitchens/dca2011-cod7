<?php
// $Id: panels-grid-4-8.tpl.php,v 1.0 zachattack Exp $
/**
 * @file
 * Template for a 2 column panel layout.
 *
 */
?>
<div class="panel-display panel-grid_4_8 clearfix" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <?php if ($content['left'] || $content['right']): ?>  
    <div class="panel panel-col-first grid-4">
      <div class="inside"><?php print $content['left']; ?></div>
    </div>
    
    <div class="panel panel-col-last grid-8">
      <div class="inside"><?php print $content['right']; ?></div>
    </div>
  <?php endif; ?>
  
  <?php if ($content['bottom']): ?>
    <div class="panel panel-row grid-12 alpha omega clearfix"> 
      <div class="inside"><?php print $content['bottom']; ?></div>
    </div>
  <?php endif; ?>
</div>
