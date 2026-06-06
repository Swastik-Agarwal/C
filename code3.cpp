#include<iostream>
using namespace std;
// conditional statements if,else,else if 
int main() {
    int marks;
    cout << "Enter marks: ";
    cin >> marks;
    if(marks>=90){
        cout << "Grade ='A'\n";
    }else if (marks<90 && marks>=80){
        cout << "Grade = 'B'\n";

    }else{
        cout << "Grade = 'C'\n";

    }

    return 0;
}