#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
 
    pair <string, pair <pair<char, char>, int>> p;

    p = {"hello", make_pair(make_pair('a', 'b'), 90)};

    auto c = p.second.first.second;
    cout<<c;

    pair <pair<int, pair< pair<string, char>, string>>, int> p2;

   // p2 = {make_pair(make_pair(int, make_pair(make_pair("acm", 'b')))), 2020} //
   

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