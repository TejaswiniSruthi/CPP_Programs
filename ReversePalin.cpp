#include<bits/stdc++.h>
using namespace std;
int rev(int n){
    int r=0;
    while(n){
        r=r*10+(n%10);
        n/=10;
    }
    return r;
}
int main(){
    int n;
    cin>>n;
    while(true){
        int r=rev(n)+n;
        if(r==rev(r)){
            cout<<r;
            break;
        }
        n=r;
    }
}
