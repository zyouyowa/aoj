#include <iostream>

int main(){
	using namespace std;

	uint n;
	uint set[10][10][10][10];
	while(cin >> n){
		for (uint a = 0; a < 10; ++a)
			for (uint b = 0; b < 10; ++b)
				for (uint c = 0; c < 10; ++c)
					for (uint d = 0; d < 10; ++d)
						set[a][b][c][d] = 0;
		for (uint a = 0; a < 10; ++a)
			for (uint b = 0; b < 10; ++b)
				for (uint c = 0; c < 10; ++c)
					for (uint d = 0; d < 10; ++d)
						if(a+b+c+d == n)
							set[a][b][c][d] = 1;
		uint count = 0;
		for (uint a = 0; a < 10; ++a)
			for (uint b = 0; b < 10; ++b)
				for (uint c = 0; c < 10; ++c)
					for (uint d = 0; d < 10; ++d)
						count += static_cast<uint>(set[a][b][c][d]);
		cout << count << endl;
	}
	return 0;
}