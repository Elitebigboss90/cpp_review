#include <iostream>
#include <string>

class Person {
   
    public: 
        void printname(){
            name = "Ethan";
            std::cout << "hello, "<< name<< std::endl;
        };

     private:
        std::string name;
};

int main(){
    Person myPerson;
    myPerson.printname();

    return 0;
};