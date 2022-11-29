#include<iostream>
using namespace std;
int main(){
	int a = 0;
	cout << "Enter the year:";
	cin >> a;
	if((a%4 == 0) and (a%100 != 0) or (a%400 == 0))
	cout << "The year is leap year" << endl;
	else
	cout << "The year is not leap year" << endl;
}
