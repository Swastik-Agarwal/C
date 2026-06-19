#include<iostream>
using namespace std;
void changearr(int arr[],int size){
    for(int i=0;i<size;i++){
        arr[i]=2*arr[i];
    }
}
int main(){
    int a[]={1,2,3};
    
    changearr(a,3);
    for(int i=0;i<3;i++){
        cout << a[i] << endl;
    }

    return 0;
}