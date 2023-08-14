#include <iostream>

int main(int argc, char *argv[])
{
    int i;
    int j;

    i = 0;
    if (argc < 2)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
    while (argv[++i])
    {
        j = 0;
		while (argv[i][j])
			std::cout << (char)std::toupper(argv[i][j++]) << std::endl;
    }
}