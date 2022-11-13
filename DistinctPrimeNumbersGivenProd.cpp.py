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
    cin>>n;
    bool b=true;
    for(int i=2;i<=int(sqrt(n));i++){
        if((n%i==0)&&(n/i!=i)){
            if(prime(n/i)&&prime(i)){
                cout<<i<<" "<<int(n/i);
                b=false;
                break;
            }
        }
    }
    if (b){
        cout<<(-1);
    }
}
