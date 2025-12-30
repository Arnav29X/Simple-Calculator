#include <iostream>

int main() {
    char input;
    int how_many;
    double num;

    std::cout << "======== WELCOME TO SIMPLE CALCULATOR ========\n";
    std::cout << "========          MADE IN C++         ========\n";
    std::cout << "==============================================\n";
    std::cout << "==================== MENU ====================\n";
    std::cout << "          Enter [+] for Addition\n";
    std::cout << "          Enter [-] for Subtraction\n";
    std::cout << "          Enter [*] for Multiplication\n";
    std::cout << "          Enter [/] for Division\n";
    std::cout << "==============================================\n";
    std::cout << "YOUR INPUT: ";
    std::cin >> input;
    std::cout << "==============================================\n";

    switch (input) {

        // -------- ADDITION --------
        case '+': {
            double sum = 0;

            std::cout << "How many numbers you want to add? : ";
            std::cin >> how_many;

            if (how_many < 2 || how_many > 10) {
                std::cout << "Choose between 2 and 10 only!\n";
                break;
            }

            std::cout << "Enter " << how_many << " numbers:\n";
            for (int i = 1; i <= how_many; i++) {
                std::cin >> num;
                sum += num;
            }

            std::cout << "Sum = " << sum << "\n";
            break;
        }

        // -------- SUBTRACTION --------
        case '-': {
            double result;

            std::cout << "How many numbers you want to subtract? : ";
            std::cin >> how_many;

            if (how_many < 2 || how_many > 10) {
                std::cout << "Choose between 2 and 10 only!\n";
                break;
            }

            std::cout << "Enter number 1: ";
            std::cin >> result;

            for (int i = 2; i <= how_many; i++) {
                std::cout << "Enter number " << i << ": ";
                std::cin >> num;
                result -= num;
            }

            std::cout << "Result = " << result << "\n";
            break;
        }

        // -------- MULTIPLICATION --------
        case '*': {
            double result = 1;

            std::cout << "How many numbers you want to multiply? : ";
            std::cin >> how_many;

            if (how_many < 2 || how_many > 10) {
                std::cout << "Choose between 2 and 10 only!\n";
                break;
            }

            std::cout << "Enter " << how_many << " numbers:\n";
            for (int i = 1; i <= how_many; i++) {
                std::cin >> num;
                result *= num;
            }

            std::cout << "Result = " << result << "\n";
            break;
        }

        // -------- DIVISION --------
        case '/': {
            double result;

            std::cout << "How many numbers you want to divide? : ";
            std::cin >> how_many;

            if (how_many < 2 || how_many > 10) {
                std::cout << "Choose between 2 and 10 only!\n";
                break;
            }

            std::cout << "Enter number 1: ";
            std::cin >> result;

            for (int i = 2; i <= how_many; i++) {
                std::cout << "Enter number " << i << ": ";
                std::cin >> num;

                if (num == 0) {
                    std::cout << "Error: Division by zero is not allowed!\n";
                    return 0;
                }

                result /= num;
            }

            std::cout << "Result = " << result << "\n";
            break;
        }

        // -------- INVALID INPUT --------
        default:
            std::cout << "Invalid operation! Try again.\n";
    }

    return 0;
}
