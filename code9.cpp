// Butterfly Pattern
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter n :- ";
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << "*" << " ";
        }
        for(int j=2*n;j>2*i+1;j--){
            cout << " " << " ";
        }
        for(int j=1;j<=i;j++){
            if(j!=n){
                cout << "*" << " ";
            }
        }
        cout << "\n";
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout << "*" << " ";
        }
        for(int j=1;j<=2*i-3;j++){
            cout << " " << " ";
        }
        for(int j=1;j<=n-i+1;j++){
            if(i==1 && j==1)
             continue;
            cout << "*" << " ";
        }
        cout << "\n";
    }
    return 0;
}