<?php

if (isset($_POST['txtUsername']) && isset($_POST['txtPassword']))
{
    include("./include/_connect.php");

    $username = $_POST['txtUsername'];
    $password = $_POST['txtPassword'];

    $username = mysqli_real_escape_string($connect, $username);
    $password = mysqli_real_escape_string($connect, $password);

    $SQL = "SELECT * FROM `t_users` WHERE `Username` = '$username' AND `Password` = '$password'";

    echo $SQL;

    $query = mysqli_query($connect, $SQL);

    if (mysqli_num_rows($query) === 0)
    {
        die("Incorrect username or password");
    }
    else
    {
        session_start();

        $_SESSION['auth'] = 'true';

        $USER = mysqli_fetch_assoc($query);

        $_SESSION ['userID'] = $USER['UID'];
        $_SESSION ['firstName'] = $USER['First_Name'];
        $_SESSION ['lastName'] = $USER['Last_Name'];
        
        header("Location ../");
    }
}
else
{
    die("You did not provide a username or password");
}