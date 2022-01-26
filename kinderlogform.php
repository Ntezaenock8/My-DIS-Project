<?php
	session_start();
	if(isset($_POST['login'])){
		$email = $_POST['email'];
		$password = $_POST['pass'];

		require_once 'kinderconnect.php';
		require_once 'kinderfunctions.php';

		if(emptyLogin($email, $password) !== false){
			header("location: kinderlogin.php?error=emptyinput");
			exit();
		}

		if(loginuser($conn, $email, $password)==false){
			header("location: kinderlogin.php?error=loginfail");
			exit();
		}
		else{
			header("location: kinderlogin.php?error=none/login succesful");
		}
	}