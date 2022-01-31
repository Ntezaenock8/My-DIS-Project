<?php
require_once'connect.php';
if(isset($_REQUEST['deactivate'])){
    $ischecked=$_REQUEST['UserCodes'];
    foreach($_REQUEST['UserCode'] as $key => $value){
        if(in_array($_REQUEST['UserCode'][$key],$ischecked)){
        $UserCode=$_REQUEST['UserCode'][$key];
        $FirstName=$_REQUEST['FirstName'][$key];
        $LastName=$_REQUEST['LastName'][$key];
           
        $sql3="INSERT INTO `deactive` (`UserCode`, `FirstName`, `LastName`) VALUES ('$UserCode', '$FirstName', '$LastName')";
        $result3=mysqli_query($conn,$sql3);
    }

}
}
?>
