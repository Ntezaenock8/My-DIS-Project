<?php
require_once'connect.php';
$sql="SELECT * FROM `registerpupil`";
$sql2="SELECT * FROM `deactive`";
$result=mysqli_query($conn,$sql);
$result2=mysqli_query($conn,$sql2);
include_once'deactivated.php';
include_once'activated.php';
?>
<!DOCTYPE html>
<html>
    <head>
        <title>Students Complaint form</title>
        <link rel="stylesheet" href="hoD.css">
        <link rel="stylesheet" href="tables.css">
        <link rel="stylesheet" href="students.css">
    </head>
        <body>
            
            <div class="main">
                <div class="sidebar">
                 <div class="sidebarhead"><h3>TeacherName</h3></div>
                 <ul class="sidebarlinks">
                     <li class="bx box-grid"><a><span class="icons"><img src="dashboard.png" alt=""></span><span class="linkname"><h6>Dashboard</h6></span></a></li>
                     <li><a href="#" class="bx box"><span class="icons"><img src="barchart.png" alt=""></span><span class="linkname"><h6>Register Students</h6></span></a></li>
                     <li><a href="#" class="bx box"><span class="icons"><img src="linechart.png" alt=""></span><span class="linkname"><h6>Statistics</h6></span></a></li>
                     <li><a href="#" class="bx box"><span class="icons"><img src="home.png" alt=""></span><span class="linkname"><h6>Activate Students</h6></span></a></li>
                     <li><form action="logout.php" method="POST"class="bx box"><p><span class="icons"><p><img src="logout.png" alt=""></span><span class="linkname"><button type="submit" name="logout"id="logout"><h6>Logout</h6></button></p></span></p></form></li>
                 </ul>
                </div>   
                   <section class="homesection">
                       <nav>
                       <div class="sidebarbutton">
                           <span class="icons" class="sidebar-btn"><img src="home.png" alt="" onclick=slide()></span>
                           <span class="dasboard">Dashboard</span>
                       </div>
                       </nav>
                       <div class="homecontent">
                           <div class="marks">
                               <DIV ><H6>Activate/Deactivate</H6></DIV>
                               <div>
                                   <div style="width:100%; position:relative; left:320px;"><h4>Active Students</h4></div>
                                   <div class="marktable">
                                      <form action="" method="post">
                                      <table class="markstable" style="margin-top:1.5rem;">
                                    <tr>
                                        <th></th>
                                        <th>StudentNumber</th>
                                        <th>
                                        <h4>FirstNameh4>
                                        </th>
                                        <th><h4>LastName</h4></th>

                                    </tr>
                                    <?php
                                    $i=1;
                                    while($row=mysqli_fetch_array($result)){
                                    ?>
                                    <tr>
                                        <td><input type="checkbox" name="UserCodes[]" value="<?php echo $row['UserCode']?>"></td>
                                        <td><?php echo $row['UserCode'];?><input type="hidden" name="UserCode[]" value="<?php echo $row['UserCode']?>"></td>
                                        <td><?php echo $row['FirstName'];?><input type="hidden" name="FirstName[]" value="<?php echo $row['FirstName']?>"></td>
                                        <td><?php echo $row['LastName'];?><input type="hidden" name="LastName[]" value="<?php echo $row['LastName']?>"></td>

                                    </tr>
                                    <?php
                                    }
                                    ?>
                                </table>
                                      <button type="submit" name='activate' class="accept">activate</button>
                                      <button type="submit" name='deactivate' class="reject">deactivate</button>
                                      </form>
                                   </div>
                                   <span><h4>Deactive Students</h4></span>
                                   <form action="" method="post">
                                      <table class="markstable" style="margin-top:1.5rem;">
                                    <tr>
                                        <th></th>
                                        <th>StudentNumber</th>
                                        <th>
                                        <h4>FirstName</h4>
                                        </th>
                                        <th><h4>LastName</h4></th>

                                    </tr>
                                    <?php
                                    $i=1;
                                    while($rows=mysqli_fetch_array($result2)){
                                    ?>
                                    <tr>
                                        <td><input type="checkbox" name="UserCode[]" value="<?php echo $rows['UserCode']?>"></td>
                                        <td><?php echo $rows['UserCode'];?></td>
                                        <td><?php echo $rows['FirstName'];?></td>
                                        <td><?php echo $rows['LastName'];?></td>

                                    </tr>
                                    <?php
                                    }
                                    ?>
                                </table>
                                </form>
        
                               </div>
                           </div>
                       </div>
                   </section>
                </div>


        </body>
    
</html>
