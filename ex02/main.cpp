#include <iostream>

int main( void ){

    std::string stringMain = "HI THIS IS BRAIN";
    std::string *stringPTR = &stringMain;
    std::string &stringREF = stringMain;


    // Display adresses;
    std::cout << "Address of string: " << &stringMain << std::endl;
    std::cout << "Address of stringPTR: " << stringPTR << std::endl;
    std::cout << "Address of stringREF: " << &stringREF << std::endl;
   

    // display string content ;
    std::cout << "stringPTR: " << *stringPTR << std::endl;
    std::cout << "stringREF: " << stringREF << std::endl;
   return 0;
}