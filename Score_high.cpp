#include <iostream>
using namespace std;
int marks(){
    int arr[4],max=0;
    for(int i=0;i<4;i++){
        cin>>arr[i];
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int main() {
	// your code goes here
	int t,s;
	cin>>t;
	for(int i=0;i<t;i++){
	    cin>>s;
	    cout<<marks()<<"\n";
	}
	return 0;
}
