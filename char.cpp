#include <iostream>
#include <cctype>  // for isdigit and ispunct functions

int main() {
    char input;

    std::cout << "Enter a character: ";
    std::cin >> input;

    if (isalpha(input)) {
        if (input == 'A' || input == 'a' || input == 'E' || input == 'e' ||
            input == 'I' || input == 'i' || input == 'O' || input == 'o' ||
            input == 'U' || input == 'u') {
            std::cout << "It's a vowel." << std::endl;
        } else {
            std::cout << "It's a consonant." << std::endl;
        }
    } else if (isdigit(input)) {
        std::cout << "It's a digit." << std::endl;
    } else if (ispunct(input)) {
        std::cout << "It's a punctuation." << std::endl;
    } else {
        std::cout << "It's unrecognized." << std::endl;
    }

    return 0;
}