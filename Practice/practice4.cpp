#include<iostream>
using namespace std;
int main(){
    int n ;
    cout << "Enter n:- ";
    cin >> n;
    char value ='A';

    for(int i=0;i<n;i++){
        char value ='A';
        for(int j=0;j<n-i-1;j++){
            cout << " ";
        }
        for(int j=0;j<i+1;j++){
            cout << value;
            value++;
        }
        value--;
        for(int j=0;j<i;j++){
            --value;
            cout << value;
        }
        cout << "\n";
    }
}