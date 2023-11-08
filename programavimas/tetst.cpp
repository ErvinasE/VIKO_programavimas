#include <iostream>
#include <string.h>
int main ()
{
    std::string c;
    std::cin >> c;
    if (c == "č")
    {
        std::cout << "true";
    }
    else
    {
        std::cout<< "false";
    }
}