#include <iostream>
using namespace std;
int main(int argc, char **argv){
	int a, b;
	cin >> a >> b;
	cout << ((a == b)? "a == b" :(a < b)? "a < b" :"a > b") << endl;
	return 0;
}
