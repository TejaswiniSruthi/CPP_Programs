#include<bits/stdc++.h>
using namespace std;
int main(){
  long long int n;
  cin>>n;
  if(n>=0||n%10==0){
    cout<<n/10;
  }
  else{
    cout<<(n/10)-1;
  }
}
