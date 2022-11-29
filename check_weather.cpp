#include<iostream>
using namespace std;
int main(){
	int temp = 25;
	cout << "Enter a Temperature:";
	cin >> temp;
	string res = temp < 25 ? "Cool" : "Hot";
	cout << "The weather is " << res;
}
