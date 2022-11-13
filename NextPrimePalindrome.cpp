#include<bits/stdc++.h>
#include<math.h>
using namespace std;
bool rev(int n){
    int r=0,t=n;
    while(n){
        r=r*10+(n%10);
        n/=10;
    }
    return t==r;
}
bool prime(int n){
    if(n<=1){
        return false;
    }
    for(int i=2;i<=int(sqrt(n));i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    while(true){
        n++;
        if(prime(n)&&rev(n)){
            cout<<n;
            break;
        }
    }
}
