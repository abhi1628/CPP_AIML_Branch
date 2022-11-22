/*WAP to swap two numbers
using third variable*/
#include<iostream>
using namespace std;
int main(){
	int a = 5, b = 6, empty = 0;
	cout << "The original values are a = " << a
	<< " and b = " << b << endl;
	empty = a;
	a = b;
	b = empty;
	cout << "The swapped values are a = " << a
	<< " and b = " << b;
	
}
