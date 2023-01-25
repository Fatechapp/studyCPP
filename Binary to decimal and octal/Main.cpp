#include <iostream>
#include <cmath>

using namespace std;

int binaryToDecimal(long long n) {
    int decimalNumber = 0, i = 0, remainder;
    while (n!=0) {
        remainder = n%10;
        n /= 10;
        decimalNumber += remainder*pow(2,i);
        ++i;
    }
    return decimalNumber;
}
int binaryToOctal(long long binaryNumber)
{
    int octalNumber = 0, decimalNumber = 0, i = 0;

    while(binaryNumber != 0)
    {
        decimalNumber += (binaryNumber%10) * pow(2,i);
        ++i;
        binaryNumber/=10;
    }

    i = 1;

    while (decimalNumber != 0)
    {
        octalNumber += (decimalNumber % 8) * i;
        decimalNumber /= 8;
        i *= 10;
    }

    return octalNumber;
}


int main() {
    long long binaryNum;
    cout << "Enter a binary num :"; cin >> binaryNum;
    cout << "" << endl;
    cout << "Decimal equivalent: " << binaryToDecimal(binaryNum) << endl;
    cout << "Octal equivalent: " << binaryToOctal(binaryNum) << endl;
    return 0;
}
