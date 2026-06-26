#include <iostream>
using namespace std;

int main()
{
    int number, originalNumber, reverseNumber = 0;
    cout << "Enter a five-digit integer: ";
    cin >> number;
    originalNumber = number;
    // Reversing the number
    while (number != 0)
      {
        int remainder = number % 10;
        reverseNumber = reverseNumber * 10 + remainder;
        number /= 10;
       }

    if (originalNumber == reverseNumber)
    {
        cout << originalNumber << " is a palindrome." << endl;
    } else
   {
        cout << originalNumber << " is not a palindrome." << endl;
   }
    return 0;
}

