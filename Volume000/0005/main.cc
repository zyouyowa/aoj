#include <iostream>
using namespace std;
using ull = unsigned long long;
ull GCD(ull a, ull b);
ull LCM(ull a, ull b, ull gcd);
int main(int argc, char const *argv[]){
	ull a,b;
	while(cin >> a >> b){
		ull gcd = GCD(a, b);
		cout << gcd << " " << LCM(a, b, gcd) << endl;
	}
	return 0;
}
ull GCD(ull a, ull b){
	while(a != b){
		if(a < b) b -= a;
		else a -= b;
	}
	return a;
}

ull LCM(ull a, ull b, ull gcd){
	return a * b / gcd;
}