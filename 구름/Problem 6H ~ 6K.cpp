
// =================Set, Map 활용=================

/*
//문제6H - 중복 제거하기
#include <iostream>
#include<cstdio>
#include<algorithm>
#include<set>

using namespace std;

int main() {
	int n;
	cin >> n;
	set<int> s;
	for(int i = 0; i < n; i++){
		int num;
		cin >> num;
		if(s.count(num) > 0){
			cout << "DUPLICATED" << endl;	
		}
		else{
			cout << "OK" << endl;	
		}
		s.insert(num);
	}
	
  return 0;
}
*******************/


/*
//문제6I - 정사각형(다시 봐야됨. C++구조체, set)
#include <iostream>
#include<cstdio>
#include<algorithm>
#include<set>
#include<vector>
#include<cmath>
using namespace std;

class pt {
  public:
	int x,y;
	
	bool operator < (const pt & op) const{
		if(x != op.x){
			return x < op.x;	
		}
		else{
			return y < op.y;	
		}
	}
	
	bool operator == (const pt & op) const{
		return (x == op.x) && (y == op.y);	
	}

};

void testcase(){
	int n;
	cin >> n;
	vector<pt> vp; // 점들의 배열
	set<pt> sp;
	for(int i = 0; i < n; i++){
		pt p;
		scanf("%d %d", &p.x, &p.y);
		vp.push_back(p);
		sp.insert(p);
	}
	long long answer = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(i == j) continue;
			pt a = vp[i];
			pt b = vp[j]; // sp에 존재하는 애들 a,b
			int dx = b.x - a.x;
			int dy = b.y - a.y;
			pt c;
			pt d; // 정사각형이 되기 위해 필요한 점
			c.x = a.x + dy;
			c.y = a.y - dx;
			
			d.x = b.x + dy;
			d.y = b.y - dx; 
			
			if(sp.count(c) > 0 && sp.count(d) > 0){
				//c,d가 ps에 존재 : a-b-c-d 정사각형 이루어짐
				long long dist = dx*dx + dy*dy; // 거리제곱
				long long area = dist*dist; // 넓이제곱
				if(answer < area){
						answer = area;
				}
			}
		}
	}
	printf("%.2f\n", sqrt(answer));
	//cout << double(sqrt(answer)) << endl;
	
}

int main() {
	int tc;
	cin >> tc;
	for(int i = 0; i < tc; i++){
		testcase();	
	}

  return 0;
}
**********************/