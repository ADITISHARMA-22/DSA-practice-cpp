//to count digits in a factorial of a number
#include<bits/stdc++.h> 
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n==0){
    cout<<"1";
    return 0;
    } 
    
    double digits=0;
    for(int i=1;i<=n;i++){
        digits+=log10(i);
    }
    cout<<floor(digits)+1;
}
