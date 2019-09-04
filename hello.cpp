#include <iostream>
#include <string>

//Author: Brian Norris

int main() {
    std::string input;
    std::cout << "Hi, my name is Brian. What's yours?" << std::endl;
    std::cin >> input;
    std::cout << "Hello, " << input << std::endl;
    return 0;
}
