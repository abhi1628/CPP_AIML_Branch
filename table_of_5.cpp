#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout << "Enter a no.:";
	cin >> a;
	cout << "Enter last no.:";
	cin >> b;
	for(int i = 1; i <= b; i++){
		cout << a << " x " << i << " = " << a*i << endl;
	}	
}
