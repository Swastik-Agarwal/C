#include<iostream>
using namespace std;
int main() {
    int marks;
    cout << "Enter marks: ";
    cin >> marks;
    // conditional statements if,else,else if 
    if(marks>=90){
        cout << "Grade ='A'\n";
    }else if (marks<90 && marks>=80){
        cout << "Grade = 'B'\n";

    }else{
        cout << "Grade = 'C'\n";
    }
    // Ternary Statement
    cout << (marks>=90 ? "Grade A" : "Grade B" ) << endl;
    return 0;
}