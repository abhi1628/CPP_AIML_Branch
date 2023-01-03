// 1st OOPs program without any method
// ---------------------------------------------------------------
# include <iostream>
using namespace std;
class Person{
	public:
		int id;
		string name;
		string fav_prog_lang;
};
int main(){
	Person p1, p2;
	p1.id = 1;
	p1.name = "Zohaib";
	p1.fav_prog_lang = "Java";
	p2.id = 2;
	p2.name = "Abhishek";
	p2.fav_prog_lang = "Python";
	cout << p1.id << endl;
	cout << p1.name << endl;
	cout << p1.fav_prog_lang << endl;
	cout << p2.id << endl;
	cout << p2.name << endl;
	cout << p2.fav_prog_lang << endl;
}