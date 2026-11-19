#include <iostream>
#include <limits>
#include <sstream>
#include <string>

int main() {
    std::string input;

    while (true) {
        std::cout << "Enter an integer (or q to quit): ";
        if (!(std::cin >> input)) {
            // Stop cleanly if the input stream closes (for example, at end-of-file).
            break;
        }

        if (input == "q" || input == "Q") {
            std::cout << "Goodbye!\n";
            break;
        }

        // Parse the token as an integer and reject extra characters such as "7x".
        std::istringstream inputStream(input);
        int number;
        char extraCharacter;
        if (!(inputStream >> number) || (inputStream >> extraCharacter)) {
            std::cout << "Error: please enter a whole integer.\n";

            // Reset the input state and discard the rest of this line before retrying.
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }

        if (number % 2 == 0) {
            std::cout << "Even\n";
        } else {
            std::cout << "Odd\n";
        }
    }

    return 0;
}
