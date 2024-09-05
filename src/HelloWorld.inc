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
use JetBackup\Core\Exception\ConnectionException;
use JetBackup\Core\Exception\InvalidArgumentException;
use JetBackup\Core\Exception\IOException;
use JetBackup\Core\Exception\JBException;
use JetBackup\Core\Exception\RegistrationException;
use JetBackup\Core\Exception\ValidationException;
use JetBackup\Core\IO\SyncParams;
use JetBackup\Core\Log\LogController;
use MongoDB\BSON\ObjectId;

defined( '__JETBACKUP__' ) or die( 'Restricted access' );

class HelloWorld implements Destination {

	/**
	 * @param LogController|null $logController
	 * @param string|null $destination_name
	 * @param ObjectId|null $destination_id
	 */
	public function __construct(LogController|null $logController=null, string|null $destination_name=null, ObjectId|null $destination_id=null) {
	}

	/**
	 * @throws ConnectionException
	 * @return void
	 */
	public function connect():void {
	}

	/**
	 * @return void
	 */
	public function disconnect():void {
	}

	/**
	 * This function triggers every time that this destination fields changes
	 *
	 * @throws RegistrationException
	 */
	public function register():void {
	}

	/**
	 * This function triggers every time that this destination fields changes
	 */
	public function unregister():void {
	}

	/**
	 * Validate all destination fields - throw ValidationException on error
	 *
	 * @throws ValidationException
	 */
	public function validateFields():void {
	}

	/**
	 * @param object $data
	 */
	public function setData(object $data):void {
	}

	/**
	 * @return array
	 */
	public function getData(): array {
	}

	/**
	 * @return string
	 */
	public function setSerializedData(string $data):void {
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
	 * @param string|null $data
	 *
	 * @return bool
	 */
	public function dirExists(string $directory, string|null $data=null): bool {
	}

	/**
	 * @param string $file
	 * @param string|null $data
	 *
	 * @return bool
	 */
	public function fileExists(string $file, string|null $data=null): bool {
	}

	/**
	 * @param string $directory
	 * @param bool $recursive
	 * @param string|null $data
	 *
	 * @return string|null
	 */
	public function createDir(string $directory, bool $recursive, string|null $data=null):string|null {
	}

	/**
	 * @param string $directory
	 * @param string|null $data
	 *
	 * @return void
	 */
	public function removeDir(string $directory, string|null $data=null):void {
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
	 * @param string|null $data
	 *
	 * @return void
	 */
	public function copyFileToLocal(string $source, string $destination, string|null $data=null):void {
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
	 * @param string|null $data
	 *
	 * @return string|null
	 */
	public function copyFileToRemote(string $source, string $destination, string|null $data=null):string|null {
	}

	/**
	 * @param $directory
	 * @param string|null $data
	 *
	 * @return DestinationDirIterator
	 */
	public function listDir($directory, string|null $data=null): DestinationDirIterator {
	}

	/**
	 * get the destination disk information - return null if disk information is not supported for this destination
	 *
	 * @return DestinationDiskUsage|null
	 */
	public function getDiskInfo():DestinationDiskUsage|null {
	}

	/**
	 * @return DestinationFile|null
	 */
	public function getFileStat($file):DestinationFile|null {
	}

	/**
	 * @param string $file
	 * @param string|null $data
	 *
	 * @return void
	 */
	public function removeFile(string $file, string|null $data = null): void {
	}

	/**
	 * @return array
	 */
	public function protectedFields(): array {
	}

	/**
	 * @return void
	 */
	public function routineTasks(): void {
	}
}