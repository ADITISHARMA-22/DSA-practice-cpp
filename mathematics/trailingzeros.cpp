// to find the trailing zeros in n!
// brute force approach : calculate n! and count the number of trailing zeros
#include <iostream>
using namespace std;
// int main(){
//     int n;
//     cout<<"enter a positve interger";
//     cin>>n;
//     unsigned long long factorial = 1;
//     for(int i = 1; i <= n; ++i){
//         factorial *= i;
//     }
//     int count = 0;
//     while(factorial % 10 == 0){
//         count++;
//         factorial /= 10;
//     }
//     cout<<count<<endl;
//     return 0;   
// }

//time complexity : O(n) to calculate factorial and O(d) to count trailing zeros where d is number of digits in n!
//space complexity : O(1)


//efficient approach : count the number of factors of 5 in n!

int main(){
    int n;
    cout<<"enter number";
    cin>>n;
    int zeros=0;
    for(int i=5;i<=n;i=i*5){
        zeros+=n/i;
    }
    cout<<zeros<<endl;
    return 0;
}

//time complexity : O(log5 n)
//space complexity : O(1)

// ^ Note: The number of trailing zeros in n! is determined by the number of times 10 is a factor in the numbers from 1 to n. Since 10 is made up of 2 and 5, and there are usually more factors of 2 than 5, the count of trailing zeros is determined by the number of times 5 is a factor in those numbers.

// 5^k <= n  => k < = log5 n  => k = floor(log5 n)
// Thus, the loop runs for k iterations, leading to a time complexity of O(log5 n).
