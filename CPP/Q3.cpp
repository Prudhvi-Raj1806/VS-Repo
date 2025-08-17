#include <iostream>
#include <string>

int main() {
    std::string password;
    std::cout << "Enter the password: ";
    std::cin >> password;
    if (password == "admin123") {
        std::cout << "Welcome" << std::endl;
    }
    return 0;
}