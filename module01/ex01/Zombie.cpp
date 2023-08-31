#include "Zombie.hpp"

void Zombie::announce(void){
    std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setname(std::string name){
    this->name = name;
}

Zombie::Zombie(){
    this->name = "default";
}

Zombie::~Zombie(){
    std::cout << this->name << " is dead" << std::endl;
}