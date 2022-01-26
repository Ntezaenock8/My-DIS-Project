<?php
	if(isset($_POST['signup'])){
		$name = $_POST['name'];
		$email = $_POST['email'];
		$password1 = $_POST['pass'];
		$password2 = $_POST['rpt'];

		require_once 'kinderconnect.php';
		require_once 'kinderfunctions.php';
		
		if(emptyInputsUp($name, $email, $password1, $password2) !== false){
			header("location: kindersignup.php?error=emptyinput");
			exit();
		}
		if(invalidEmail($email ) !== false){
			header("location: kindersignup.php?error=invalidEm");
			exit();
		}
		if(emailExists($conn, $email)!==false){
			header("location: kindersignup.php?error=emailexists");
			exit();
		}
		if(pwdMatch($password1, $password2 ) !== false){
			header("location: kindersignup.php?error=nomatch");
			exit();
		}

		createUser($conn, $name, $email, $password1);
		
	}
	else{
		header("location: kindersignup.php?error=buttonfail");
		exit();
	}
