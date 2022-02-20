#include <string>
#include <iostream>

using namespace std;

#include "product.cpp"
#include "hardware.cpp"
#include "memory.cpp"

int main(){
    //instansiasi dilakukan dengan menggunakan setter

    /*instansiasi kelas product*/
    Product produk;
    produk.setIdProduct("AKHDTU28");
    produk.setPrice(1500000);

    /*instansiasi kelas hardware*/
    Hardware perangkat;
    perangkat.setIdProduct("AKHDTU28");
    perangkat.setPrice(1500000);
    perangkat.setBrand("OPPO");
    perangkat.setModel("OPPOA37");
    
    /*instansiasi kelas memory*/
    Memory memori;
    memori.setIdProduct("AKHDTU28");
    memori.setPrice(1500000);
    memori.setBrand("OPPO");
    memori.setModel("OPPOA37");
    memori.setFrequency("110Hz");
    memori.setMemorySize("16GB");
    memori.setSupportsCuda("True");

    /*O U P U T */ 
    cout << "---------------------------------------------"<<endl;
    cout << "Id Product     :"<<produk.getIdProduct() << endl;
    cout << "Price          :"<<produk.getPrice() << endl;

    cout << "---------------------------------------------"<<endl;
    cout << "Id Product     :"<<perangkat.getIdProduct() << endl;
    cout << "Price          :"<<perangkat.getPrice() << endl;
    cout << "Brand          :"<<perangkat.getBrand() << endl;
    cout << "Model          :"<<perangkat.getModel() << endl;

    cout << "---------------------------------------------"<<endl;
    cout << "Id Product     :"<<memori.getIdProduct() << endl;
    cout << "Price          :"<<memori.getPrice() << endl;
    cout << "Brand          :"<<memori.getBrand() << endl;
    cout << "Model          :"<<memori.getModel() << endl;
    cout << "Frequency      :"<<memori.getFrequency() << endl;
    cout << "MemorySize     :"<<memori.getMemorySize() << endl;
    cout << "Supports Cuda  :"<<memori.getSupportsCuda() << endl;

    return 0;
    
}