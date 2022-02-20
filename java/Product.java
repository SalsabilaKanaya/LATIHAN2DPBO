class Product{

    //atribut
    private String idProduct;
    private int price;

    Product(){
    }

    //setter dan getter
    public void setIdProduct(String idProduct){
        this.idProduct = idProduct;
    }

    public String getIdProduct(){
        return this.idProduct;
    }

    public void setPrice(int price){
        this.price = price;
    }

    public int getPrice(){
        return this.price;
    }
}