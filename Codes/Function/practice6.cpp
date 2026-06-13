// WAF to print prime numbers from 1 to N 
#include<iostream>
using namespace std;

void prime(int a){
    if(a>1){
        prime(a-1);
    }
    int flag = 1;
    for(int i=2;i<a;i++){
        if(a % i == 0){
            flag = 0;
            break;
        }
    }
    if(flag == 1){
        cout << a << endl;
    }
    else{
        return;
    }
}
int main(){
    int n;
    cout << "Enter Number:- ";
    cin >> n;
    prime(n);
    return 0;
}