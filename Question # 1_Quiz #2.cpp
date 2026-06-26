#include <iostream>

bool isPrime(int number) {
    if (number <= 1)
        return false;
    if (number == 2)
        return true;
    if (number % 2 == 0)
        return false;
    for (int i = 3; (i * i) <= number; i += 2) {
        if (number % i == 0)
            return false;
    }
    return true;
}

int main() {
    int input;

    std::cout << "Enter an integer: ";
    std::cin >> input;

    if (input <= 7 && input > 0) {
        if (isPrime(input))
            std::cout << input << " is a prime number." << std::endl;
        else
            std::cout << input << " is not a prime number." << std::endl;
    } else {
        std::cout << "Value is out of range. Goodbye..." << std::endl;
    }

    return 0;
}
