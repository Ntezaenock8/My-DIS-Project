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
            <div id = "title"><h2> Sign Up </h2></div>
                <form method = "POST" action = "kindersignform.php">
                    <input type = "text" class = "inputs" id = "name"  name="name" placeholder = "Enter your name!"><br/>
                    <input type = "text" class = "inputs" id = "email"  name="email" placeholder = "Enter an email!"><br/>
                    <input type = "password" class = "inputs" id = "pass" name="pass" placeholder = "Enter a password!"><br/>
                    <input type = "password" class = "inputs" id = "pass" name="rpt" placeholder = "Confirm password!"></br>
                    <input type = "submit" id = "btn" class = "btn" name = "signup" value = "Sign Up">
                </form>
                <p>Already registered? <a href = "kinderlogin.php"> Log in.</a></p>
            </div>
        </div>
    </div>
<?php
    if(isset($_GET["error"])){
		if($_GET["error"] == "emptyinput"){
			echo "<p><em><b>Fill in all fields!</b></em></p>";
		}
		else if($_GET["error"] == "invalidEm"){
			echo "<p><em><b>Enter a valid email!</b></em></p>";
		}
        else if($_GET["error"] == "emailexists"){
			echo "<p><em><b>Email already exists!</b></em></p>";
		}
		else if($_GET["error"] == "nomatch"){
			echo "<p><em><b>Passwords don't match!</b></em></p>";
		}
	}
?>
</body>
</html>