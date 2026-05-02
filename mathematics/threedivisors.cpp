// Given a positive integer value n. The task is to find how many numbers less than or equal to n have numbers of divisors exactly 3.
#include<bits/stdc++.h>
using namespace std;
int isPrime(int n){
    if(n<=1){
        return 0;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;

}

int main(){
    int n;
    cin>>n;
    int count=0;
    for(int i=2;i*i<=n;i++){
        if(isPrime(i)){
            if(i*i<=n){
                count++;
                }
                else{
                    break;

                }
        }
    }
    cout<<count;
}