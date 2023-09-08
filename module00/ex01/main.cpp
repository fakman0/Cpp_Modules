#include "phonebook.hpp"

int main(void)
{
    Phonebook phonebook;
    
    phonebook.index = 0;
    while (true)
    {
        int command = phonebook.welcome();
        if (command == 1)
            phonebook.add_contact();
        else if (command == 2)
            phonebook.search_contact();
        else if (command == 3)
            return (0);
    }
    
}