// Function Pass by value
#include<iostream>
using namespace std;
// Function Declaration
int maths(int x, int y){    // Parameters
    int sum = x+y;
    return sum;
}

int main(){
    int a = 10;
    int b = 60;
    int sum = maths(a,b);    // Function Calling & Arguments
    cout << sum << "\n";
    return 0;
}

// Parameters :- Copy of the arguments 
// Arguments :- Actual value pass to a function