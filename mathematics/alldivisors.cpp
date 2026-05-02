// print all divisors of a number
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    for(;i*i<n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
    for(;i>=1;i--){
        if(n%i==0){
            cout<<n/i<<" ";
        }
    }
}