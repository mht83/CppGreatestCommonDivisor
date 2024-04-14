//////////////////////////////////////////////written by mht83/////////////////////////////////////////
#include <iostream>
#include <conio.h>

int main() {
    int firstNumber, secondNumber, temporary, remainder;

    std::cout << "Enter 2 numbers\n";
    std::cin >> firstNumber >> secondNumber;

    // Ensure firstNumber is less than secondNumber
    if (secondNumber < firstNumber) {
        temporary = firstNumber;
        firstNumber = secondNumber;
        secondNumber = temporary;
    }

    // Find the Greatest Common Divisor (GCD)
    while (secondNumber % firstNumber != 0) {
        remainder = secondNumber % firstNumber;
        secondNumber = firstNumber;
        firstNumber = remainder;
    }

    std::cout << '\n' << firstNumber;

    _getch();
    return 0;
}
