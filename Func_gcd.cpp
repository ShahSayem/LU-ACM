#include <iostream>
using namespace std;

int gcd(int a, int b){

    int rem;
    while (b != 0){
        rem = a%b;
        a = b;
        b = rem;
    }

    return a;
    
}


int gcd_recursion(int a, int b)
{
    if (b == 0)
        return a;
    
    return gcd_recursion(b, a%b);
}

int main()
{
    int a, b;
    cin>>a>>b;

    cout<<gcd(a, b);

    return 0;
}

