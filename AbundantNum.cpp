#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int sfact(int n){
    int s=1;
    for(int i=2;i<=int(sqrt(n));i++){
        if(n%i==0){
            s+=(i+n/i);
        }
        if(n/i==i){
            s-=i;
        }
    }
    return s;
}
int main(){
    int n;
    cin>>n;
    if(sfact(n)>n){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}
