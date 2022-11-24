<?php
    session_start();
    if (!isset($_SESSION['txtUsername']))
    {
        $username = "";
    }
    else
    {
        $username = $_SESSION['txtUsername'];
    }
    if (!isset($_SESSION['txtPassword']))
    {
        $password = "";
    }
    else
    {
        $password = $_SESSION['txtPassword'];
    }

?>


<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
    <link rel="stylesheet" href="./css/login.css">
</head>
<body>
    <main>
        <?php
            if($username == "" && $password == "")
            {
        ?>
            <h1>Login Page</h1>
            <form action="./php/auth.php" method="post">
                <input type="text" name="txtUsername" required placeholder="Username">
                <input type="password" name="txtPassword" required placeholder="Password">
                <button type="submit">Login</button>
            </form>
        <?php
            }
            else
            {
                echo "You are logged in as: ", $username;
            }
		?>
    </main>
</body>
</html>