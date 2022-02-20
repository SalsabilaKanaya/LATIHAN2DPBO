<?php

	include "product.php";
	include "hardware.php";
    include "memory.php";

	$produk = new Product();
	$produk->setIdProduct("AKHDTU28");
    $produk->setPrice(1500000);

    $perangkat = new Hardware();
    $perangkat->setIdProduct("AKHDTU28");
    $perangkat->setPrice(1500000);
	$perangkat->setBrand("OPPO");
    $perangkat->setModel("OPPOA37");

    $memori = new Memory();
    $memori->setIdProduct("AKHDTU28");
    $memori->setPrice(1500000);
	$memori->setBrand("OPPO");
    $memori->setModel("OPPOA37");
    $memori->setFrequency("110Hz");
	$memori->setMemorySize("16GB");
    $memori->setSupportsCuda("True");

	
	 /*O U P U T */ 
    echo "Id Product     :".$produk->getIdProduct() ."<br>";
    echo "Price          :".$produk->getPrice() ."<br>";

    echo "<br>";

    echo "Id Product     :".$perangkat->getIdProduct() ."<br>";
    echo "Price          :".$perangkat->getPrice() ."<br>";
    echo "Brand          :".$perangkat->getBrand() ."<br>";
    echo "Model          :".$perangkat->getModel() ."<br>";

    echo "<br>";

    echo "Id Product     :".$memori->getIdProduct() ."<br>";
    echo "Price          :".$memori->getPrice() ."<br>";
    echo "Brand          :".$memori->getBrand() ."<br>";
    echo "Model          :".$memori->getModel() ."<br>";
    echo "Frequency      :".$memori->getFrequency() ."<br>";
    echo "MemorySize     :".$memori->getMemorySize() ."<br>";
    echo "Supports Cuda  :".$memori->getSupportsCuda() ."<br>";

?>