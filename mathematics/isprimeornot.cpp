//check if the number is prime or not

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool isprime=true;
    if(n==1){
        cout<<"1 is neither prime nor composite";
        return 0;
    }
    else if(n==2 || n==3){
        cout<<"its a prime number";   
        return 0;
     }
    else if(n%2==0 || n%3==0){
        cout<<"its not a prime number";
        return 0;
    }
    for(int i=5;i*i<=n;i+=6){
        if((n%i==0)|| (n%(i+2)==0)){
            isprime=false;
            break;
        }
    }
    if(isprime){
        cout<<"its a prime number";
    }
    else{
        cout<<"its not a prime number";
    }
}