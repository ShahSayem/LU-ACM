#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000;

string ans;

string reverseString(char str[i])
{
    if (str[i] == NULL)
        return NULL;
    
    ans += reverseString(str[i+1]);
} 
  

int main()
{
    string str, ans = "";
    cin>>str;

    ans = reverseString(str[0]);
    cout<<ans<<"\n";

    return 0;
} 