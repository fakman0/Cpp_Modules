#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string _name) {
    this->name = _name;
    this->weapon = NULL;
}

HumanB::~HumanB() {}

void    HumanB::setWeapon(Weapon &weapon) {
    this->weapon = &weapon;
}

void    HumanB::attack() {
    std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}