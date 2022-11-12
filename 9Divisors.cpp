#include<bits/stdc++.h>
#include<math.h>
using namespace std;
bool fact(int n){
    int c=2;
    for(int i=2;i<=int(sqrt(n));i++){
        if ((n%i)==0){
            c+=2;
        }
        if(n/i==float(i)){
            c--;
        }
    }
    if(c==9){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int n,c=0;
    cin>>n;
    for(int i=1;i*i<=n;i++){
        if (fact(i*i)){
            cout<<(i*i)<<" ";
            c++;
        }
    }
    cout<<"\n"<<"Total="<<c;
}
