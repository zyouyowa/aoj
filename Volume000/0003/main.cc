#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
	int n;
	cin >> n;
	while(n--){
		int a,b,c;
		cin >> a >> b >> c;
		a *= a; b *= b; c *= c;
		if(a == b + c | b == c + a | c == b + a)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}