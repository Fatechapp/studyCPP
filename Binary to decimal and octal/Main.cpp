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

int binaryToOctal(long long n) {
    int octalNumber = 0, i = 1, remainder;
    while (n!=0) {
        remainder = n%1000;
        n /= 1000;
        octalNumber += remainder*i;
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
