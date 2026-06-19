#include<iostream>
using namespace std;

int rev(int x){
    int y=0;
    while(x>0){
        int rem=x%10;
        x/=10;
        y= y*10+rem;
        
    }
    return y;
}
int main(){
    int a;
    cout << "Enter Number :- " ;
    cin >> a;
    int b = rev(a);
    cout << b << endl;
    return 0;
}