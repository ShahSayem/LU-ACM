#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
 
    stack <int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    
    cout<<"Stack elements: ";
    while (!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }    
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