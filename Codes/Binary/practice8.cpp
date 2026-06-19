#include<iostream>
using namespace std;
void dec(int x){
    int ans=0;
    int pow=1;
    while(x>0){
        int rem = x%10;
        x/=10;
        ans+=(rem*pow);
        pow*=2;
    }
    cout << ans << endl;
}
int main(){
    int n;
    cout << "Enter binary number:- ";
    cin >> n;
    dec(n);
    return 0;
}