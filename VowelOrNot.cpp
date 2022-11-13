#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    char c;
    cin>>c;
    vector<char> v{'A','E','I','O','U','a','e','i','o','u'};
    if (find(v.begin(),v.end(),c)!=v.end())
        cout <<"Vowel";
    else
        cout <<"Consonant";
}
