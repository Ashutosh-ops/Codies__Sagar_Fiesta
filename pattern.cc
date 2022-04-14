#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int num=0;
	cin >>num;
	int num3,num2 = num;
	int num4 = num;
	num3 = num-2;
	

	while(num2--){
		cout << "* ";
	}
	cout << endl;
	short k = 65;
	while(num3--){
		cout << "*";
		int inloop = num-2;
		while(inloop--){
			cout << " " << (char)k ;
			k++;
		}
		cout << " *" << endl;
	}
	// cout << endl;
	while(num4--){
		cout << "* ";
	}

	return 0;
}