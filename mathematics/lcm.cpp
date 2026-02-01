// to find the lcm of a number
// using the relationship between gcd and lcm
#include <iostream>
using namespace std;
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}   
int lcm(int a, int b) {
    return ( a*b ) / gcd(a, b); 

    //in case of overflow, use:
    // return (a / gcd(a, b)) * b;
    //explained as:
    // lcm(a, b) = (a * b) / gcd(a, b)
    // to avoid overflow in a * b, we can rearrange it as (a / gcd(a, b)) * b   
    //example: a = 1,000,000 and b = 2,000,000
    // gcd(1,000,000, 2,000,000) = 1,000,000
    // lcm(1,000,000, 2,000,000) = (1,000,000 / 1,000,000) * 2,000,000 = 2,000,000

}   
int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "LCM is: " << lcm(num1, num2) << endl;
    return 0;
}
// Time Complexity: O(log(min(a, b))) due to gcd calculation
// Space Complexity: O(1) if implemented iteratively, O(log(min(a, b))) for recursive due to function call stack.

// Note: LCM (Least Common Multiple) is the smallest positive integer that is divisible by both numbers without leaving a remainder.