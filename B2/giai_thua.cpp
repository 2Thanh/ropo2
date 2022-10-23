#include <iostream>
using namespace std;
int main(){
    //int a[3][3] = {{1,2,3},{3,4,5},{2,6,3}};
    int n = 3;
    int **b;// mang 2 chieu
    b = new int*[n];//tao ra n con tro cho cac hang
    int m = 4;
    for (int i =0; i<n; i++){
        b[i] = new int[m];// gan cho moi hang m pt
    }

    for(int i =0;i<n;i++){
        for(int j = 0;j<m;j++){
            b[i][j] = 1;
        }
    }
    
    for(int i =0;i<n;i++){
        for(int j = 0;j<m;j++){
            cout<<b[i][j]<<"\t";
        }
        cout<<'\n';
    }
}