#include <iostream>
using namespace std;
using ull = unsigned long long;
ull gcd(ull a, ull b);
ull lcm(ull a, ull b, ull g);
int main(int argc, char const *argv[]){
	ull a,b;
	while(cin >> a >> b){
		ull g = gcd(a, b);
		cout << g << " " << lcm(a, b, g) << endl;
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

ull LCM(ull a, ull b, ull g){
	return a * b / g;
}
