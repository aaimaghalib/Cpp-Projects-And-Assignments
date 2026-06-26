#include <iostream>

bool isComposite(int number) {
    if (number <= 1)
        return false;
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0)
            return true;
    }
    return false;
}

int main() {
    int input;

    std::cout << "Enter an integer: ";
    std::cin >> input;
    
    if (isComposite(input))
        std::cout << input << " is a composite number." << std::endl;
    else
        std::cout << input << " is a prime number." << std::endl;

    return 0;
}
