#include<iostream>
using namespace std;
int main(){
    int arr[7]={4,2,7,8,1,2,5};
    int n;
    cout << "enter the number ot search:- ";
    int flag=0;
    cin >> n;
    for(int i=0;i<7;i++){
        if(arr[i]== n){
            cout << "The Search Element is at " << i << " index" << endl;
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout << "The Search Element is at -1 index" << endl;
    }
    return 0;
}