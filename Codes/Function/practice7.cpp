// WAF to print nth fibonacci series
#include<iostream>
using namespace std;

void fibo(int a){
    int last2 = 0;
    int last1 = 1;
    int fibon;
    cout << "the Fibonacci series upto" << a << "terms is :-" << endl;
    cout << last2 << "," << last1;
    for(int i=1;i<a;i++){
        fibon = last2+last1;
        last2 = last1;
        last1 = fibon;
         cout << "," << fibon;
    }
   
}

int main(){
    int n;
    cout << "Enter the number:- ";
    cin >> n;
    fibo(n);
    cout << endl;
    return 0;
}