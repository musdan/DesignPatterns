<?php
/**********************************************

Created:		Basith Salman
Date:			10/05/2023
Description: 	BycycleFactory class to instatiate
				different types of Bycycle objects..
email:			basiths@gmail.com

*************************************************/

	require_once "AbstractBicycleFactory.php";
	include "MountainBicycle.php";
	include "RoadBicycle.php";

	class BicycleFactory extends AbstractBicycleFactory {
		function	buildBicycle($bicycleType) {
			$newBicycle = NULL;
			switch($bicycleType) {
				case "Mountain":
						try {
							$newBicycle = new MountainBicycle;
						} catch ( Exception $e ) {
							die("Instantiating MoutainBicycle Object failed, exiting..");
						}
						break;
				case "Road":
						try {
							$newBicycle = new RoadBicycle;
						} catch ( Exception $e ) {
							die("Instantiating RoadBicycle Object failed, exiting..");
						}
						break;

				default:
						echo "Default bicycle is RoadBicycle\n";
						$newBicycle = new MountainBicycle;
						break;
			}
			return $newBicycle;
		}
	}
?>
