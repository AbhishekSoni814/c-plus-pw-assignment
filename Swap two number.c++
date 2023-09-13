#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the value of a::";
    cin>>a;

    cout<<"Enter the value of b::";
    cin>>b;

    c=b;
    b=a;
    a=c;

    cout<<"After Swaping the value of a::" <<a <<endl;
    cout<<"After Swaping the value of b::" <<b <<endl;
}