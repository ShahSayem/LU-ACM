#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin>>n;

    if (n%4 == 0 || n%7 == 0 || n%44 == 0 || n%47 == 0 || n%74 == 0 || n%77== 0 || n%444 == 0 || n%447 == 0 || n%477 == 0 || n%777 == 0 || n%774 == 0 || n%744 == 0){
        cout<<"YES";
        return;
    }
    else
        cout<<"NO";       
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // int t;
    // cin>>t;
    // while (t--){
        solve();
    // }

    cout<<"\n";

    return 0;
}