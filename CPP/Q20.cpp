#include <iostream>

int main() {
    int drink_choice = 3;
    switch (drink_choice) {
        case 1: std::cout << "You have selected: Tea" << std::endl; break;
        case 2: std::cout << "You have selected: Coffee" << std::endl; break;
        case 3: std::cout << "You have selected: Juice" << std::endl; break;
        default: std::cout << "Invalid selection." << std::endl;
    }
    return 0;
}