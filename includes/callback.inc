<?php

/**
 * @file
 * Handles all the callbacks.
 *
 */


/**
 * Fetches page metadata for use in the viewer such as width and height.
 *
 * Prints a JSON object repersenting the metadata.
 * This function exits.
 *
 * @param AbstractObject $object
 *   The book object to generate the metadata from.
 */
function islandora_mirador_shared_canvas_manifest_callback(AbstractObject $object) {

  module_load_include('inc', 'islandora_mirador', 'includes/Canvas');
	module_load_include('inc', 'islandora_mirador', 'includes/SharedCanvasManifest');

	$manifest = islandora_mirador_create_manifest($object);

  drupal_json_output($manifest);
  drupal_exit();
}

function islandora_mirador_create_manifest(AbstractObject $object) {

	
	// Do magic
	$metadata = 'metadata_uri';
	$id = "id";
	$label = "label"

  $manifest = new SharedCanvasManifest($id, $label, $metadata);

}