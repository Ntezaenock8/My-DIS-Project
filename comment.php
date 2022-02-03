

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="system.css">
    <title>Comment</title>
</head>
<body>
    <div class="sidebar">
        <div class="sidebarhead"><h4>KinderCare Letter System</h4></div><br>
        <ul class="sidebarlinks">
                <li class="bx box-grid"><a href="Dashboard.php"><span class="linkname"><h6>Dashboard</h6></span></a></li>
                <li><a href="register.php" class="bx box"><span class="linkname"><h6>Register Students</h6></span></a></li>
                <li><a href="activate.php" class="bx box"><span class="linkname"><h6>Activate Students</h6></span></a></li>
                <li><a href="assignment.php" class="bx box"><span class="linkname"><h6>Assignments</h6></span></a></li>
                <li><a href="marks.php" class="bx box"><span class="linkname"><h6>Marks</h6></span></a></li>
                <li><a href="#" class="bx box"><span class="linkname"><h6>Log Out</h6></span></a></li>
        </ul>
    </div>
    <section class="homesection">
        <div class="heading">
            <h3>Comment</h3>
        </div>
        <div class="homecontent">
            <div class="overviewboxes">
            <div class="spaced"></div>
                <div class="box1" style="margin-left: 200px; height: 60%; ">
                    <div class="leftside">
                        <h3 Style="text-align: center;">Pupil's Marks</h3>  
                    </div>
                </div>
                
                <?php
                    $servername = "localhost";
                    $username = "root";
                    $password = "";
                    $dbname = "kindercare";
                    $conn =  mysqli_connect("localhost", "root", "", "kindercare");
                    if ($conn->connect_error) {
                        die("Connection failed: " . $conn->connect_error);
                        }
                        if(isset($_POST['submit'])){
                            $sel = $_POST['sel'];
                                          
                            $sql = "INSERT INTO comment(Comment, UserCode) VALUES ('Lucky', '$sel')";
                            mysqli_query($conn, $sql);                
                    }
                            $res = "select UserCode, FirstName, LastName from registerpupil where '$sel' in (select UserCode from comment)";
                           // $me = $kindercare->query($res);
                           mysqli_query($conn, $res);
                ?>
                
            </div>

            <div class="overviewboxes">
            <div class="spaced"></div>
                <div class="box1" style="margin-left: 200px; height: 60%;">
                    <div class="leftside">
                    <h3>Make Comment</h3>
                        
                                    <?php
                            while($label = mysqli_fetch_assoc($res)){
                                    ?>
                            <p><br><h4 class="labels">User Code</h4><h5> <?php echo $label['UserCode'] ?></h5></p>
                            <p><br><h4 class="labels">First Name</h4><h5> <?php echo $label['FirstName'] ?></h5></p>
                            <p><br><h4 class="labels">Last Name</h4><h5> <?php echo $label['LastName'] ?></h5></p>
                            <form method="POST" action="marks.php" class="comm" name="comm">
                            <p><br><h4 class="labels">Comment</h4><input type="text" class="inputs" name="comment" id="comment"  required ></p><br>
                                    <?php
                                        }
                                    ?>
                            <p><button type="submit" name="submit" class="regbutton" onclick="fun()"><h4>Comment</h4></button></p>
                        </form>
                        <!-- //the insert statement to insert into the comment table -->
                        <?php
                            $servername = "localhost";
                            $username = "root";
                            $password = "";
                            $dbname = "Kindercare";
                            $conn = mysqli_connect("localhost", "root", "", "Kindercare");
                            if ($conn->connect_error) {
                                die("Connection failed: " . $conn->connect_error);
                                }

                            if(isset($_POST['submit'])){
                                $comment = $_POST['fullname'];
                                $usercode = $label['UserCode'];
                                $comm = "update comment set comment='$comment' where UserCode = '$usercode'";
                                $result=mysqli_query($conn,$comm);
                            }
                        ?>
                    </div>
                </div>
            </div>

        </div>

    </section>
</body>
</html>