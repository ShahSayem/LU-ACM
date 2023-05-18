#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000;

void solveWithoutMap(string str)
{
    int arr[127] = {0}, x, check = -1;

    char ans, ansf;
    for (int i = 0; i < str.size(); i++){
        x = str[i];

        arr[x]++;

        if (check < arr[x]){
            check = arr[x];
            ans = str[i];
        }
    }
    cout<<"Using ASCII, max char: "<<ans<<"\n";

    for (int i = 0; i < str.size(); i++){
        if (arr[str[i]] == check){
            ansf = str[i];
            break;
        }
    }
    cout<<"Using ASCII, first occurrence max char: "<<ansf;
} 

void solveMap(string str)
{
    unordered_map <char, int> mp;
    int check = -1;

    char ans, ansf;
    for (int i = 0; i < str.size(); i++){

        mp[str[i]]++;

        if (check < mp[str[i]]){
            check = mp[str[i]];

            ans = str[i];
        }
    }
    cout<<"Using map, max char: "<<ans<<"\n";

    for (int i = 0; i < str.size(); i++){
        if (mp[str[i]] == check){
            ansf = str[i];
            break;
        }
    }
    cout<<"Using map, first occurrence max char: "<<ansf;
}
  

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while (t--){
        string str;
        cin>>str;

        solveWithoutMap(str);
        cout<<"\n";
        solveMap(str);
        cout<<"\n\n";
    }

    return 0;
} 