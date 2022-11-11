#include<math.h>
#include<bits/stdc++.h>
using namespace std;
bool prime(int n){
    if (n<=1){
        return true;
    }
    int l=sqrt(n);
    for(int i=2;i<=l;i++){
        if (n%i==0){
            return true;
        }
    }
    return false;
}
int main(){
    int n,c=1;
    cin>>n;
    for(int i=2;i<=n;i++){
        if (n%i==0){
            if (prime(i)){
                c++;
            }
        }
    }
    cout<<c;
}
