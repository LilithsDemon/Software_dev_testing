<?php

if(empty($_POST['txtName']))
{
    die("A name is needed");
}

echo "Hello, your name is " . $_POST['txtName'];

session_start();

$_SESSION['name'] = $_POST['txtName'];

header("Location: ./");

?>