#include<iostream>
using namespace std;
void bin(int x){
    int ans=0;
    int pow=1;
    while(x>0){
        int rem = x%2;
        x/=2;
        ans+=(rem*pow);
        pow*=10;
    }
    cout << ans << endl;
}
int main(){
    int n;
    cout << "Enter Number:- ";
    cin >> n;
    bin(n);
    return 0;
}