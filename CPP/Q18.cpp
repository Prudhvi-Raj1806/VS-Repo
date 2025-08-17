#include <iostream>

int main() {
    int month = 2;
    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            std::cout << "Number of days: 31" << std::endl;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            std::cout << "Number of days: 30" << std::endl;
            break;
        case 2:
            std::cout << "Number of days: 28 or 29" << std::endl;
            break;
        default:
            std::cout << "Invalid month number." << std::endl;
    }
    return 0;
}