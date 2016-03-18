#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(int argc, char const *argv[]){
	//a : k[0], b : k[1], c : k[2], d : k[3], e : k[4], f : k[5]
	float k[6];
	while(cin >> k[0]){
		for (int i = 1; i < 6; ++i){
			cin >> k[i];
		}
		//(k[0]*k[4] - k[1]*k[3])は0にはならない
		float x = (k[2]*k[4] - k[1]*k[5]) / (k[0]*k[4] - k[1]*k[3]);
		float y;
		if(k[1] != 0){
			y = (k[2] - k[0]*x) / k[1];
		} else if (k[4] != 0) {
			y = (k[5] - k[3]*x) / k[4];
		} else {
			y = (k[2]*k[3] - k[0]*k[5]) / (k[1]*k[3] - k[0]*k[4]);
		}
		//-0.00を回避する
		x = floor(x * 1000 + 0.5) * 0.001;
		y = floor(y * 1000 + 0.5) * 0.001;
		cout << fixed << setprecision(3) << x << ' ' << y << endl;
	}
	return 0;
}