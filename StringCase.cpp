#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string s1,s2;
    cin>>s1;
    cin>>s2;
    cout<<s1.length()<<" "<<s2.length()<<"\n";
    cout<<s1+s2<<"\n";
    cout<<s2[0]+s1.substr(1,s1.length()-1)<<" ";
    cout<<s1[0]+s2.substr(1,s2.length()-1);
    return 0;
}
