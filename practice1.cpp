#include<iostream>
using namespace std;

int main (){
    int num;
    cout << "Enter the number:- ";
    cin >> num;
    int i;
    for(i=2;i*i<=num;i++){
        if(num%i==0){
            cout << "This is not a prime number." << endl;
            break;
        }
    }
    if(i==num){
        cout << "This is a prime number." << endl;
    }
    return 0;
}
