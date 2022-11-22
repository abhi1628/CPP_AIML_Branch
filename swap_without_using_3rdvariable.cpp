/*WAP to swap two numbers
without using third variable*/
#include<iostream>
using namespace std;
int main(){
	int a = 5, b = 6;
	cout << "The original values are a = " << a
	<< " and b = " << b << endl;
	a = (a*b)/(b = a);
	cout << "The swapped values are a = " << a
	<< " and b = " << b;
}
