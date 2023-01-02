#include<iostream>
using namespace std;
int main(){
	int n, temp = 0, i = 0, j = 0, bin_num[100];
	cout <<"Enter a decimal no:";
	cin >> n;
	temp = n;
	while (n > 0){
		bin_num[i] = n%2;
		n = n/2;
		i++;
		}
	cout << "The binary equivalent of " << temp << " is ";
	for (j = i - 1; j >= 0; j--)
		cout << bin_num[j];
}