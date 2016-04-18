#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]){
	string str;
	cin >> str;
	for (int i = 0; i < str.length(); ++i){
		cout << str[str.length() - i - 1] << flush;
	}
	cout << endl;
	return 0;
}