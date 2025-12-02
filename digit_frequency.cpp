/* Algorithm Challenge & Problem Solving
 * 8 - Digit Frequency Counter
 *
 * This program reads a positive integer (the main number) and a single digit,
 * then calculates how many times that digit appears within the number.
 *
 * The program extracts digits using modulo (%) and integer division, then
 * compares each digit with the target digit to count its frequency.
 */

#include <iostream>
using namespace std;

int ReadPositiveNumber(string Message)
{
    int Number;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

int CountDigitFrequency(short DigitToCheck, int Number)
{
    int FreqCount = 0, Remainder = 0;

    while (Number > 0)
    {
        Remainder = Number % 10; // Extract last digit
        Number = Number / 10;    // Remove last digit

        if (DigitToCheck == Remainder)
        {
            FreqCount++; // Count match
        }
    }

    return FreqCount;
}

int main()
{
    int Number = ReadPositiveNumber("Please enter the main number:");
    short DigitToCheck = ReadPositiveNumber("Please enter one digit to check its frequency:");

    cout << "\nDigit " << DigitToCheck
         << " Frequency is " << CountDigitFrequency(DigitToCheck, Number)
         << " Time(s)\n";

    return 0;
}
