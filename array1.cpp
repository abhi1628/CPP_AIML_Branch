#include<iostream>
using namespace std;
int main(){
	int a[5];
	a[0] = 2;
	a[1] = -5;
	a[2] = 10;
	a[4] = 9;
	a[3] = a[4];
	cout << "The array address is:" << a << endl;
	cout << "The entered array is:";
	int s = sizeof(a)/sizeof(a[0]);
	for(int i = 0; i < s; i++)
		cout << a[i] << " ";
	cout << "\nThe size is:" << s;
}

