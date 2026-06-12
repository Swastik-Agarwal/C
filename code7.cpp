#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter n:- ";
    cin >> n;
    //char ch='A';
    int num=1;
    int space =0;
    for(int i=0;i<n;i++){
        for (int k=0;k<=space;k++){
            cout << ' ' << ' ';
        }
        for(int j=0;j<n-i;j++){

            cout << num << ' ' ;
        }
        num++;
        space++;
        cout << "\n";
    }

    return 0;
}