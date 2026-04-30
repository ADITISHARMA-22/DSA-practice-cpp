// whether a number is palindrome or not

#include <iostream>
using namespace std;
int main() {
    int n, reversedNumber = 0, remainder, originalNumber;
    cout << "Enter an integer: ";
    cin >> n;
    originalNumber = n;
    while (n != 0) {
        remainder = n % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        n /= 10;
    }
    if (originalNumber == reversedNumber)
        cout << originalNumber << " is a palindrome." << endl;
    else
        cout << originalNumber << " is not a palindrome." << endl;
    return 0;
}

// Time Complexity: O(d) where d is the number of digits in the number
// Space Complexity: O(1)   