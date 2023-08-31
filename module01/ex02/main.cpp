#include <iostream>

int main(){
    std::string first_str = "HI THIS IS BRAIN";
    std::string *stringPTR = &first_str;
    std::string &stringREF = first_str;

    std::cout << "Address of string: " << &first_str << std::endl;
    std::cout << "Address of stringPTR: " << stringPTR << std::endl;
    std::cout << "Address of stringREF: " << &stringREF << std::endl;

    std::cout << "Value of string: " << first_str << std::endl;
    std::cout << "Value of stringPTR: " << *stringPTR << std::endl;
    std::cout << "Value of stringREF: " << stringREF << std::endl;
}