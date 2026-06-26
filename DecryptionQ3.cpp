#include <iostream>

int decrypt(int number) 
{
    int digit1 = number / 1000;
    int digit2 = (number / 100) % 10;
    int digit3 = (number / 10) % 10;
    int digit4 = number % 10;

    // Swap the digits (reverse of encryption step)
    int temp = digit1;
    digit1 = digit3;
    digit3 = temp;

    temp = digit2;
    digit2 = digit4;
    digit4 = temp;

    // Reverse the modulus 10 addition (subtract 7 instead of adding 7)
    digit1 = (digit1 + 3) % 10;
    digit2 = (digit2 + 3) % 10;
    digit3 = (digit3 + 3) % 10;
    digit4 = (digit4 + 3) % 10;

    int decryptedNumber = digit1 * 1000 + digit2 * 100 + digit3 * 10 + digit4;
    return decryptedNumber;
}

int main() 
{
    int encryptedNumber;
    std::cout << "Enter an encrypted four-digit integer: ";
    std::cin >> encryptedNumber;
    if (encryptedNumber >= 1000 && encryptedNumber <= 9999) 
{
        int decryptedNumber = decrypt(encryptedNumber);
        std::cout << "Decrypted number: " << decryptedNumber << std::endl;
    } else 
{
        std::cout << "Invalid input. Please enter an encrypted four-digit integer." << std::endl;
    }

    return 0;
}

