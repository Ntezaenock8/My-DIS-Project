<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Dashboard</title>
    <link href="css/bootstrap.min.css" rel="stylesheet">
    <link href="main.css" rel="stylesheet">
</head>
<?php include_once 'header.php'; ?>
    <main class="col-md-9 ms-sm-auto col-lg-10 px-md-4">
        <div class="d-flex justify-content-between flex-wrap flex-md-nowrap align-items-center pt-3 pb-2 mb-3 border-bottom">
            <h1 class="h2">Dashboard</h1>
        </div>
        <?php
            include_once 'kinderconnect.php';
        ?>
            <div class="col-4">
                <div class="boxtopic"><h6>Total Activation Requests:</h6></div>
                <div class="number">0</div>
            </div>
            <div class="col-4">
                <div class="boxtopic"><h6>Total Active Assignments:</h6></div>
                <div class="number">0</div>
            </div>
            <div class="col-4">
                <div class="boxtopic"><h6>Total attempts of active assignments:</h6></div>
                <div class="number">0</div>
            </div>
    </main>
<?php include_once 'footer.php'; ?>