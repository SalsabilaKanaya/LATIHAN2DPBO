#include <string>
#include <iostream>

class Memory : public Hardware{

    //atribut
    private:
        string frequency;
        string memorySize;
        string supportsCuda;

    public:
        //constructor
        Memory(){
            this->frequency = "";
            this ->memorySize = "";
            this ->supportsCuda = "";

        }

        //setter dan getter
        void setFrequency(string frequency){
            this->frequency = frequency;
        }

        string getFrequency(){
            return this->frequency;
        }

        void setMemorySize(string memorySize){
            this->memorySize = memorySize;
        }

        string getMemorySize(){
            return this->memorySize;
        }

        void setSupportsCuda(string supportsCuda){
            this->supportsCuda = supportsCuda;
        }

        string getSupportsCuda(){
            return this->supportsCuda;
        }

        //destructor
        ~Memory(){
        }
};