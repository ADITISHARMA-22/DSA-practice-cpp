#include<iostream>
using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a non-negative integer: ";
//     cin>>n;
//     unsigned long long factorial = 1;
//     for(int i = 1; i <= n; ++i){
//         factorial *= i;
//     }   
//     cout<<"Factorial of "<< n <<" = "<< factorial << endl;
//     return 0;
// }
// This program calculates the factorial of a non-negative integer provided by the user.

//Iterative approach : time complexity O(n) , space complexity O(1)

//Recursive approach : time complexity O(n) , space complexity O(n) due to function call stack

// Note: Factorial values grow very fast, so for large n, consider using data types that can handle big integers.



unsigned long long factorial(int n) {
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}
int main(){
    int n;
    cout<<"Enter a non-negative integer: ";
    cin>>n;
    if(n < 0){
        cout<<"Factorial is not defined for negative numbers."<<endl;
        return 1;
    }
    unsigned long long result = factorial(n);
    cout<<"Factorial of "<< n <<" = "<< result << endl;
    return 0;
}