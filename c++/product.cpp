#include <string>
#include <iostream>

class Product{

    //atribut
    private:
        string idProduct;
        int price;

    public:
        //constructor
        Product(){
            this->idProduct = "";
            this->price = 0;
        }

        //setter dan getter
        void setIdProduct(string idProduct){
            this->idProduct = idProduct;
        }

        string getIdProduct(){
            return this->idProduct;
        }

        void setPrice(int price){
            this->price = price;
        }

        int getPrice(){
            return this->price;
        }

        //destructor
        ~Product(){
        }
};