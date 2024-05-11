<?php
/********************************************

Created:		Basith Salman
Date:			10/05/2023
Description:	Error handler for Bicycle object classes.
email:			basiths@gmail.com

**********************************************/
function BicycleErrorHandler($errno, $errstr, $errfile, $errline) {
    echo "[$errno] $errstr Error on line $errline in $errfile";
}
set_error_handler('BicycleErrorHandler');

?>
