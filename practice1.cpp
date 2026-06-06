#include<iostream>
using namespace std;

int main (){
    char c;
    cout << "Enter Character: ";
    cin >> c;

    if(c >= 65 &&  c <= 90 ){
    cout << "Uppercase \n";

    }else if (c >= 97 && c <= 122 ){
        cout << "Lowercase \n";

    }else{
        cout << "Not identified\n";
    }

}
