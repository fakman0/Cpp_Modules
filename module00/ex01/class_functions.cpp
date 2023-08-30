#include "phonebook.hpp"

int Phonebook::welcome()
{
    std::string choice;

    std::cout << "=======================================" << std::endl;
    std::cout << "             Phonebook App             " << std::endl;
    std::cout << "=======================================" << std::endl;
    std::cout << "Please choose an option:" << std::endl;
    std::cout << "---------------------------------------" << std::endl;
    std::cout << "ADD" << std::endl;
    std::cout << "SEARCH" << std::endl;
    std::cout << "EXIT" << std::endl;
    std::cout << "---------------------------------------" << std::endl;
    
    while (1)
    {
        std::cout << "Enter your choice: ";
        getline(std::cin, choice);

        int len = choice.length();
        for (int i = 0; i < len; i++)
            choice[i] = toupper(choice[i]);

        if (choice == "ADD")
            return (1);
        else if (choice == "SEARCH")
            return (2);
        else if (choice == "EXIT")
            return (3);
    }
}

void Phonebook::add_contact()
{
    Contact contact;
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string number;
    std::string darkest_secret;

    std::cout << "Enter first name: ";
    getline(std::cin, first_name);
    while (first_name.length() == 0){
        std::cout << "Invalid input. Please try again." << std::endl;
        std::cout << "Enter first name: ";
        getline(std::cin, first_name);
    }
    contact.set_first_name(first_name);

    std::cout << "Enter last name: ";
    getline(std::cin, last_name);
    while (last_name.length() == 0){
        std::cout << "Invalid input. Please try again." << std::endl;
        std::cout << "Enter last name: ";
        getline(std::cin, last_name);
    }
    contact.set_last_name(last_name);

    std::cout << "Enter nickname: ";
    getline(std::cin, nickname);
    while (nickname.length() == 0){
        std::cout << "Invalid input. Please try again." << std::endl;
        std::cout << "Enter nickname: ";
        getline(std::cin, nickname);
    }
    contact.set_nickname(nickname);

    std::cout << "Enter number: ";
    getline(std::cin, number);
    while (number.length() == 0){
        std::cout << "Invalid input. Please try again." << std::endl;
        std::cout << "Enter number: ";
        getline(std::cin, number);
    }
    contact.set_number(number);

    std::cout << "Enter darkest secret: ";
    getline(std::cin, darkest_secret);
    while (darkest_secret.length() == 0){
        std::cout << "Invalid input. Please try again." << std::endl;
        std::cout << "Enter darkest secret: ";
        getline(std::cin, darkest_secret);
    }
    contact.set_darkest_secret(darkest_secret);

    std::cout << "Contact added successfully!" << std::endl;

    if (index == 8)
        index = 0;
    contact.set_index(std::to_string(index));
    contacts[index] = contact;
    index++;
}

void Phonebook::search_contact()
{
    std::string c_index;

    std::cout << "     Index|First Name| Last Name|  Nickname" << std::endl;
    std::cout << "-------------------------------------------" << std::endl;
    for (int i = 0; i < 8; i++)
    {
        if (contacts[i].get_first_name().empty())
            break;
        std::cout << fix_fill(std::to_string(i), 10) << "|";
        std::cout << fix_fill(contacts[i].get_first_name(), 10) << "|";
        std::cout << fix_fill(contacts[i].get_last_name(), 10) << "|";
        std::cout << fix_fill(contacts[i].get_nickname(), 10) << std::endl;
    }
    std::cout << "-------------------------------------------" << std::endl;
    std::cout << "Enter index: ";
    getline(std::cin, c_index);
    while (std::stoi(c_index) > 7 || c_index.length() == 0 || (contacts[std::stoi(c_index)].get_first_name().empty())){
        std::cout << "Invalid input." << std::endl;
        return ;
    }
    std::cout << "First Name: " << contacts[std::stoi(c_index)].get_first_name() << std::endl;
    std::cout << "Last Name: " << contacts[std::stoi(c_index)].get_last_name() << std::endl;
    std::cout << "Nickname: " << contacts[std::stoi(c_index)].get_nickname() << std::endl;
    std::cout << "Number: " << contacts[std::stoi(c_index)].get_number() << std::endl;
    std::cout << "Darkest Secret: " << contacts[std::stoi(c_index)].get_darkest_secret() << std::endl;
}

std::string Phonebook::fix_fill(std::string str, int len)
{
    std::string new_str;

    int str_len = str.length();
    if (str_len > len)
    {
        new_str = str.substr(0, 9);
        new_str += ".";
    }
    else if (str_len < len)
    {
        for (int i = 0; i < len - str_len; i++)
            new_str += " ";
        new_str += str;
    }
    return (new_str);
}