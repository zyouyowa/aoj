#include <iostream>
using namespace std;
int main(int argc, char const *argv[]){
	int n;
	long int price = 100000;
	cin >> n;
	for (int i = 0; i < n; ++i){
		price *= 1.05;
		price += (price % 1000)? 1000 : 0;
		price -= price % 1000;
	}
	cout << price << endl;
	return 0;
}