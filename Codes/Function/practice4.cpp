// To calculate sum of all digits
#include<iostream>
using namespace std;

int maths(int n){    
    int sum =0;
    while(n!=0){
        int rem = n%10;
        sum= sum+rem;
        n=n/10;
    }

    return sum;
}
int main(){
    int n;
    cout << "Enter Number:- ";
    cin >> n;
    int sum = maths(n);
    cout << sum  << "\n";
    return 0;
}