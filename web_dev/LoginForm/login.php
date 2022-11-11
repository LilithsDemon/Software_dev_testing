<?php

$username = "WS328700_admin";
$password = "HTML5ncss3!";
$db_name = "WS328700_DD";
$server = "plesk.remote.ac";

$db_connect = mysqli_connect($server, $username, $password, $db_name)



/*
if(empty($_POST['txtUsername']))
{
    die("A username is required");
}
if(empty($_POST['txtPassword']))
{
    die("A password is required")
}

session_start();

$_SESSION['txtUsername'] = $_POST['txtUsername'];
$_SESSION['txtPassword'] = $_POST['txtPassword'];

header("Location: ./");
*/ 
?>