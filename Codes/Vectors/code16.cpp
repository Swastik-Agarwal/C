#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec={1,2,3,4,5};
    int a=vec.size();
    cout << a << endl;
    vec.push_back(6);
    cout << vec.size() << endl;
    for (int val : vec){ // for each loop
         cout << val << endl; 
    }
    vec.pop_back();
    cout << " " << endl;
    cout << vec.front() << endl;
    cout << vec.back() << endl;
    cout << vec.at(3) << endl;
    return 0;

}