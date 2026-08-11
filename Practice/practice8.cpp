#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t){
	    int n;
	    cin >> n;
	    unsigned long int a[n];
	    for(int i=0;i< n ;i++){
	        cin >> a[i];
	    }
	    int max = a[0];
	    for(int i=0;i<n;i++){
	        if(max < a[i])
	        max = a[i];
	    }
	    cout << max;
	    t--;
	}
    return 0;
}
