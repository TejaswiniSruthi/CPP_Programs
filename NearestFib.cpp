#include<bits/stdc++.h>
#include<math.h>
using namespace std;
bool sqr(int n){
    int x;
    x=int(sqrt(n));
    return (x*x==n);
}
bool fib(int n){
    return (sqr(5*n*n-4) || sqr(5*n*n+4));
}
int main(){
    int n,i=0;
    cin>>n;
    while (true){
        if (fib(n-i) && fib(n+i)){
            cout<<n-i<<" "<<n+i;
            break;
        }
        if(fib(n-i)){
            cout<<n-i;
            break;
        }
        if(fib(n+i)){
            cout<<n+i;
            break;
        }
        i++;
    }
}
