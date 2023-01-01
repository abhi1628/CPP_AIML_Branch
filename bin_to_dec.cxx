#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int temp = 0, bin_num, dec_num = 0, rem = 0;  
	cout << "Enter a binary number:";
    cin >> bin_num;
    temp = bin_num;
    for (int i = 0; bin_num != 0; ++i){  
        rem = bin_num % 10;  
        bin_num = bin_num / 10;  
        dec_num = dec_num + (rem) * ( pow (2, i));  
    }  
    cout<<"Decimal equivalent of binary number " << temp << " is " << dec_num;
}