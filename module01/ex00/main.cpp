#include "Zombie.hpp"

int main(){
    Zombie *Foo = newZombie("Foo");
    Zombie Boo("Boo");

    Foo->announce();
    Boo.announce();
    randomChump("Zoo");
    
    delete (Foo);
    return (0);
}