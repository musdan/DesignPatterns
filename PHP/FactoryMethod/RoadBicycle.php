<?php
/******************************************

Created:		Basith Salman
Date:			10/05/2023
Description: 	RoadBicycle class.
email: 			basiths@gmail.com

******************************************/

	require_once("./AbstractBicycle.php");

	class RoadBicycle extends AbstractBicycle {
		private $wheelSize;
		private $handleType;
		private $noOfGears;
		private	$noOfSeats;
		private	$speed=0;

		function __construct($wSize=30, $nGears=2, $hType="Drop Bars") {
			$this->wheelSize = $wSize;
			$this->noOfGears = $nGears;
			$this->handleType = $hType;
			$this->noOfSeats = 2;
		}

		public function setwheelSize($ws) {
			$this->wheelSize = $ws;
		}
		public function getwheelSize() {
			return $wheelSize;
		}
		public function sethandleType($ht) {
			$this->handleType = $hs;
		}
		public function gethandleType() {
			return $this->handleType ;
		}
		public function setnoOfGears($ng) {
			$this->noOfGears = $ng ;
		}
		public function getnoOfGears() {
			return $this->noOfGears ;
		}
		public function setnoOfSeats($ns) {
			$this->noOfSeats = $ns ;
		}
		public function getnoOfSeats() {
			return $this->noOfSeats ;
		}

		public function specs() {
			echo "\nRoadBicycle specs: \n";
			echo "==================\n";
			echo "Wheel Size: " . $this->wheelSize . " \n";
			echo "Handle type: " . $this->handleType . " \n";
			echo "No. of Seats: " . $this->noOfSeats . " \n";
		}

		public function run() {
			$this->speed = 20;
			echo "\nRoad Bicycle running, speed: $this->speed MPH\n";
		}
		function stop() {
			if( $this->speed ) {
				$this->speed = 0;
				echo "Road Bicycle stopped, speed: $this->speed MPH\n";
			}
			else {
				echo "Road Bicycle not running.\n";
			}
		}
	}
?>
