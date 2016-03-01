#include <iostream>
#include <map>
#include <string>
#include <vector>

#define BIAS 1000000
#define SALES_NUM_MAX 4000

using namespace std;

int main(int argc, char const *argv[]){
	int n, counter;
	cin >> n;
	while(n != 0){;
		counter = 0;
		//何番目に入力が初めてきた社員が誰かを保持
		int m[SALES_NUM_MAX];
		for (int i = 0; i < SALES_NUM_MAX; ++i){
			m[i] = -1;
		}
		unsigned long long int sales[SALES_NUM_MAX] = {0};
		for (int i = 0; i < n; ++i){
			int temp;
			unsigned long long int price, product_num;
			cin >> temp >> price >> product_num;
			if(m[counter] < 0){
				m[counter] = temp;
				counter++;
			}
			sales[temp] += price * product_num;
		}
		bool NA_flag = true;
		for (int i = 0; i < counter; ++i){
			if (sales[m[i]] >= BIAS){
				sales[m[i]] = 0;
				NA_flag = false;
				cout << m[i] << endl;
			}
		}
		if(NA_flag) cout << "NA" << endl;
		cin >> n;
	}
	return 0;
}