<?php
/**
 * @file
 * event_content_type.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function event_content_type_taxonomy_default_vocabularies() {
  return array(
    'colors' => array(
      'name' => 'Colors',
      'machine_name' => 'colors',
      'description' => 'Colors may be used to highlight special content on your dite.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
