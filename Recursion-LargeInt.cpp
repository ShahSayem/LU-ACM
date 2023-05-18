#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000;

int mx = 0;
void maxValue(int nums[], int i, int n)
{

    if (n == n-1){
        cout<<mx; 
        return;
    }
        
    maxValue(nums, i+1, n);
} 
  

int main()
{
    int n;
    cin>>n;

    int nums[n];
    for (int i = 0; i < n; i++){
        cin>>nums[i];
    }

    maxValue(nums, 0, n);

    // cout<<ans<<"\n";

    return 0;
} 