<?php
/**********************************************

Created:		Basith Salman
Date:			10/05/2023
Description: 	TestBycycleFactory file to instatiate
				and test different types of Bycycle 
				objects, this program instantiates 
				a BicycleFactory and creates two concrete
				objects of MoutainBicycle and RoadBicycle
				and runs and stops the Bicycles and echo's
				the specifications of each.
email:			basiths@gmail.com

*************************************************/
	require_once("./BicycleFactory.php");
	require_once("./errorhandler.php");

	$myBicycle = new BicycleFactory;
	if( !$myBicycle ) {
		trigger_error("Failed to instantiate BicycleFactory");
		die("exiting..");	
	} 
	$myMtnBicycle = $myBicycle->buildBicycle("Mountain");
	$myMtnBicycle->specs();
	$myMtnBicycle->run();
	$myMtnBicycle->stop();

	$myRoadBicycle = $myBicycle->buildBicycle("Road");
	$myRoadBicycle->specs();
	$myRoadBicycle->run();
	$myRoadBicycle->stop();
?>
