#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n/10){
        int s=0;
        while(n){
            s+=(n%10)*(n%10);
            n/=10;
        }
        n=s;
    }
    if(n==1){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}
