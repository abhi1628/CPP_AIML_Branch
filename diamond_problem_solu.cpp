#include<iostream>
using namespace std;
// Base Class 1
class A{
	public:
		int a;
		void f1(){
			cout << "Base Class" << endl;
		}
};
// Single Inheritance
class B:virtual public A{
	public:
		int b;
		void f2(){
			cout << "Child Class 1" << endl;
		}
};
// Single Inheritance
class C:virtual public A{
	public:
		int c;
		void f3(){
			cout << "Child Class 2" << endl;
		}
};
// Diamond Problem
class D:public B, public C{
	public:
		int d;
		void f4(){
			cout << "Child Class 3" << endl;
		}
};

int main(){
	A obj1;
	cout << sizeof(obj1) << endl;
	B obj2;
	cout << sizeof(obj2) << endl;
	C obj3;
	cout << sizeof(obj3) << endl;
	D obj4;
	cout << sizeof(obj4) << endl;
	obj4.f2();
	obj4.f3();
	obj4.f4();
	obj4.f1();
}
