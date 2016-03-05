#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	vector<u_int> hight(10);
	for (char i = 0; i < 10; ++i){
		cin >> hight.at(i);
	}
	auto f = [](u_int a, u_int b) -> bool{ return a < b; };
	sort(hight.begin(), hight.end(), f);
	for (char i = 9; i > 6; --i){
		cout << hight.at(i) << endl;
	}
	return 0;
}