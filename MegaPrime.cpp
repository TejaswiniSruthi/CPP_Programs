#include<bits/stdc++.h>
#include<math.h>
using namespace std;
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
    bool b=true;
    cin>>n;
    if(prime(n)){
        while(n){
            if (not(prime(n%10))){
                cout<<"Not Mega Prime";
                b=false;
                break;
            }
            n=int(n/10);
        }
        if (b){
            cout<<"Mega Prime";
        }
    }
    else{
        cout<<"Not Mega Prime";
    }
}
