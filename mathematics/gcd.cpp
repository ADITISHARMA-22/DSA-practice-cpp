// to find the gcd of a number
// using Euclidean algorithm : efficient method
#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "GCD is: " << gcd(num1, num2) << endl;
    return 0;
}

// Time Complexity: O(log(min(a, b)))
// Space Complexity: O(1) if implemented iteratively, O(log(min(a, b))) for recursive due to function call stack.

// Note: GCD (Greatest Common Divisor) is the largest positive integer that divides two or more integers without leaving a remainder.

