<?
//Copyring 2018 MicrofCorp
///////////////Settings
$login = "admin"; //Login
$password = "admin"; //Password
///////////////Settings
ini_set("auto_detect_line_endings", true);
if($_GET['login'] != $login){
	exit ("Login and Password not valid");
}
if($_GET['passw'] != $password){
	exit ("Login and Password not valid");
}

$game = $_GET['path'];

$readgame = file_get_contents($game) ;

exit ($readgame);
?>