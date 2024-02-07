#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string input;

    while (true) {
        cout << "Enter alphabets only: ";
        getline(std::cin, input);

        bool isValid = true;

        // Validate each character in the input
        for (char c : input) {
            if (!isalpha(c)) {
                isValid = false;
                break;
            }
        }

        if (isValid) {
            // Input is valid, break out of the loop
            break;
        } else {
            cout << "Error: Please enter only alphabets." << std::endl;
        }
    }

    // Process the valid input
    cout << "You entered: " << input << std::endl;

    return 0;
}
