#include <iostream>
using namespace std;
int main(){
    int n;
    int *a;
    cout <<"Nhap so phan tu cua mang";
    cin >> n;
    a = new int[n];
    for (int i =0;i<n;i++){
        cin >> a[i];
    }
    for (int i =0;i<n;i++){
        cout<< a[i]<<"\t";
    }
    for (int x = 0;x<n;x++){
        for(int y =0; y<n;y++){
            if (a[x] > a[y]){
                int tmp = a[x];
                a[x] = a[y];
                a[y] = tmp;
            }
        }
    }
    cout<<"\n";
    for (int i =0;i<n;i++){
        cout<< a[i]<<"\t";
    }
}