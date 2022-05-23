#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,count=0,m,o;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            m=i;
            break;
        }
    }
    for(int i=n-1;i>=m;i--){
        if(arr[i]%2==0){
            o=i;
            break;
        }
    }
    for(int i=m+1;i<o;i++){
        if(arr[i]%2!=0){
            count++;
        }
        else{
            continue;
        }
    }
    cout<<count;
}
