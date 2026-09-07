#include <iostream>
#include "version.h"

int main() {
    std::cout << "Hello, World! Version: ";
    std::cout << PROJECT_VERSION_MAJOR << '.';
    std::cout << PROJECT_VERSION_MINOR << '.';
    std::cout << PROJECT_VERSION_PATCH << std::endl;
    
    return 0;
}