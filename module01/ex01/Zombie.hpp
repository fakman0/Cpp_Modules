#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie{
private:
    std::string name;
public:
    Zombie();
    ~Zombie();
    void announce(void);
    void setname(std::string name);
};

Zombie* zombieHorde( int N, std::string name );

#endif