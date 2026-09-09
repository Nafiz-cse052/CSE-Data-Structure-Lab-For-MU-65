#include<iostream>
using namespace std;
int main ()
{
    int a = 10;
    int *pt = &a;


   
    cout <<"value of a: "<<a<< endl;
    cout<<"Memory adress of a: "<<*pt<<endl;

    return 0;
}