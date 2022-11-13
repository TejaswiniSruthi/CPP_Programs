#include<bits/stdc++.h>
#include<math.h>
using namespace std;
bool fact(int n){
    int s=1;
    for(int i=2;i<=int(sqrt(n));i++){
        if(n%i==0){
            s+=((n/i)+i);
        }
    }
    return s==n;
}
int main(){
    int n;
    cin>>n;
    if(fact(n)){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}
