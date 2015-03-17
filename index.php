<?php
	// Copyright (C) 2015, Christo Keller. All rights reserved.

	echo(" <STYLE type='text/css'>
		a:link {
			color: #000000;
		}

		a:visited {
			color: #000000;
		}

		a:hover {
			color: #000000;
		}

		a:active {
			color: #000000;
		}
 	       </STYLE>");

	echo("<head><title>Christo's Primitive Pythagorean Triple Generator</title></head>");
	echo("<body bgcolor='#ffffff'>");
	echo("
		<center><h1><a href='index.php'>Christo's Primitive Pythagorean Triple Generator</a></h1><i>Copyright &copy; 2015, Christo Keller. All rights reserved.</i><br /><br/><form action='pytrip.php'>

		Minimum A Value: <br/> <input type='number' name='amin' value=1></input><br />
		Maximum A Value: <br/> <input type='number' name='amax' value=100></input><br /><br/>
		Minimum B Value: <br/> <input type='number' name='bmin' value=1></input><br />
		Maximum B Value: <br/> <input type='number' name='bmax' value=100></input><br /><br />
		Minimum C Value: <br/> <input type='number' name='cmin' value=1></input><br />
		Maximum C Value: <br/> <input type='number' name='cmax' value=100></input><br /><br /><br />
		<input type='submit'>

		</form></center>")
?>
