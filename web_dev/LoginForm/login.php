<?php

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

?>