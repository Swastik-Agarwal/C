#include<iostream>
using namespace std;
int main(){
    int a=4;
    int b=8;
    cout << (a&b) << endl; // bitwise And
    cout << (a|b) << endl; // bitwise Or
    cout << (a^b) << endl; // bitwise Xor
    cout << (a<<2) << endl; // bitwise left shift a<<i(number of times)
    cout << (a>>2) << endl; // bitwise right shift a>>i(number of times)
    
    return 0;
}