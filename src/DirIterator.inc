<?php
/*
*
* JetBackup @ package
* Created By Idan Ben-Ezra
*
* Copyrights @ JetApps
* https://www.jetapps.com
*
**/
namespace JetBackup\Core\Destination\HelloWorld;

use JetBackup\Core\Destination\Integration\DestinationDirIterator;
use JetBackup\Core\Destination\Integration\DestinationFile as iDestinationFile;

defined( '__JETBACKUP__' ) or die( 'Restricted access' );

class DirIterator implements DestinationDirIterator {

	/**
	 * DirIterator constructor.
	 *
	 * @param $directory
	 * @param bool $recursive
	 */
	public function __construct($directory, $recursive=false) {
	}

	/**
	 */
	public function rewind() {
	}

	/**
	 * @return bool
	 */
	public function hasNext(): bool {
	}

	/**
	 * @return iDestinationFile|null
	 */
	public function getNext():? iDestinationFile {
	}
}