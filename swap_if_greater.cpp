/*WAP to swap two numbers
if 1st no.is greater than 
the second number*/
#include<iostream>
using namespace std;
int main(){
	int a = 8, b = 16;
	cout << "The original values are a = " << a
	<< " and b = " << b << endl;
	if (a > b){
	a = (a*b)/(b = a);
	cout << "The swapped values are a = " << a
	<< " and b = " << b;
	}
	else
	cout << "The unswapped values are a = " << a
	<< " and b = " << b;
}
