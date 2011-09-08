<?php
// $Id: panels-grid-12.tpl.php,v 1.0 zachattack Exp $
/**
 * @file
 * Template for a single column panel layout.
 *
 */
?>
<section class="panel-display panel-grid_12 clearfix" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <?php if ($content['main']): ?>  
    <div class="panel grid-12">
      <div class="inside"><?php print $content['main']; ?></div>
    </div>
  <?php endif; ?>
</section>
