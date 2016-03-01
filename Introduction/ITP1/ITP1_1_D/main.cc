#include <iostream>
using namespace std;
int main(int argc, char const *argv[]){
	unsigned int s;
	cin >> s;
	cout << s/3600<<':'<< (s%3600)/60 <<':'<< s%60 << endl;
	return 0;
}