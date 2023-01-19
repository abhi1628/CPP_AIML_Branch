#include<iostream>
using namespace std;
int main(){
	int a[5];
	int sum = 0;
	cout << "Enter marks of 5 subjects:\n";
	for(int i = 0; i < 5; i++)
		cin >> a[i];
	cout << "The numbers are:";
	for (int j = 0; j < 5; j++){
		cout << a[j] << " ";
		sum += a[j];
	}	
	cout << "\nThe total is:" << sum;
}
