#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,count=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>t;
    for(int i=0;i<n;i++){
        if(arr[i]==t){
            count++;
        }
    }
    cout<<count;
}
