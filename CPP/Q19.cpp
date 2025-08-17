#include <iostream>

int main() {
    int fuel_choice = 2;
    switch (fuel_choice) {
        case 1: std::cout << "You have chosen: Petrol" << std::endl; break;
        case 2: std::cout << "You have chosen: Diesel" << std::endl; break;
        case 3: std::cout << "You have chosen: Electric" << std::endl; break;
        default: std::cout << "Invalid choice." << std::endl;
    }
    return 0;
}