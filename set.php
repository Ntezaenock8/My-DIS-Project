<?php
    include_once 'kinderconnect.php';

    if(isset($_POST['set'])){
        $char1 = $_POST['char1'];
        $char2 = $_POST['char2'];
        $char3 = $_POST['char3'];
        $char4 = $_POST['char4'];
        $char5 = $_POST['char5'];
        $char6 = $_POST['char6'];
        $char7 = $_POST['char7'];
        $char8 = $_POST['char8'];
        $start = $_POST['starttime'];
        $end = $_POST['endtime'];
        $dur = $end - $start;

        $letters = array();

        $letters = $char1;
        $letters = $char2;
        $letters = $char3;
        $letters = $char4;
        $letters = $char5;
        $letters = $char6;
        $letters = $char7;
        $letters = $char8;

        echo $letters;
        /*function invalidletter($char1, $char2){
            $result;
            if(preg_match("/^[A-Z]*$/", $char1, $char2)){
                $result = true;
            }
            else{
                $result = false;
            }
            return $result;
        }
        function emptyInputsUp($char1, $char2, $char3, $char4, $char5, $char6, $char7, $char8, $start, $end){
            $result;
            if(empty($char1) || empty($char2) || empty($char3) || empty($char4) || empty($char5) || empty($char6) || empty($char7) || empty($char8) || empty($start) || empty($end)){
                $result = true;
            }
            else{
                $result = false;
            }
            return $result;
        }

        if(invalidletter($char1, $char2)==false){
            header("location: assignment.php?error=nocapital");
        }
        if(emptyInputsUp($char1, $char2, $char3, $char4, $char5, $char6, $char7, $char8, $start, $end) !== false){
			header("location: assignment.php?error=emptyinput");
			exit();
		}
        
        $query = "INSERT INTO assignment (Question1, Question2, Question3, Question4, Question5, Question6, Question7, Question8) VALUES ('$char1', '$char2', '$char3', '$char4', '$char5', '$char6', '$char7', '$char8');";
        $result = mysqli_query($conn, $query);

        if($result){
            header("location: assignment.php?error=noneinsert");
        }
        else{
            header("location: assignment.php?error=insertfail"); 
        }

        $query1 = "UPDATE assignment SET AssignStart = '$start', AssignEnd = '$end', Duration = '$dur' WHERE Question1 = '$char1';";
        $result1 = mysqli_query($conn, $query1);
        
        if($result1){
            header("location: assignment.php?error=noneinsert");
        }
        else{
            header("location: assignment.php?error=insertfailed"); 
        }*/
    }