<?php
/********************************************

Created:		Basith Salman
Date:			10/05/2023
Description:	MountainBicycle class.
email: 			basiths@gmail.com

*********************************************/
	require_once("./AbstractBicycle.php");

	class MountainBicycle extends AbstractBicycle {
		private $wheelSize;
		private $handleType;
		private $noOfGears;
		private	$brakeRotor;
		private	$speed=0;

		function __construct($wSize=30, $nGears=4, $hType="flat") {
			$this->wheelSize = $wSize;
			$this->noOfGears = $nGears;
			$this->handleType = $hType;
			$this->brakeRotor = "10' Disc";
		}

		public function setwheelSize($ws) {
			$wheelSize = $ws;
		}
		public function getwheelSize() {
			return $wheelSize;
		}
		public function sethandleType($ht) {
			$handleType = $hs;
		}
		public function gethandleType() {
			return $this->handleType ;
		}
		public function setnoOfGears($ng) {
			$this->handleType = $ng ;
		}
		public function getnoOfGears() {
			return $this->noOfGears ;
		}
		public function setbrakeRotor($br) {
			return $this->brakeRotor = $br ;
		}
		public function getbrakeRotor() {
			return $this->brakeRotor ;
		}

		public function run() {
			$this->speed = 20;
			echo "\nMountain Bicycle running, speed: $this->speed MPH\n";
		}

		public function specs() {
			echo "MountBicycle specs: \n";
			echo "==================\n";
			echo "Wheel Size: " . $this->wheelSize . " \n";
			echo "Handle type: " . $this->handleType . " \n";
			echo "Brake Rotor: " . $this->brakeRotor . " \n";
		}

		public function stop() {
			if( $this->speed ) {
				$this->speed = 0;
				echo "Mountain Bicycle stopped, speed: $this->speed MPH\n";
			}
			else {
				echo "Mountain Bicycle not running.\n";
			}
		}
	}
?>
