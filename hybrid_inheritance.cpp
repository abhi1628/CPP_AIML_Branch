#include<iostream>
using namespace std;
// Base Class 1
class X{
	public:
		int x;
};
// Base Class 2
class A{
	public:
		int a;
};
// Single Inheritance
class B:public A{
	public:
		int b;
};
// Multiple Inheritance
class C:public A, public X{
	public:
		int c;
};
// Multilevel Inheritance
class D:public B{
	public:
		int d;
};
// Hierarichal Inheritance
class E:public A{
	public:
		int e;
};
int main(){
	X obj0;
	cout << sizeof(obj0) << endl;
	A obj1;
	cout << sizeof(obj1) << endl;
	B obj2;
	cout << sizeof(obj2) << endl;
	C obj3;
	cout << sizeof(obj3) << endl;
	D obj4;
	cout << sizeof(obj4) << endl;
	E obj5;	
	cout << sizeof(obj5) << endl;
}









