#include "lib.h"
#include <iostream>

int main (int, char **) {
    std::cout << "Version: " << version() << std::endl;
    std::cout << "Hello, World! Version 1.0." << version() << std::endl;
    
    // Добавь эти строки для паузы:
    std::cout << "Press Enter to exit..." << std::endl;
    std::cin.get();
    
    return 0;
}
