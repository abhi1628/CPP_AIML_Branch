#include<iostream>
using namespace std;
int main(){
	int a, b;
	cout << "Enter 1st no.:";
	cin >> a;
	cout << "Enter 2nd no.:";
	cin >> b;
	int res = (a > b) ? a : b;
	cout << "The greater number is " << res;
}
