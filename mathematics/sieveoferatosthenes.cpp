//print all prime factors of a number using sieve of eratosthenes
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<bool>isprime(n+1,true);
    for(int i=2;i<=n;i++){
        if(isprime[i]){
            cout<<i<<" ";
            
            for(int j=i*i;j<=n;j+=i){
                isprime[j]=false;
            }   

        }
    }
}
