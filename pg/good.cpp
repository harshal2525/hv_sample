#include<iostream>
using namespace std;
int add(int a,int b,int c=0)
{
    if(a>=0 && b>=0)
    return a+b;
}
int main()
{
    cout<<add(5,7);
}
