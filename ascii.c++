#include<iostream>
using namespace std;
int main()
{
    char c;
    int ascii;

    cout<<"Enter the character::";
    cin>>c;

    ascii=(int)c;

    cout<<"Ascii value of character " <<c <<" is::" <<ascii <<endl;
    return 0;   
}