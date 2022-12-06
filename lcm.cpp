#include<iostream>
using namespace std;
int main(){
	int a, b, greater, lcm_is = 0;
	cout << "Enter 1st no.:";
	cin >> a;
	cout << "Enter 2nd no.:";
	cin >> b;
	if (a > b)
		greater = a;
	else
		greater = b;
	while (true){
		if ((greater % a == 0)and
		(greater % b == 0)){
			lcm_is = greater;
		break;
		}
	greater = greater + 1;
	}
	cout << "The LCM is:" << lcm_is;
}
