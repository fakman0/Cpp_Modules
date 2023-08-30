#include "phonebook.hpp"

// Getter
std::string Contact::get_index()
{
    return (this->index);
}

std::string Contact::get_first_name()
{
    return (this->first_name);
}

std::string Contact::get_last_name()
{
    return (this->last_name);
}

std::string Contact::get_nickname()
{
    return (this->nickname);
}

std::string Contact::get_number()
{
    return (this->number);
}

std::string Contact::get_darkest_secret()
{
    return (this->darkest_secret);
}

// Setter
void Contact::set_index(std::string index)
{
    this->index = index;
}

void Contact::set_first_name(std::string first_name)
{
    this->first_name = first_name;
}

void Contact::set_last_name(std::string last_name)
{
    this->last_name = last_name;
}

void Contact::set_nickname(std::string nickname)
{
    this->nickname = nickname;
}

void Contact::set_number(std::string number)
{
    this->number = number;
}

void Contact::set_darkest_secret(std::string darkest_secret)
{
    this->darkest_secret = darkest_secret;
}
