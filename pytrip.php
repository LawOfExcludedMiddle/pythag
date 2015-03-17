<?php
	// Copyright (C) 2015, Christo Keller. All rights reserved.

	set_time_limit(3600);
	$i = 1;

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
	echo("<body bgcolor='#ffffff'><p style='color:#000000'>");
	echo("<center><h1><a href='index.php'>Christo's Primitive Pythagorean Triple Generator</a></h1><i>Copyright &copy; 2015, Christo Keller. All rights reserved.</i><br /><br/>");
	echo("<table style='width:25%'><tr><td><b><u>Row:</b></u></td><td><b><u>X:</b></u></td><td><b><u>Y:</b></u></td><td><b><u>Z:</b></u></td></tr>");
	
	for($a=$_GET['amin'];$a<$_GET['amax'];$a++)
	{
		for($b=$_GET['bmin'];$b<$_GET['bmax'];$b++)
		{
			for($c=$_GET['cmin'];$c<$_GET['cmax'];$c++)
			{	
				$pa=$a*$a;
				$pb=$b*$b;
				$pc=$c*$c;
										
				if(($pa+$pb)==$pc)
				{
					if(!isset($carray[$c]))
					{
						$carray[$c]=true;
						echo "<tr><td><b>$i&nbsp;&nbsp;</b</td><td>$a</td><td>$b</td><td>$c</td></tr>";
						$i = $i+1;		
					}				
				}
			}
		}
	}
	
	echo("</table>");
	echo("</p></body>");

	function isPrimitive($x, $y, $z)
	{
		$xy = euclid($x,$y);
		$xz = euclid($x,$z);
		$yz = euclid($y,$z);

		if($xy==1&&$xz==1&&$yz==1)
		{
			return true;
		}		
	}

	function euclid($n, $p)
	{
		a:

		if($p==0)
		{
			return $n;
		}

		if($n>$p)
		{
			$n=$n-$p;
			goto a;
			return $n;		
		}
		else
		{
			$p=$p-$n;
			goto a;	
		}

	}
?>
