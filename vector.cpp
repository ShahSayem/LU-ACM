#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
 
    vector <int> v;
    v.push_back(10);

    v.insert(v.begin()+1, 30);
    auto x = find(v.begin(), v.end(), 10);

    cout<<"Vector elements: ";
    for(auto z:v)
        cout<<z<<" ";
    cout<<"\n";

    if (x == v.end())
        cout<<"10 not found";
    else
        cout<<"10 found at position "<<x-v.begin();
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // int t;
    // cin>>t;
    // while (t--){
        solve();
        cout<<"\n";
    // }

    return 0;
}