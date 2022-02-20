class Main{
    public static void main(String[] args){
        //instansiasi dilakukan dengan menggunakan setter

        /*instansiasi kelas product*/
        Product produk;
        produk = new Product();
        produk.setIdProduct("AKHDTU28");
        produk.setPrice(1500000);

        /*instansiasi kelas hardware*/
        Hardware perangkat;
        perangkat = new Hardware();
        perangkat.setIdProduct("AKHDTU28");
        perangkat.setPrice(1500000);
        perangkat.setBrand("OPPO");
        perangkat.setModel("OPPOA37");
        
        /*instansiasi kelas memory*/
        Memory memori;
        memori = new Memory();
        memori.setIdProduct("AKHDTU28");
        memori.setPrice(1500000);
        memori.setBrand("OPPO");
        memori.setModel("OPPOA37");
        memori.setFrequency("110Hz");
        memori.setMemorySize("16GB");
        memori.setSupportsCuda("True");

        /*O U P U T */ 
        System.out.println("---------------------------------------------");
        System.out.println("Id Product     :" + produk.getIdProduct());
        System.out.println("Price          :" + produk.getPrice());

        System.out.println("---------------------------------------------");
        System.out.println("Id Product     :" + perangkat.getIdProduct());
        System.out.println("Price          :" + perangkat.getPrice());
        System.out.println("Brand          :" + perangkat.getBrand());
        System.out.println("Model          :" + perangkat.getModel());

        System.out.println("---------------------------------------------");
        System.out.println("Id Product     :" + memori.getIdProduct());
        System.out.println("Price          :" + memori.getPrice());
        System.out.println("Brand          :" + memori.getBrand());
        System.out.println("Model          :" + memori.getModel());
        System.out.println("Frequency      :" + memori.getFrequency());
        System.out.println("MemorySize     :" + memori.getMemorySize());
        System.out.println("Supports Cuda  :" + memori.getSupportsCuda());

    }
}