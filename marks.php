<?php
include_once'connects.php';
$sql="select registerpupil.UserCode, registerpupil.FirstName, registerpupil.LastName, scores.Score, scores.Q1, scores.Q2, scores.Q3, scores.Q4, scores.Q5, scores.Q6, scores.Q7, scores.Q8 from registerpupil inner join scores on registerpupil.UserCode =  scores.UserCode";
$result=mysqli_query($conn,$sql);
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="system.css">
    <title>Marks</title>
</head>
<body>
    <div class="sidebar">
        <div class="sidebarhead"><h4>KinderCare Letter System</h4></div><br>
        <ul class="sidebarlinks">
                <li class="bx box-grid"><a href="Dashboard.php"><span class="linkname"><h6 style="color: #002244;">Dashboard</h6></span></a></li>
                <li><a href="register.php" class="bx box"><span class="linkname"><h6>Register Students</h6></span></a></li>
                <li><a href="activate.php" class="bx box"><span class="linkname"><h6>Activate Students</h6></span></a></li>
                <li><a href="assignment.php" class="bx box"><span class="linkname"><h6>Assignments</h6></span></a></li>
                <li><a href="marks.php" class="bx box"><span class="linkname"><h6>Marks</h6></span></a></li>
                <li><a href="#" class="bx box"><span class="linkname"><h6>Log Out</h6></span></a></li>
        </ul>
    </div>
    <section class="homesection">
        <div class="heading">
            <h3>Marks</h3>
        </div>
        <div class="homecontent">
            <div class="overviewboxes">
            <div class="spaced"></div>
                <div class="box1" style="margin-left: 200px; height: 60%; ">
                    <div class="leftside">
                        <h3 Style="text-align: center;">Pupil's Marks</h3>
                        <form method="POST" action="comment.php" class="reg" name="reg">
                            <table class="table">
                                <tr>
                                    
                                    <th>User Code</th>
                                    <th>First Name</th>
                                    <th>Last Name</th>
                                    <th>Marks</th>
                                    <th>Q1</th>
                                    <th>Q2</th>
                                    <th>Q3</th>
                                    <th>Q4</th>
                                    <th>Q5</th>
                                    <th>Q6</th>
                                    <th>Q7</th>
                                    <th>Q8</th>
                                    <th></th>
                                </tr>
                                <?php
                                    while($rows=mysqli_fetch_array($result)){
                                        
                                ?>
                                <tr>
                                    
                                    <td><?php echo $rows['UserCode']?></td>
                                    <td><?php echo $rows['FirstName']?></td>
                                    <td><?php echo $rows['LastName']?></td>
                                    <td><?php echo $rows['Score']?></td>
                                    <td><?php echo $rows['Q1']?></td>
                                    <td><?php echo $rows['Q2']?></td>
                                    <td><?php echo $rows['Q3']?></td>
                                    <td><?php echo $rows['Q4']?></td>
                                    <td><?php echo $rows['Q5']?></td>
                                    <td><?php echo $rows['Q6']?></td>
                                    <td><?php echo $rows['Q7']?></td>
                                    <td><?php echo $rows['Q8']?></td>
                                    <td><a href="comment.php"><button type="Submit" value="<?php echo $rows['UserCode']?>" name="sel" > Comment</button></a></td>
                                    
                                </tr>
                                <?php
                                    }
                                ?>
                            </table><br><br>
                        </form>  
                    </div>
                </div>
                
                
            </div>

        </div>

    </section>
</body>
</html>