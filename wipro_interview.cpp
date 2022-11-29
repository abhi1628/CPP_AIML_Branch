#include<iostream>
using namespace std;
int main(){
	int a, b;
	cout << "Enter 1st no.:";
	cin >> a;
	cout << "Enter 2nd no.:";
	cin >> b;
	while((a and b) > 0){
		cout << a << " x " << b << " = " << a*b << endl;
		a = a - 1;
		b = b - 1;
	}	
}
