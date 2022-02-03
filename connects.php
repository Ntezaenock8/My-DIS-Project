<?php
$server="localhost";
$user="root";
$password="";
$db="kindercare";

$conn=mysqli_connect($server,$user,$password,$db);
if(!$conn){
    echo mysqli_connect_error()."failed";
}
?>