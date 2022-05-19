/*CodeMind: 
i/p:
2                       Explanation:2+0=2; 20%2==0
20                      2+2=4;22%4!=0
22
o/p:
YES NO */
#include<bits/stdc++.h>
using namespace std;
int harshad(int n){
    int sum=0,rem;
    while(n){
        rem=n%10;
        sum+=rem;
        n/=10;
    }
    return sum;
}
int main(){
    int q,n,res,p=0;
    cin>>q;
    string arr[q];
    for(int i=q;i>0;i--){
        cin>>n;
        res=harshad(n);
        if(n%res==0){
            arr[p]="YES";
            p++;
        }
        else{
            arr[p]="NO";
            p++;
        }
    }
    for(p=0;p<q;p++){
        cout<<arr[p]<<"\n";
    }
}
