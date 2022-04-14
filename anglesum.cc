#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int num;
	int sum = 0, a = 0;
	cin >> num;
	while(num--){
		cin >> a;
		sum+=a;
	}
	if (sum == 360){
		cout << "Yes";
	}
	else{
		cout << "No";
	}
	return 0;
}