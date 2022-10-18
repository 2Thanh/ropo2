#include <iostream>
using namespace std;
int cong()
{
    int a,b;
    cout<< "Nhap a va b:";
    cin>> a >> b;
    return a+b;
}
int tru()
{
    int a,b;
    cout<< "Nhap a va b:";
    cin>> a >> b;
    return a-b;
}
int chia_lay_nguyen()
{
    int a,b;
    cout<< "Nhap a va b:";
    cin>> a >> b;
    return a;
}
int main(){
    float a;
    int choose;
    cout<<"Nhap phep tinh ban muon: \n0. Phep tinh cong\n1. Phep tinh Tru\n2.Phep tinh lay nguyen\n3.In ra chuoi switch-case"<<endl;
    cin >> choose;
    switch (choose)
    {
    case 0:
        cout<<cong();
        break;
    case 1:
        cout<<tru();
        break;
    case 2:
        cout<<chia_lay_nguyen();
        break;
    default:
        cout<<"Khong co truong hop nao thoa man"<<endl;
        break;
    }

}