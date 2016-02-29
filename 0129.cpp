#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

class Vector2{
public:
	float x;
	float y;
	Vector2():x(0),y(0){}
	Vector2(float x_, float y_):x(x_),y(y_){}
	Vector2(const Vector2 &vec):x(vec.x),y(vec.y){}
	~Vector2(){}
	static float Dot(Vector2 a, Vector2 b){
		return a.x * b.x + a.y * b.y;
	}
	float Length(){
		return sqrtf(x*x + y*y);
	}
	Vector2 operator+(Vector2 a){
		Vector2 v(x + a.x, y + a.y);
		return v;
	}
	Vector2 operator-(Vector2 a){
		Vector2 v(x - a.x, y - a.y);
		return v;
	}
	Vector2 operator/(float a){
		Vector2 v(x/a, y/a);
		return v;
	}
};

int main(int argc, char const *argv[]){
	unsigned int n,m;
	cin >> n;
	while(n != 0){
		vector<Vector2> w(n);
		vector<unsigned int> r(n);
		for (unsigned int i = 0; i < n; ++i){
			cin >> w.at(i).x >> w.at(i).y >> r.at(i);
		}
		cin >> m;
		vector<Vector2> t(m),s(m);
		for (unsigned int j = 0; j < m; ++j){
			cin >> t.at(j).x >> t.at(j).y >> s.at(j).x >> s.at(j).y;
		}
		for (unsigned int j = 0; j < m; ++j){
			bool flag = true;
			for (unsigned int i = 0; i < n; ++i){
				//rayの方向ベクトル
				Vector2 v = t.at(j) - s.at(j);
				//壁の中心を原点に移動して考える
				Vector2 s_ = s.at(j) - w.at(i);
				float dot_ts = Vector2::Dot(v/v.Length(), s_);
				float dot_ss = Vector2::Dot(s_, s_);
				float val = dot_ts * dot_ts - dot_ss + r.at(i) * r.at(i);//
				float val_sq = sqrtf(val);
				float k1 = -dot_ts + val_sq;
				float k2 = -dot_ts - val_sq;
				bool k_flag = val >= 0 && k1 >= 0 && k2 >= 0 && v.Length() >= s_.Length();	//衝突してれば正

				Vector2 a = w.at(i) - s.at(j);
				Vector2 b = w.at(i) - t.at(j);
				float la = a.Length();
				float lb = b.Length();
				bool a_flag = la <= r.at(i) && lb >= r.at(i);
				bool b_flag = la >= r.at(i) && lb <= r.at(i);
				if(k_flag || a_flag || b_flag){
					flag = false;
					break;
				}
			}
			cout << ((flag)? "Danger" : "Safe") << endl;
		}
		cin >> n;
	}
	return 0;
}