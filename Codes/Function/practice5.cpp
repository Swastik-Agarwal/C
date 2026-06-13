// To calculate combination of a number [n^C^r]
#include<iostream>
using namespace std;

int fact(int x){
    int pro=1;
    for(int i=1;i<=x;i++){
        pro*=i;
    }
    return pro;
}
int comb(int a,int b){
    int ans;
    ans= fact(a)/(fact(b)*fact(a-b));
    return ans;
}
int main(){
    int n;
    cout << "Enter n :- ";
    cin >> n;
    int r;
    cout << "Enter r :-";
    cin >> r;
    if(n<r)
    cout << "Not possible";
    else
    cout << comb(n,r) << endl;
    return 0;
}