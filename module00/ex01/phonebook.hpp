#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>

class Contact
{
    private:
        std::string index;
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string number;
        std::string darkest_secret;
    public:
    // Setter
        void set_index(std::string index);
        void set_first_name(std::string first_name);
        void set_last_name(std::string last_name);
        void set_nickname(std::string nickname);
        void set_number(std::string number);
        void set_darkest_secret(std::string darkest_secret);
    // Getter
        std::string get_index();
        std::string get_first_name();
        std::string get_last_name();
        std::string get_nickname();
        std::string get_number();
        std::string get_darkest_secret();
};

class Phonebook
{
    private:
        Contact contacts[8];
        int index = 0;
    public:
        int		welcome();
        void	add_contact();
        void	search_contact();
        std::string	fix_fill(std::string str, int len);
};


#endif