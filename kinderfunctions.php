<?php	
	function emptyInputsUp($name, $email, $password1, $password2){
		$result;
		if(empty($name) || empty($email) || empty($password1) || empty($password2)){
			$result = true;
		}
		else{
			$result = false;
		}
		return $result;
	}
	function emptyLogin($email, $password){
		$result;
		if(empty($email) || empty($password)){
			$result = true;
		}
		else{
			$result = false;
		}
		return $result;
	}
	function invalidEmail($email ){
		$result;
		if(filter_var($email, FILTER_VALIDATE_EMAIL)){
			$result = false;
		}
		else{
			$result = false;
		}
		return $result;
	}
	function emailExists($conn, $email){
		$result;
		$sql = "SELECT email FROM registerteacher WHERE email = '$email';";
		$resultData = mysqli_query($conn, $sql);

		if($row = mysqli_fetch_assoc($resultData)){
			$result = true;
		}
		else{
			$result = false;
		}
		return $result;
	}
	function pwdMatch($password1, $password2 ){
		$result;
		if($password1 !== $password2){
			$result = true;
		}
		else{
			$result = false;
		}
		return $result;
	}
	function createUser($conn, $name, $email, $password1){
		$name = $_POST['name'];
		$email = $_POST['email'];
		$password1 = $_POST['pass'];

		$query = "INSERT INTO registerteacher(teacherName, email, password) VALUES ('$name', '$email', '$password1');";
		
		$result1 = mysqli_query($conn, $query);

		if($result1){
			header("location: kindersignup.php?error=none");
		}
		else{
			header("location: kindersignup.php?error=signupfail");
		}		
		return $result1;
	}
	function loginuser($conn, $email, $password){
		$email = $_POST['email'];
		$password = $_POST['pass'];

		$result;
		$sql = "SELECT email, password FROM registerteacher WHERE email = '$email' AND password = '$password';";
		$resultData = mysqli_query($conn, $sql);

		if($row = mysqli_fetch_assoc($resultData)){
			$result = true;
		}
		else{
			$result = false;
		}
		return $result;
	}

