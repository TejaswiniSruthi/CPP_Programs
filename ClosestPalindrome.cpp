#include<bits/stdc++.h>
using namespace std;
bool rev(int n){
    int r=0,t=n;
    while(n){
        r=(r*10)+(n%10);
        n/=10;
    }
    return r==t;
}
int main(){
    int n,i=1;
    cin>>n;
    while(true){
        if(rev(n-i)&&rev(n+i)){
            cout<<n-i<<" "<<n+i;
            break;
        }
        if(rev(n-i)){
            cout<<n-i;
            break;
        }
        if(rev(n+i)){
            cout<<n+i;
            break;
        }
        i+=1;
    }
}
