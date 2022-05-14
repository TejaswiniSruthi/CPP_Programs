#include<bits/stdc++.h>
using namespace std;
int count_str(string str){
	int i=0,ans=0;
	while(str[i]!="\0"){
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
			ans++
		}
		i++;
	}
	return ans;
}
int main(){
	string str;
	cin>>str;
	cout<<count_str(str);
}
