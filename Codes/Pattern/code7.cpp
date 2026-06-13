// to print pyramid
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter n:- ";
    cin >> n;
    //char ch='A';
    int space =n-1;
    for(int i=0;i<n;i++){
        int num=1;
        for (int k=0;k<space;k++){
            cout << ' ' << ' ';
        }
        for(int j=0;j<i+1;j++){

            cout << num << ' ' ;
            num++;
        }
        num--;
        for(int l=0;l<i;l++){
            num--;
            cout << num << ' ' ;
        }
        space--;
        cout << "\n";
    }

    return 0;
}