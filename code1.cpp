#include<iostream>
using namespace std;

int main(){ 

    int age = 52;
    char grade = 'A';
    float PI = 3.14f; // always capital letters for constants and if we don't write f in the last it will be of double datatype
    bool issafe = true; // true --> 1 & false --> 0
    double price = 100.99;

    cout << "Hello" << endl;
    // cout use to print the statement 
    // << endl works as new line(\n) or we can use \n as "Hello\n"
    cout << age << endl;
    cout << grade << endl;
    cout << PI << endl;
    cout << issafe << endl;
    cout << price << endl;


    return 0 ;
}

// boiler plate code (to be used always)
// #include<iostream>
// using namespace std;

// int main(){ 
//     return 0;
// }