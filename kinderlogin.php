<!DOCTYPE html>

<html lang="en" xmlns="http://www.w3.org/1999/xhtml">
<head>
    <meta charset="utf-8" />
    <title>KinderCare Character Draw</title>
</head>
<body>
    <nav><h1>KinderCare Character Draw</h1></nav>
    <div class = "container">
        <div class = "form">
            <div id = "title"><h2> Log In </h2></div>
                <form method = "POST" action = "kinderlogform.php">
                    <input type = "text" class = "inputs" id = "email"  name="email" placeholder = "Enter your email!"><br/>
                    <input type = "password" class = "inputs" id = "pass" name="pass" placeholder = "Enter your password!"><br/>
                    <input type = "submit" id = "btn" class = "btn" name = "login" value = "Log In">
                </form>
                <p>Not yet registered? <a href = "kindersignup.php"> Sign up.</a></p>
            </div>
        </div>
    </div>
<?php
    if(isset($_GET["error"])){
		if($_GET["error"] == "emptyinput"){
			echo "<p><em><b>Fill in all fields!</b></em></p>";
		}
        else if($_GET["error"] == "loginfail"){
			echo "<p><em><b>Wrong Email or Password!</b></em></p>";
		}
		else if($_GET["error"] == "nomatch"){
			echo "<p><em><b>Passwords don't match!</b></em></p>";
		}
	}
?>
</body>
</html>