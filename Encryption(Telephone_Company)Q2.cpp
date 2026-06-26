#include <iostream>

int encrypt(int number) 
{
    int digit1 = number / 1000;
    int digit2 = (number / 100) % 10;
    int digit3 = (number / 10) % 10;
    int digit4 = number % 10;

    digit1 = (digit1 + 7) % 10;
    digit2 = (digit2 + 7) % 10;
    digit3 = (digit3 + 7) % 10;
    digit4 = (digit4 + 7) % 10;

    // Swap the digits
    int temp = digit1;
    digit1 = digit3;
    digit3 = temp;

    temp = digit2;
    digit2 = digit4;
    digit4 = temp;

    int encryptedNumber = digit1 * 1000 + digit2 * 100 + digit3 * 10 + digit4;
    return encryptedNumber;
}

int main() 
{
    int number;

    std::cout << "Enter a four-digit integer: ";
    std::cin >> number;

    if (number >= 1000 && number <= 9999) 
   {
        int encryptedNumber = encrypt(number);
        std::cout << "Encrypted number: " << encryptedNumber << std::endl;
    } else {
        std::cout << "Invalid input. Please enter a four-digit integer." << std::endl;
    }

    return 0;
}

