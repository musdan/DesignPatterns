<?php
/**********************************************

Created: Basith Salman
Date:	10/05/2023
Description: AbstractBycycleFactroy class used to
			 instatiate different types of Bycycle
			 objects like MoutainBicycle, RoadBicycle etc.
email: basiths@gmail.com

**********************************************/

	abstract class AbstractBicycleFactory {
		abstract function buildBicycle($bc_type);
	}
?>
