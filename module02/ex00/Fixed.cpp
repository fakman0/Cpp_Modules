#include "Fixed.hpp"
#include <iostream>


Fixed &Fixed::operator=(Fixed &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        this->number = other.getRawBits();
    return (*this);
}

// Default constructor to operations to be called when the object is first created.
Fixed::Fixed(){
    std::cout << "Default constructor called" << std::endl;
    this->number = 0;
}

// Copy constructor to copy the properties of an object to a new object
Fixed::Fixed(const Fixed &original){
    std::cout << "Copy constructor called" << std::endl;
    this->number = original.number;
}

// Destructor to clear the memory used at the end of the process
Fixed::~Fixed(){
    std::cout << "Destructor Called" << std::endl;
}

// Getter Method
int Fixed::getRawBits(void) const{
    std::cout << "getRawBits member function called" << std::endl;
    return (number);
}

// Setter Method
void Fixed::setRawBits( int const raw ){
    std::cout << "setRawBits member function called" << std::endl;
    this->number = raw;
}