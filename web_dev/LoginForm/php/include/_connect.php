<?php

$username = "ws328700_admin";
$password = "Uxy$7l430gqN8i86!2";
$db_name = "ws328700_DD";
$server = "plesk.remote.ac";

$connect = mysqli_connect($server, $username, $password, $db_name);

if ($connect)
{
    echo "Connected Successfully to Database!";
}
else
{
    echo "Unable to connect to the database.";
}

?>