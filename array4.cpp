// Find the size of array
#include<iostream>
using namespace std;
int main(){
	int a[] = {95,85,75,100,88};
	// Method 1 using sizeof() function
 	int s = sizeof(a)/sizeof(a[0]);
 	// Method 2 using pointers
	int l = *(&a + 1) - a;// Method 2
	cout << "Size of array using method 1:" << s << endl;
	cout << "Size of array using method 2:" <<l;
}
