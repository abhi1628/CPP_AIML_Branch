#include<iostream>
using namespace std;
int main(){
	int a = 0;
	cout << "Enter a number:";
	cin >> a;
	if(a%9 == 0)
	cout << "The sum is 9" << endl;
	else
	cout << "The sum is " << a%9 << endl;
}
