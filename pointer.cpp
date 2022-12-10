#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int a;
    int *b;

    a=5;
    b=&a;

    cout<<"Nilai a : "<<a<<endl;
    cout<<"Nilai &a : "<<&a<<endl;
    cout<<"Nilai b : "<<b<<endl;
    cout<<"Nilai *b : "<<*b<<endl;
    cout<<sizeof(b);
    getch();
}