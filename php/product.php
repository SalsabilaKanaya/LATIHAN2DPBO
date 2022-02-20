<?php 
 
 class Product{

    //atribut
	private $idProduct;
	private $price;
		
	function __construct(){
	}
		
		
	function setIdProduct($idProduct){
		$this->idProduct = $idProduct;
	}
		
	function getIdProduct(){
		return $this->idProduct;
	}
		
	function setPrice($price){
		$this->price = $price;
	}
		
	function getPrice(){
		return $this->price;
	}
		
	 function __destruct(){
	 }
}
?>

		
		