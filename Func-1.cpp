#include <bits/stdc++.h>
using namespace std;

float add(float x, float y);
float div(float x, float y);
float sub(float x, float y);
float mul(float x, float y);
float rem(int x, int y);

int main()
{
    float a, b;
    cin>>a>>b;

    char c;
    cin>>c;
    
    if(c == '+'){
        cout<<add(a, b)<<endl;
    }
    else if(c == '-'){
        cout<<sub(a, b)<<endl;
    }
    else if(c == '*'){
        cout<<mul(a, b)<<endl;
    }
    else if(c == '/'){
        cout<<div(a, b)<<endl;
    }
    else if(c == '%'){
        cout<<rem(a, b)<<endl;
    }

    return 0;
}

float add(float x, float y){ 
    float sum = x+y;

    return sum;
}

float div(float x, float y){
    float division = x/y;

    return division;
}

float sub(float x, float y){
    float substraction = x-y;

    return substraction;
}

float mul(float x, float y){
    float multiplication = x*y;

    return multiplication;
}

float rem(int x, int y){
    float remainder = x%y;

    return remainder;
}