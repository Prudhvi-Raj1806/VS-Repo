#include <iostream>

int main() {
    char ch = 'e';
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        std::cout << "The character is a vowel." << std::endl;
    } else {
        std::cout << "The character is a consonant." << std::endl;
    }
    return 0;
}