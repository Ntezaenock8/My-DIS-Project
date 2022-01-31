<?php
require_once'connect.php';
if(isset($_REQUEST['activate'])){
    $ischecked=$_REQUEST['UserCodes'];
    foreach($_REQUEST['UserCode'] as $key => $value){
        if(in_array($_REQUEST['UserCode'][$key],$ischecked)){
        $UserCode=$_REQUEST['UserCode'][$key];
        $FirstName=$_REQUEST['FirstName'][$key];
        $LastName=$_REQUEST['LastName'][$key];
           
        $sql4="DELETE FROM `deactive` WHERE `UserCode`='$UserCode'";
        $result4=mysqli_query($conn,$sql4);
    }
    }
}
?>
