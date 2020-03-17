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

use JetBackup\Core\Destination\Integration\Destination;
use JetBackup\Core\Destination\Integration\DestinationDirIterator;
use JetBackup\Core\Destination\Integration\DestinationDiskUsage;
use JetBackup\Core\Destination\Integration\DestinationFile;
use JetBackup\Core\Exception\InvalidArgumentException;
use JetBackup\Core\Exception\IOException;
use JetBackup\Core\Exception\JBException;
use JetBackup\Core\Exception\RegistrationException;
use JetBackup\Core\Exception\ValidationException;
use JetBackup\Core\IO\SyncParams;

defined( '__JETBACKUP__' ) or die( 'Restricted access' );

class HelloWorld implements Destination {

	private $_destination;

	public function __construct(\JetBackup\Core\Destination\Destination $destination) {
		$this->_destination = $destination;
	}

	/**
	 */
	public function connect() {
	}

	/**
	 */
	public function disconnect() {
	}

	/**
	 * This function triggers every time that this destination fields changes
	 *
	 * @throws RegistrationException
	 */
	public function register() {
	}

	/**
	 * This function triggers every time that this destination fields changes
	 */
	public function unregister() {
	}

	/**
	 * Validate all destination fields - throw ValidationException on error
	 *
	 * @throws ValidationException
	 */
	public function validateFields() {
	}

	/**
	 * @param object $data
	 */
	public function setData($data) {
	}

	/**
	 * @return array
	 */
	public function getData(): array {
	}

	/**
	 * @return string
	 */
	public function setSerializedData($data) {
	}

	/**
	 * @param string $directory
	 *
	 * @return bool
	 */
	public function getSerializedData(): string {
	}

	/**
	 * @param string $directory
	 *
	 * @return bool
	 */
	public function dirExists($directory): bool {
	}

	/**
	 * @param string $file
	 *
	 * @return bool
	 */
	public function fileExists($file): bool {
	}

	/**
	 * @param string $directory
	 * @param bool $recursive
	 *
	 * @throws IOException
	 */
	public function createDir($directory, $recursive) {
	}

	/**
	 * @param string $directory
	 *
	 * @throws IOException
	 */
	public function removeDir($directory) {
	}

	/**
	 * @param SyncParams $syncParams
	 *
	 * @throws JBException
	 * @throws IOException
	 * @throws InvalidArgumentException
	 */
	public function syncToLocal(SyncParams $syncParams) {
	}

	/**
	 * @param string $source
	 * @param string $destination
	 *
	 * @throws IOException
	 */
	public function copyFileToLocal($source, $destination) {
	}

	/**
	 * @param SyncParams $syncParams
	 *
	 * @throws JBException
	 * @throws IOException
	 * @throws InvalidArgumentException
	 */
	public function syncToRemote(SyncParams $syncParams) {
	}

	/**
	 * @param string $source
	 * @param string $destination
	 *
	 * @throws IOException
	 * @throws InvalidArgumentException
	 */
	public function copyFileToRemote($source, $destination) {
	}

	/**
	 * @param string $directory
	 *
	 * @throws IOException
	 * @return DestinationDirIterator
	 */
	public function listDir($directory, $recursive = false): DestinationDirIterator {
	}

	/**
	 * get the destination disk information - return null if disk information is not supported for this destination
	 *
	 * @return DestinationDiskUsage
	 */
	public function getDiskInfo(): ?DestinationDiskUsage {
	}

	/**
	 * @return DestinationFile|null
	 */
	public function getFileStat($file): ?DestinationFile {
	}

	/**
	 * @return bool
	 */
	public function canWrite(): bool {
	}

	/**
	 * @return bool
	 */
	public function canRead(): bool {
	}
}