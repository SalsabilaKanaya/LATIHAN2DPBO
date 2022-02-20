class Hardware : public Product{

    //atribut
    private:
        string brand;
        string model;

    public:
        //constructor
        Hardware(){
            this->brand = "";
            this->model = "";
        }

        //setter dan getter
        void setBrand(string brand){
            this->brand = brand;
        }

        string getBrand(){
            return this->brand;
        }

        void setModel(string model){
            this->model = model;
        }

        string getModel(){
            return this->model;
        }

        //destructor
        ~Hardware(){
        }
};