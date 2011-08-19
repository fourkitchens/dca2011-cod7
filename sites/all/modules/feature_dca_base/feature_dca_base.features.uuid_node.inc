<?php
/**
 * @file
 * feature_dca_base.features.uuid_node.inc
 */

/**
 * Implementation of hook_uuid_features_default_content().
 */
function feature_dca_base_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => '1',
  'title' => 'What is Drupal?',
  'log' => '',
  'status' => '1',
  'comment' => '1',
  'promote' => '0',
  'sticky' => '0',
  'vuuid' => '2a4a18ec-69fd-b844-392f-42cb2305398b',
  'type' => 'faq',
  'language' => 'und',
  'created' => '1313016804',
  'tnid' => '0',
  'translate' => '0',
  'uuid' => '06f43595-526f-b6f4-b5a0-71f33469c727',
  'revision_uid' => '1',
  'question' => 'What is Drupal?',
  'detailed_question' => '',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Drupal is an open source content management system and web application framework. Learn more at [drupal.org](http://drupal.org)',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Drupal is an open source content management system and web application framework. Learn more at <a href="http://drupal.org">drupal.org</a></p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => '0',
  'last_comment_timestamp' => '1313016804',
  'last_comment_name' => NULL,
  'last_comment_uid' => '1',
  'comment_count' => '0',
  'name' => 'admin',
  'picture' => '0',
  'data' => 'a:1:{s:7:"overlay";i:1;}',
  'date' => '2011-08-10 17:53:24 -0500',
);
  $nodes[] = array(
  'uid' => '1',
  'title' => 'Venue',
  'log' => '',
  'status' => '1',
  'comment' => '1',
  'promote' => '0',
  'sticky' => '0',
  'vuuid' => '15ae6fe2-451f-d794-b9ee-5da1212edbbf',
  'type' => 'page',
  'language' => 'und',
  'created' => '1313015762',
  'tnid' => '0',
  'translate' => '0',
  'uuid' => '09ffcf26-12ff-6404-653a-19adb007f15c',
  'revision_uid' => '1',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '## AT&T Executive Education and Conference Center

[map]

Address: 1900 University Ave, Austin, TX 78705-5611 (Directions)
Website: meetattexas.com
Phone: 512-451-5011

### Parking

Coming soon!

### Floorplan

Coming soon!',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<h2>AT&amp;T Executive Education and Conference Center</h2>
<p>[map]</p>
<p>Address: 1900 University Ave, Austin, TX 78705-5611 (Directions)<br />
Website: meetattexas.com<br />
Phone: 512-451-5011</p>
<h3>Parking</h3>
<p>Coming soon!</p>
<h3>Floorplan</h3>
<p>Coming soon!</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => '0',
  'last_comment_timestamp' => '1313015762',
  'last_comment_name' => NULL,
  'last_comment_uid' => '1',
  'comment_count' => '0',
  'name' => 'admin',
  'picture' => '0',
  'data' => 'a:1:{s:7:"overlay";i:1;}',
  'date' => '2011-08-10 17:36:02 -0500',
);
  $nodes[] = array(
  'uid' => '1',
  'title' => 'What is DrupalCamp Austin?',
  'log' => '',
  'status' => '1',
  'comment' => '1',
  'promote' => '0',
  'sticky' => '0',
  'vuuid' => '1d39a8c4-ffdf-60c4-2912-818e5d999a49',
  'type' => 'faq',
  'language' => 'und',
  'created' => '1313016315',
  'tnid' => '0',
  'translate' => '0',
  'uuid' => '105985f6-adbc-8964-cde2-0d81132b220c',
  'revision_uid' => '1',
  'question' => 'What is DrupalCamp Austin?',
  'detailed_question' => '',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'It\'s a two-day conference for web professionals, enthusiasts, and business types. Most of the content will Drupal specific, but there will also have presentations related to more general technologies such as HTML5 or Javascript.',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>It\'s a two-day conference for web professionals, enthusiasts, and business types. Most of the content will Drupal specific, but there will also have presentations related to more general technologies such as HTML5 or Javascript.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => '0',
  'last_comment_timestamp' => '1313016315',
  'last_comment_name' => NULL,
  'last_comment_uid' => '1',
  'comment_count' => '0',
  'name' => 'admin',
  'picture' => '0',
  'data' => 'a:1:{s:7:"overlay";i:1;}',
  'date' => '2011-08-10 17:45:15 -0500',
);
  $nodes[] = array(
  'uid' => '1',
  'title' => 'Training',
  'log' => '',
  'status' => '1',
  'comment' => '1',
  'promote' => '0',
  'sticky' => '0',
  'vuuid' => 'f80ab25c-ebdc-9054-29a7-ddb9240233fc',
  'type' => 'page',
  'language' => 'und',
  'created' => '1313099723',
  'tnid' => '0',
  'translate' => '0',
  'uuid' => '4d46823d-89cf-5314-49e9-617ff16e0fd3',
  'revision_uid' => '1',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'This year’s event has added training sessions to our spicy camp fare! The training track will run concurrently with sessions to create an immersive learning experience. During registration, attendees can add half-day and full-day training courses à la carte to their camp ticket.

## Full-day training classes

Training 1
Saturday

Training 2
Sunday

## Half-day training classes

Training 1
Saturday

Training 2
Saturday

Training 3
Sunday

Training 4
Sunday',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>This year’s event has added training sessions to our spicy camp fare! The training track will run concurrently with sessions to create an immersive learning experience. During registration, attendees can add half-day and full-day training courses à la carte to their camp ticket.</p>
<h2>Full-day training classes</h2>
<p>Training 1<br />
Saturday</p>
<p>Training 2<br />
Sunday</p>
<h2>Half-day training classes</h2>
<p>Training 1<br />
Saturday</p>
<p>Training 2<br />
Saturday</p>
<p>Training 3<br />
Sunday</p>
<p>Training 4<br />
Sunday</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => '0',
  'last_comment_timestamp' => '1313434387',
  'last_comment_name' => NULL,
  'last_comment_uid' => '1',
  'comment_count' => '0',
  'name' => 'admin',
  'picture' => '0',
  'data' => 'a:1:{s:7:"overlay";i:1;}',
  'date' => '2011-08-11 16:55:23 -0500',
);
  $nodes[] = array(
  'uid' => '1',
  'title' => 'Does it cost to attend?',
  'log' => '',
  'status' => '1',
  'comment' => '1',
  'promote' => '0',
  'sticky' => '0',
  'vuuid' => '08dcc5d8-d146-4a54-09e1-974042cfb103',
  'type' => 'faq',
  'language' => 'und',
  'created' => '1313016533',
  'tnid' => '0',
  'translate' => '0',
  'uuid' => '7795edcb-d1aa-d8a4-9d2b-37cfe0eccf29',
  'revision_uid' => '1',
  'question' => 'Does it cost to attend?',
  'detailed_question' => '',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Yes, you must register to attend and the cost is $40. There are formal trainings also happening during the camp, which are more expensive, but also allow you to attend camp sessions.',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Yes, you must register to attend and the cost is $40. There are formal trainings also happening during the camp, which are more expensive, but also allow you to attend camp sessions.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => '0',
  'last_comment_timestamp' => '1313016533',
  'last_comment_name' => NULL,
  'last_comment_uid' => '1',
  'comment_count' => '0',
  'name' => 'admin',
  'picture' => '0',
  'data' => 'a:1:{s:7:"overlay";i:1;}',
  'date' => '2011-08-10 17:48:53 -0500',
);
  $nodes[] = array(
  'uid' => '1',
  'title' => 'I can only attend one day, can I get a discounted ticket?',
  'log' => '',
  'status' => '1',
  'comment' => '1',
  'promote' => '0',
  'sticky' => '0',
  'vuuid' => 'd37458a2-0ec5-3a74-ed50-1d02e8ff89db',
  'type' => 'faq',
  'language' => 'und',
  'created' => '1313101447',
  'tnid' => '0',
  'translate' => '0',
  'uuid' => '832ff872-6f38-b324-9dd4-adfcacb42059',
  'revision_uid' => '1',
  'question' => 'I can only attend one day, can I get a discounted ticket?',
  'detailed_question' => '',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Unfortunately, we don\'t offer discounted tickets. However, we feel that the price of the event is affordable enough so that even if you can only attend one say you\'re still getting a great deal!',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Unfortunately, we don\'t offer discounted tickets. However, we feel that the price of the event is affordable enough so that even if you can only attend one say you\'re still getting a great deal!</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => '0',
  'last_comment_timestamp' => '1313101447',
  'last_comment_name' => NULL,
  'last_comment_uid' => '1',
  'comment_count' => '0',
  'name' => 'admin',
  'picture' => '0',
  'data' => 'a:1:{s:7:"overlay";i:1;}',
  'date' => '2011-08-11 17:24:07 -0500',
);
  $nodes[] = array(
  'uid' => '1',
  'title' => 'How does training work?',
  'log' => '',
  'status' => '1',
  'comment' => '1',
  'promote' => '0',
  'sticky' => '0',
  'vuuid' => 'f24688bb-d9da-ccf4-a100-cdfbd4a17a74',
  'type' => 'faq',
  'language' => 'und',
  'created' => '1313099636',
  'tnid' => '0',
  'translate' => '0',
  'uuid' => 'a86eb385-d208-af04-059c-dfbe5e4c1fba',
  'revision_uid' => '1',
  'question' => 'How does training work?',
  'detailed_question' => '',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'While the regular presentations of the camp are high-quality, if you are new to Drupal or wish to explore a topic in-depth you may want to consider registering for a training class. Find out more on the [training page](/training).',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>While the regular presentations of the camp are high-quality, if you are new to Drupal or wish to explore a topic in-depth you may want to consider registering for a training class. Find out more on the <a href="/training">training page</a>.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => '0',
  'last_comment_timestamp' => '1313099636',
  'last_comment_name' => NULL,
  'last_comment_uid' => '1',
  'comment_count' => '0',
  'name' => 'admin',
  'picture' => '0',
  'data' => 'a:1:{s:7:"overlay";i:1;}',
  'date' => '2011-08-11 16:53:56 -0500',
);
  $nodes[] = array(
  'uid' => '1',
  'title' => 'Why is the event called a "camp"?',
  'log' => '',
  'status' => '1',
  'comment' => '1',
  'promote' => '0',
  'sticky' => '0',
  'vuuid' => 'a2353c73-095b-a814-392e-43f7a44bf9a3',
  'type' => 'faq',
  'language' => 'und',
  'created' => '1313100726',
  'tnid' => '0',
  'translate' => '0',
  'uuid' => 'b0232cec-9c95-cfd4-8920-a2cef8a662de',
  'revision_uid' => '1',
  'question' => 'Why is the event called a "camp"?',
  'detailed_question' => '',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'It\'s called a camp to denote the "unconference" style of the event, meaning that the organizers and speakers are members of the community. The name originates from [BarCamp](http://en.wikipedia.org/wiki/Barcamp), a popular community-driven event movement.',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>It\'s called a camp to denote the "unconference" style of the event, meaning that the organizers and speakers are members of the community. The name originates from <a href="http://en.wikipedia.org/wiki/Barcamp">BarCamp</a>, a popular community-driven event movement.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => '0',
  'last_comment_timestamp' => '1313100726',
  'last_comment_name' => NULL,
  'last_comment_uid' => '1',
  'comment_count' => '0',
  'name' => 'admin',
  'picture' => '0',
  'data' => 'a:1:{s:7:"overlay";i:1;}',
  'date' => '2011-08-11 17:12:06 -0500',
);
  $nodes[] = array(
  'uid' => '1',
  'title' => 'Everything you need to know about DrupalCamp Austin',
  'log' => '',
  'status' => '1',
  'comment' => '1',
  'promote' => '0',
  'sticky' => '0',
  'vuuid' => 'e3abf40e-7484-3bb4-e103-a5cf1f8e81c9',
  'type' => 'page',
  'language' => 'und',
  'created' => '1313015011',
  'tnid' => '0',
  'translate' => '0',
  'uuid' => 'b766b8ab-27eb-b784-0df7-440e5c56713c',
  'revision_uid' => '1',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Hello, Drupallers, Drupalistas, and Drupalleros! Please take a moment to carefully read this post. It covers some very important points, including:

* Parking
* Session schedule (and how you can use the “Attend” button to help us anticipate attendance)
* Food

## Venue

DrupalCamp Austin will be held at the AT&T Executive Education Conference Center on UT campus.

* Venue map
* Directions

## Registration

Registration opens at 9am. See you then!

## Parking

Please purchase parking passes in advance. It’s cheaper than paying for parking that day, and you’re basically guaranteed a spot. Street parking will be very difficult to find — especially on Saturday due to the UT football game. You can purchase parking passes here for $7 per day.

Please read our blog post on parking at the venue. It explains when and where you pick up parking passes. (You do not need them to enter the garage — only to exit.)

The AT&T Conference Center parking garage entrance is located behind the building on 20th Street between University Ave and Whitis Ave. Overflow parking can be found at the Dobie Center garage on the other side of Whitis Ave.

## Sessions

The session schedule has been posted here. Please help us plan ahead by flagging the sessions you’d like to attend. (Simply click the “Attend” button on each session page.) Knowing how many people will attend each session will ensure everyone will have a seat.

Thanks to everyone who submitted session proposals. If your submission wasn’t chosen, don’t be sad: You can still present it as a Birds of a Feather (BoF) session. Unlike regular, presentation-style sessions, BoFs are self-organizing, informal gatherings that focus on a particular topic or issue. (Birds of a feather flock together, you see.) The idea is to gather to discuss a shared topic of interest or start an ad hoc working session on a particular issue. BoFs will be held in the LevelTen Room and will be scheduled on the day of the event.

## Food

Breakfast: We will be providing breakfast, coffee, and tea both days.
Lunch (Saturday): Thanks to the outpouring of support from our sponsors, we are able to provide complimentary lunch on Saturday.
Lunch (Sunday): Complimentary lunch will not be available Sunday. There are, however, plenty of nearby food options.
Vegetarian, vegan, gluten-free, and dairy-free options will be available for breakfast and lunch. Vegetarians and vegans are encourage to check out Veggie Heaven, one of Austin’s best veggie/vegan spots, only two blocks from the venue.

## Twitter

The official event hashtag is #drupalatx. Please follow @drupalatx for updates.

## Sponsors

Our sponsors made this event possible. If you see them in the hall, please let them know you appreciate their support.',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Hello, Drupallers, Drupalistas, and Drupalleros! Please take a moment to carefully read this post. It covers some very important points, including:</p>
<ul><li>Parking</li>
<li>Session schedule (and how you can use the “Attend” button to help us anticipate attendance)</li>
<li>Food</li>
</ul><h2>Venue</h2>
<p>DrupalCamp Austin will be held at the AT&amp;T Executive Education Conference Center on UT campus.</p>
<ul><li>Venue map</li>
<li>Directions</li>
</ul><h2>Registration</h2>
<p>Registration opens at 9am. See you then!</p>
<h2>Parking</h2>
<p>Please purchase parking passes in advance. It’s cheaper than paying for parking that day, and you’re basically guaranteed a spot. Street parking will be very difficult to find — especially on Saturday due to the UT football game. You can purchase parking passes here for $7 per day.</p>
<p>Please read our blog post on parking at the venue. It explains when and where you pick up parking passes. (You do not need them to enter the garage — only to exit.)</p>
<p>The AT&amp;T Conference Center parking garage entrance is located behind the building on 20th Street between University Ave and Whitis Ave. Overflow parking can be found at the Dobie Center garage on the other side of Whitis Ave.</p>
<h2>Sessions</h2>
<p>The session schedule has been posted here. Please help us plan ahead by flagging the sessions you’d like to attend. (Simply click the “Attend” button on each session page.) Knowing how many people will attend each session will ensure everyone will have a seat.</p>
<p>Thanks to everyone who submitted session proposals. If your submission wasn’t chosen, don’t be sad: You can still present it as a Birds of a Feather (BoF) session. Unlike regular, presentation-style sessions, BoFs are self-organizing, informal gatherings that focus on a particular topic or issue. (Birds of a feather flock together, you see.) The idea is to gather to discuss a shared topic of interest or start an ad hoc working session on a particular issue. BoFs will be held in the LevelTen Room and will be scheduled on the day of the event.</p>
<h2>Food</h2>
<p>Breakfast: We will be providing breakfast, coffee, and tea both days.<br />
Lunch (Saturday): Thanks to the outpouring of support from our sponsors, we are able to provide complimentary lunch on Saturday.<br />
Lunch (Sunday): Complimentary lunch will not be available Sunday. There are, however, plenty of nearby food options.<br />
Vegetarian, vegan, gluten-free, and dairy-free options will be available for breakfast and lunch. Vegetarians and vegans are encourage to check out Veggie Heaven, one of Austin’s best veggie/vegan spots, only two blocks from the venue.</p>
<h2>Twitter</h2>
<p>The official event hashtag is #drupalatx. Please follow @drupalatx for updates.</p>
<h2>Sponsors</h2>
<p>Our sponsors made this event possible. If you see them in the hall, please let them know you appreciate their support.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => '0',
  'last_comment_timestamp' => '1313015011',
  'last_comment_name' => NULL,
  'last_comment_uid' => '1',
  'comment_count' => '0',
  'name' => 'admin',
  'picture' => '0',
  'data' => 'a:1:{s:7:"overlay";i:1;}',
  'date' => '2011-08-10 17:23:31 -0500',
);
  $nodes[] = array(
  'uid' => '1',
  'title' => 'How can I sponsor DrupalCamp Austin?',
  'log' => '',
  'status' => '1',
  'comment' => '1',
  'promote' => '0',
  'sticky' => '0',
  'vuuid' => 'bf2e0db9-69cb-af84-9d03-12594d3b56bc',
  'type' => 'faq',
  'language' => 'und',
  'created' => '1313017012',
  'tnid' => '0',
  'translate' => '0',
  'uuid' => 'f3a1443b-6fc3-6154-f5d6-aff27d13b47d',
  'revision_uid' => '1',
  'question' => 'How can I sponsor DrupalCamp Austin?',
  'detailed_question' => '',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'You should review the various sponsorship packages to get an idea of what level of sponsorship you would be interested in, and then head over to our contact page to let us know you\'re interested. We look forward to hearing from you!',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>You should review the various sponsorship packages to get an idea of what level of sponsorship you would be interested in, and then head over to our contact page to let us know you\'re interested. We look forward to hearing from you!</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => '0',
  'last_comment_timestamp' => '1313017012',
  'last_comment_name' => NULL,
  'last_comment_uid' => '1',
  'comment_count' => '0',
  'name' => 'admin',
  'picture' => '0',
  'data' => 'a:1:{s:7:"overlay";i:1;}',
  'date' => '2011-08-10 17:56:52 -0500',
);
  return $nodes;
}
