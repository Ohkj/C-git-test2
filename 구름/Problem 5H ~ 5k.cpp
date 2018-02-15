

//도형 활용하기(구현)

/*
문제5H - 두 직사각형!!!!!!!!!!!!!!!!!!!!(5H ~ 5K : 기출 관련)

#include <iostream>
#include<algorithm>
using namespace std;

int get_area(int la,int ra,int ba,int ta,int lb,int rb,int bb,int tb){
	int lr,rr,br,tr; // 겹치는 사각형의 좌표
	lr = max(la,lb); // 겹치는 사각형의 왼쪽좌표는 a,b 두개 사각형의 왼쪽좌표중 큰값
	rr = min(ra,rb); // 겹치는 사각형의 오른쪽 좌표는 a,b 두개 사각형의 오른쪽 좌표중 작은값
	br = max(ba,bb);
	tr = min(ta,tb);
	
	if(lr <= rr && br <= tr){
		return (rr-lr) * (tr-br);	
	}
	return 0;
}

void testcase(){
	int ax,ay,bx,by;
	int px,py,qx,qy;
	
	//두 개 사각형의 각 좌표를 설정
	cin >> ax >> ay >> bx >> by >> px >> py >> qx >> qy;
	int la, ra, ba, ta;
	la = min(ax,bx);
	ra = max(ax,bx);
	ba = min(ay,by);
	ta = max(ay,by);
	
	int lb, rb, bb, tb;
	lb = min(px,qx);
	rb = max(px,qx);
	bb = min(py,qy);
	tb = max(py,qy);
	int result = get_area(la,ra,ba,ta,lb,rb,bb,tb);
	
	cout << result;
}


int main() {
	int tc;
	cin >> tc;
	for(int i = 0 ; i < tc; i++){
		testcase();	
	}
	
  return 0;
}

//두 사각형일 경우만 가능
***********************/


/*
//문제 5I - 두 선분
#include <iostream>
#include<algorithm>
using namespace std;

bool check(int la,int ra,int ba,int ta,int lb,int rb,int bb,int tb){
	int lr,rr,br,tr; // 겹치는 사각형의 좌표
	lr = max(la,lb); // 겹치는 사각형의 왼쪽좌표는 a,b 두개 사각형의 왼쪽좌표중 큰값
	rr = min(ra,rb); // 겹치는 사각형의 오른쪽 좌표는 a,b 두개 사각형의 오른쪽 좌표중 작은값
	br = max(ba,bb);
	tr = min(ta,tb);
	
	if(lr <= rr && br <= tr){
		return true; // 선분을 넓이가 0인것으로 봄
	}
	return false;
}

void testcase(){
	int ax,ay,bx,by;
	int px,py,qx,qy;
	
	//두 개 사각형의 각 좌표를 설정
	cin >> ax >> ay >> bx >> by >> px >> py >> qx >> qy;
	int la, ra, ba, ta;
	la = min(ax,bx);
	ra = max(ax,bx);
	ba = min(ay,by);
	ta = max(ay,by);
	
	int lb, rb, bb, tb;
	lb = min(px,qx);
	rb = max(px,qx);
	bb = min(py,qy);
	tb = max(py,qy);
	bool result = check(la,ra,ba,ta,lb,rb,bb,tb);
	
	if(result == true){
		cout << "YES" << endl;	
	}
	else{
		cout << "NO" << endl;	
	}

}
int main() {
	int tc;
	cin >> tc;
	for(int i = 0 ; i < tc; i++){
		testcase();	
	}
	
  return 0;
}
*******************/


