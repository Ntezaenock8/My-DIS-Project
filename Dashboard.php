<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>DashBoard</title>
    <link rel="stylesheet" href="system.css">
    <script src="https://cdnjs.cloudflare.com/ajax/libs/Chart.js/2.5.0/Chart.min.js"></script>
    <script src="//code.jquery.com/jquery-1.9.1.js"></script>
    <script src="//cdnjs.cloudflare.com/ajax/libs/Chart.js/2.4.0/Chart.min.js"></script>
</head>
<body>
    <div class="sidebar">
        <div class= sidebarhead>
            <h4> KinderCare Letter System</h4>
        </div>
        <br>
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
            <h3>DashBoard</h3>
        </div>

        <div class="homecontent">
            <div class="overviewboxes">
                <div class="spaced"></div>
                <div class="box1" style="margin-left: 300;">
                    <div class="leftside">
                        <div class="boxtopic"><h5 style="text-align: center;">Total Activation Requests:</h5></div>
                        <div class="number">
                        <?php
                            $servername = "localhost";
                            $username = "root";
                            $password = "";
                            $dbname = "kindercare";

                            // Create connection
                            $conn = new mysqli($servername, $username, $password, $dbname);
                            // Check connection
                            if ($conn->connect_error) {
                            die("Connection failed: " . $conn->connect_error);
                            }
                            
                            $sql = "SELECT * FROM active";
                            if ($stmt = $conn->prepare($sql)) {
                                $stmt->execute();
                                $stmt->store_result();
                                printf(" %d\n", $stmt->num_rows);
                            }
                        ?>
                        </div>
                    </div>
                </div>
                <div class="space"></div>
                <div class="box2">
                    <div class="leftside">
                        <div class="boxtopic"><h5 style="text-align: center;">Total Deactive Students:</h5></div>
                        <div class="number">
                        <?php
                            $servername = "localhost";
                            $username = "root";
                            $password = "";
                            $dbname = "kindercare";

                            // Create connection
                            $conn = new mysqli($servername, $username, $password, $dbname);
                            // Check connection
                            if ($conn->connect_error) {
                            die("Connection failed: " . $conn->connect_error);
                            }
                            
                            $sql = "SELECT * FROM inactive";
                            if ($stmt = $conn->prepare($sql)) {
                                $stmt->execute();
                                $stmt->store_result();
                                printf(" %d\n", $stmt->num_rows);
                            }
                        ?>
                        </div>
                    </div>
                </div>
                <div class="space"></div>
                <div class="box3">
                    <div class="leftside">
                        <div class="boxtopic"><h5 style="text-align: center;">Total Students registered</h5></div>
                        <div class="number">
                        <?php
                            $servername = "localhost";
                            $username = "root";
                            $password = "";
                            $dbname = "kindercare";

                            // Create connection
                            $conn = new mysqli($servername, $username, $password, $dbname);
                            // Check connection
                            if ($conn->connect_error) {
                            die("Connection failed: " . $conn->connect_error);
                            }
                            
                            $sql = "SELECT * FROM registerpupil";
                            if ($stmt = $conn->prepare($sql)) {
                                $stmt->execute();
                                $stmt->store_result();
                                printf(" %d\n", $stmt->num_rows);
                            }
                        ?>
                        </div>
                    </div>
                </div>
                
            </div>

            <div class="overviewboxes">
                <div class="spaced"></div>
                <div class="box1" style="margin-left: 300;"><h5 style="text-align: center;">Students' Marks</h5><br><br>
                    <div class="leftside">
                        <div class="boxtopic"></div>
                        <div class="number"><a href="marks.php" class="linkname"><h5 style="text-align: center; text-decoration: none;">View All</h5></a></div>
                    </div>
                </div>
                <div class="space"></div>
                <div class="box2">
                    <div class="leftside">
                        <div class="boxtopic"><h5 style="text-align: center;">Total Assignments Set:</h5></div><br><br>
                        <div class="number">
                        <?php
                            $servername = "localhost";
                            $username = "root";
                            $password = "";
                            $dbname = "kindercare";

                            // Create connection
                            $conn = new mysqli($servername, $username, $password, $dbname);
                            // Check connection
                            if ($conn->connect_error) {
                            die("Connection failed: " . $conn->connect_error);
                            }
                            
                            $sql = "SELECT * FROM assignment";
                            if ($stmt = $conn->prepare($sql)) {
                                $stmt->execute();
                                $stmt->store_result();
                                printf(" %d\n", $stmt->num_rows);
                            }
                        ?>
                        </div>
                    </div>
                </div>
                <div class="space"></div>
                <div class="box3">
                    <div class="leftside">
                        <div class="boxtopic"><h5 style="text-align: center;">Average Score</h5></div>
                        <div class="number">
                        <?php 
                            $server="localhost";
                            $user="root";
                            $password="";
                            $db="kindercare";

                            $conn=mysqli_connect($server,$user,$password,$db);
                            if(!$conn){
                                echo mysqli_connect_error()."failed";
                            }

                            $sql = "SELECT AVG(Score) FROM scores";
                            $result=mysqli_query($conn,$sql);

                            while($row = mysqli_fetch_array($result)){
                                echo "Average Score :". $row['AVG(Score)'];
                                echo "<br />";
                            }
                                $conn->close();
                        ?>
                        </div>
                    </div>
                </div>
                
            </div>

                <?php
                    $server="localhost";
                    $user="root";
                    $password="";
                    $db="kindercare";
                    $con  = mysqli_connect("localhost","root","","kindercare");
                    if (!$con) {
                        # code...
                        echo "Problem in database connection! Contact administrator!" . mysqli_error();
                    }else{
                            $sql ="SELECT registerpupil.LastName, scores.Score from registerpupil inner join scores on registerpupil.UserCode =  scores.UserCode";
                            $result = mysqli_query($con,$sql);
                            $chart_data="";
                            while ($row = mysqli_fetch_array($result)) { 
                    
                                $LastName[]  = $row['LastName']  ;
                                $Score[] = $row['Score'];
                            }
                    
                    
                    }
                
                
                ?>
                <div style="width:30%;hieght:20%;text-align:center">
                <h2 class="page-header" >Scores Reports </h2>
                <div>Score</div>
                <canvas  id="chartjs_bar"></canvas> 
                </div>

            <script type="text/javascript">
                var ctx = document.getElementById("chartjs_bar").getContext('2d');
                            var myChart = new Chart(ctx, {
                                type: 'bar',
                                data: {
                                    labels:<?php echo json_encode($LastName); ?>,
                                    datasets: [{
                                        backgroundColor: [
                                        "#5969ff",
                                            "#ff407b",
                                            "#25d5f2",
                                            "#ffc750",
                                            "#2ec551",
                                            "#7040fa",
                                            "#ff004e"
                                        ],
                                        data:<?php echo json_encode($Score); ?>,
                                    }]
                                },
                                options: {
                                    legend: {
                                    display: true,
                                    position: 'bottom',
            
                                    labels: {
                                        fontColor: '#71748d',
                                        fontFamily: 'Circular Std Book',
                                        fontSize: 14,
                                    }
                                },
            
            
                            }
                            });
            </script>
        </div>
    </section>
    
</body>
</html>