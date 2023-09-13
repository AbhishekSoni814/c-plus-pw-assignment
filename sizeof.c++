#include<iostream>
using namespace std;
int main()
{
    float value;
    int intv;
    double doublev;
    char charv;
    short shortv;
    long long longv;
    long double ld;
    bool boolv;

    cout<<"Size of float"<<sizeof(value) <<endl;
    cout<<"Size of int"<<sizeof(intv) <<endl;
    cout<<"Size of double"<<sizeof(doublev) <<endl;
    cout<<"Size of char"<<sizeof(charv) <<endl;
    cout<<"Size of long long"<<sizeof(longv) <<endl;
    cout<<"Size of long double"<<sizeof(ld) <<endl;
    cout<<"Size of boolean"<<sizeof(boolv) <<endl;
}