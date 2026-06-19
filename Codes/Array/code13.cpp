#include<iostream>
using namespace std;
int main(){
    // int marks[5]={99,98,97,96,95};
    // double price[]={100,99.99,998.97};
    // cout << marks[0] << endl;
    int a[6]= {5, 15, 22, 1, -15,-24};
    int high= INT_MIN;//(MEANS NEGATIVE INFINITY)
    int low = INT_MAX;//(MEANS POSITIVE INFINITY)
    for (int i=0; i<=5;i++){
        low = min(a[i],low);
        high = max(a[i],high);
    }
    for (int i=0; i<=5;i++){
        if(a[i] == low)
        cout << " The Lowest number is at index " << i << endl;
        if(a[i]==high)
        cout << " The Highest number is at index " << i << endl;
    }
     cout << high << endl;
     cout << low << endl;
    return 0;
}
