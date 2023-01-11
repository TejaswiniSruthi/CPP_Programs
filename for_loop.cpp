#include <iostream>
#include <cstdio>
#include<string.h>
using namespace std;

string which(int n){
    string s1;
    if (n>9){
        if(n%2==0){
               s1="even";
        }
        else{
            s1="odd";
        }
    }
    else{
        if(n==1){
            s1="one";
        }
        if(n==2){
            s1="two";
        }
        if(n==3){
            s1="three";
        }
        if(n==4){
            s1="four";
        }
        if(n==5){
            s1="five";
        }
        if(n==6){
            s1="six";
        }
        if(n==7){
            s1="seven";
        }
        if(n==8){
            s1="eight";
        }
        if(n==9){
            s1="nine";
        }
    }
    return s1;
}
int main() {
    // Complete the code.
    int a,b,n;
    cin>>a;
    cin>>b;
    for(int i=a;i<=b;i++){
        cout<<which(i)<<"\n";
    }
    return 0;
}
