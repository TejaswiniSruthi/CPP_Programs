#include<bits/stdc++.h>
#include<iostream>
using namespace std;
string palin(string str){
    int l=str.length(),i=0;
    while( i<l-i-1){
        if(str[i]!=str[l-i-1]) return"NO";
        i++;
    }
    return "YES";
}
int main(){
    string str;
    cin>>str;
    cout<<palin(str);
}
