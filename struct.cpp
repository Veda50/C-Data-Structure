#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

struct mhs
{
    int nim;
    string nama;
    double ipk;
};

int main()
{
    mhs a[10];
    int n;
    double jumipk, mean;
    cout<<"Jumlah Mahasiswa yang akan diinput : ";
    cin>>n;
    for(int i = 1; i <= n; i++)
    {
        cout<<"Masukan Nama Anda : ";
        cin>> a[i].nama;
        cout<<"Masukan NIM : ";
        cin>>a[i].nim;
        cout<<"Masukkan IPK : ";
        cin>>a[i].ipk;
    }

    system("cls");
    cout<<"Data Nilai Mahasiswa"<<endl;
    cout<<"Nama "<<"NIM "<<"IPK "<<endl;
    for (int i = 1; i<=n;i++)
    {
        cout<<a[i].nama<<" \t"<<a[i].nim<<" \t"<<a[i].ipk<<endl;
        jumipk = jumipk + a[i].ipk;
    }
    cout<<endl;
    cout<<"Rata-rata : "<<jumipk/n;
    getch();
}