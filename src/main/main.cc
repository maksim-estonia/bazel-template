#include <iostream>
#include "src/lib/Greeting.h"

#include <fstream>
#include <iostream>

int main()
{
    Greeting *greet = new Greeting();
    std::cout << greet->getGreetingMessage() << std::endl;

    std::ifstream in("data/input.txt");
    std::ofstream out("data/output.txt");

    if (!in)
    {
        std::cerr << "ERROR: File input.txt did not open" << std::endl;
        return EXIT_FAILURE;
    }

    if (!out)
    {
        std::cerr << "ERROR: File output.txt did not open" << std::endl;
        return EXIT_FAILURE;
    }

    std::string message;

    if (!(in >> message))
    {
        std::cerr << "Can not read file content!";
        return EXIT_FAILURE;
    }

    std::cout << message << std::endl;

    return EXIT_SUCCESS;
}