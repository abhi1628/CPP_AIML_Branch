#include<iostream>
using namespace std;
int main(){
	int a = 0;
	cout << "Enter a number:";
	cin >> a;
	int res = (a%9 == 0) ? 9 : a%9;
	cout << "The sum is " << res << endl;
}
