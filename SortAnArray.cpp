//This program sorts the numbers (0,1,2) in the given array
#include<iostream>
using namespace std;
int main() {
	int t,n;
	int* arr;
	cin>>t;
	while(t--) {
		cin >> n;
		arr = (int *)malloc(n*sizeof(int));
		for( int i = 0;i < n; i++) {
			cin >> arr[i];
		}
		for( int i = 0;i < n; i++) {
			if( arr[i] == 0 ) {
			   cout << arr[i] << " ";
			}
		}
		for(int i = 0;i < n; i++) {
			if( arr[i] == 1 ) {
			   cout << arr[i] << " ";
			}
		}
		for(int i = 0;i < n; i++) {
			if( arr[i] == 2 ) {
			   cout << arr[i] << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}

/*
	Follow some instructions 
	1. use only those header files which you are using in your code.
	2. Work on indentation
	3. Variable name should be related.
	4. your code should look good.
	
*/
