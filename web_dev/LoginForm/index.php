<?php

    session_start();

    if(!isset($_SESSION['auth']))
    {
        header("Location: ./login.php");
        exit();
    }

    if (!isset($_SESSION['username']))
    {
        $name = "BLANK";
    }
    else
    {
        $name = $_SESSION['username'];
    }

?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>HomePage</title>
    <link rel="stylesheet" href="./css/homepage.css">
</head>
<body>
    <main>
        <section>
            <header>
                <div class="container">
                <h1>Test</h1>
                <nav>
                    <ul>
                        <li><a href="#">Link 1</a></li>
                        <li><a href="#">Link 2</a></li>
                        <li><a href="#">Link 3</a></li>
                        <li><a href="#">Link 4</a></li>
                    </ul>
                </nav> 
            </div>
        </header>
        <h1>Welcome to Web!</h1>
            <?php echo "<h2>$username</h2>" ?>
            <a href="#"><button>Learn More</button></a>
        </section>
    </main>
</body>
</html>