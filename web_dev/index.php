<?php
    session_start();
    if (!isset($_SESSION['count']))
    {
        $_SESSION['count'] = 0;
    }
    if (!isset($_SESSION['name']))
    {
        $name = "";
    }
    else
    {
        $name = $_SESSION['name'];
    }

    $_SESSION['count'] = $_SESSION['count'] + 1;
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <?php
        echo "You have visited this page: ", $_SESSION['count'], " times";

        $firstName = "Lucy";
        $lastName = "Gardener";
    ?>

    <?php
        if ($name != "")
        {
            echo "<br>Hello ", $name;
        }
        else
        {
    ?>
        <form action="./outputname.php" method="post">
            <label for="txtName">Full Name:</label>
            <input type="text" name="txtName" id="txtName" placeholder="John Smith">

            <button type="submit">Send</button>
        </form>
    <?php
        }
    ?>

    <footer>
        <span>Copyright &copy; <?= date('Y'); ?> - <?= $firstName, " ", $lastName ?>
    </footer>
</body>
</html>