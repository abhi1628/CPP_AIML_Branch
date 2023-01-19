#include<iostream>
using namespace std;
int main(){
	int a[] = {95,85,75,100,88};
	int sum = 0;
	for (int i = 0; i < 5; i++)
		sum = sum + a[i];
	cout << "\nThe total is:" << sum;
}
