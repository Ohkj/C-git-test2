

/*
//문제4A - 스도쿠보드!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
#include<cstdio>
#include<algorithm>
#include<vector>
#include<iostream>
#include<map>
#include<set>
#include<queue>
#include<string>
#include<string.h> 
#include<functional>
#include<cmath>
using namespace std;

void testcase(){
	int num;
		cin >> num;
	num--; // 인덱스를 0부터 시작
	int r = (num)/9 +1;
	int c = (num)%9 +1;
	
	//그룹 번호 /3 할 때 버림 발생. r-1 해서 0부터 시작
	int g = ((r-1)/3)*3 +1 + ((c-1)/3)*1; 
	// 첫번째 3이 한그룹에 3개씩 있음을 뜻함(/3). 두번째 3이 그룹의 번호가 세로로 1,4,7 3씩 증가하므로 *3. +1해서 
	// 0부터 시작한 번호 원상복구. *1은 그룹 번호가 가로로는 1,2,3처럼 1씩 증가.
	
	cout << r << ' ' << c << ' ' << g << '\n';
}

int main() {
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		cout << "Case #" << i+1 << ":" << '\n';
		testcase();
	}
	
  return 0;
}
********************/

/*
//문제4B - Probing
#include<cstdio>
#include<algorithm>
#include<vector>
#include<iostream>
#include<queue>
#include<string>
#include<string.h> 
#include<functional>
#include<cmath>
using namespace std;

int main() {
	int n,m;
	cin >> n >> m;
	vector<int> v(n);
	for(int i = 0; i < v.size(); i++){
		v[i] = -1;	
	}
	
	for(int i = 0; i < m; i++){
		int num;
		cin >> num;
		//v.push_back(num);
		int p = num % n; // 나머지 연산 활용
		while(v[p] != -1) // -1이라는 말은 빈칸이 있다는 것.
		{
			p = (p+1)%n; // p를 하나 늘려서 다시 n으로 나눔
		}
		v[p] = p;
		cout << p << '\n';
	}
	
	
  return 0;
}
***********************/


/*
//문제4C - 최대공약수와 최소공배수(유클리드 호제법) 모범 답안도 테스트케이스 하나 에러
#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int get_gcd(int a, int b) {
	int c = a % b;
	while (c != 0)
	{
		a = b;
		b = c;
		c = a % b;
	}
	return b;

}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "Case #" << i + 1 << ":" << '\n';
		int a, b;
		cin >> a >> b;
		int gcd = get_gcd(a,b);
		int lcm = (a * b) / gcd;
		
		cout << gcd << ' ' << lcm << '\n';
	}
	
	return 0;
}
**************/


/*
//문제4D - 수열의 순환(영상, 답안 에러남)
#include<cstdio>
#include<algorithm>
#include<vector>
#include<iostream>
#include<queue>
#include<string>
#include<string.h> 
#include<functional>
#include<cmath>
using namespace std;


int get_gcd(int a, int b) {
	int c = a % b;
	while (c != 0)
	{
		a = b;
		b = c;
		c = a % b;
	}
	return b;

}

int main() {
	int n;
	cin >> n;
	vector<int> v;
//	int v[11];
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		v.push_back(num);
		//cin >> v[i];
	}
	int gcd = v[0];
	for(int i = 1; i < n; i++){ // 첫 번째를 v[0]으로 했으므로 i=1부터 시작
			gcd = get_gcd(gcd, v[i]); // 이전 gcd와 벡터 값을 비교
	}
	int lcm = 1;
	for(int i = 0; i < n; i++){
		lcm = lcm * v[i];	
	}
	for(int i=1; i < n; i++){
		lcm = lcm / gcd;	
	}
	cout << 1+lcm << '\n';
	
	return 0;
}
*********************/


/*
//문제4E - 소인수 분해
#include<cstdio>
#include<algorithm>
#include<vector>
#include<iostream>
#include<queue>
#include<string>
#include<string.h> 
#include<functional>
#include<cmath>
using namespace std;

vector<int> fact(int n)
{
	vector<int> ret;
	for(long long i = 2; i*i <=n; i++){ // 루트n 까지 체크. i*i 할 때 10억 넘어가므로 long long
		while(n%i == 0){
			ret.push_back((int)i);
			n /= i;
		}
	}
	if(n > 1) // n > 1 조건!!
		ret.push_back(n);
	
	return ret; // 벡터를 반환. 반환하면 벡터에 저장된 값이 하나씩 출력
}

int main() {
	int n;
	cin >> n;
	
	for(int i = 0; i < n; i++){
		int num;
		cin >> num;		
		vector<int> v = fact(num);
		cout << "#" << i+1 << ":" << '\n';
		for(int i = 0; i < v.size(); i++)
			cout << v[i] << ' ';
		
		cout << '\n';
	}
		
  return 0;
}
**************/


/*
//문제4F = 소수 판별(에라토네스의 체)
#include<cstdio>
#include<algorithm>
#include<vector>
#include<iostream>
#include<queue>
#include<string>
#include<string.h> 
#include<functional>
#include<cmath>
using namespace std;
int isprime[1000001]; // 값이 0이면 소수가 아니고 1이면 소수
int main() {
	isprime[1] = 0;
	for(int i=2; i <=1000000; i++){
		isprime[i] = 1;	
	}
	for(int p=2; p <= 1000000; p++){
		if(isprime[p] == 0) continue;
		for(long long m=(long long)p*p; m <= 1000000; m+=p){ // p의 배수들을 전부 소수가 아니라고 체크, p+=m 만큼 건너뜀
			isprime[m] = 0;	
		}
	}
	
	int n;
	cin >> n;
	int cnt = 0;
	for(int i = 0; i < n; i++){
		cout << "Case #" << i+1 << ":" << '\n';
		int l,r;
		cin >> l >> r;
		for(int j=l; j <= r; j++){
			if(isprime[j] == 1){
					cnt++;
			}
		}
		cout << cnt << '\n';
		cnt = 0;
	}
		
  return 0;
}
****************/


/*
//문제4G - 배열흔들기(내코드, VS에서는 잘 돌아감. 구름에서는 에러)
#pragma warning(disable:4996)
#include<cstdio>
#include<algorithm>
#include<vector>
#include<iostream>
#include<map>
#include<set>
#include<queue>
#include<string>
#include<string.h> 
#include<functional>
#include<cmath>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	vector<int> v;
	vector<int> v2;
	for(int i = 0; i < n; i++){
		int data;
		cin >> data;
		v.push_back(data);
		v2.push_back(data);
	}
	for(int i = 0; i < m; i++){
		int num;
		int order;
		cin >> num;
		if(num != 3){
			cin >> order;	
		}
		
		
		if(num == 0){
			cout << v[order] << '\n';	
		}
		else if(num == 1){
			for(int i = 0; i < order; i++)
				rotate(v.begin(), v.begin()+order, v.end());	
		}
		else if(num == 2){
				for(int i = 0; i < order; i++)
				rotate(v.rbegin(), v.rbegin()+order, v.rend());
		}
		else if(num == 3){
			for(int i = 0; i < v2.size(); i++){
					v[i] = v2[i];
			}
		}
	}
	
  return 0;
}
******************/


/*
//문제4H - 카잉달력(영상 코드 이상..ACM)
#include <iostream>

using namespace std;

void testcase()
{
	int n,m,x,y;
	cin >> n >> m >> x >> y; // 10 12 3 9 입력
	int flag = -10;
	int k = 1;
	//int answer = -1;
	
	y=k;
	if(y > m || x > n){
		cout << "-1" << '\n';
		return;
	}
	for(k = y; k <= m*n; k += m){ 
			int nx = (k-1)%n+1; // (13-1)%10+1 = 3
			int ny = (k-1)%m+1; // 예를 들어 13번째 해의 <x,y>에서 y 값: (13-1)%12+1 = 1
			// 13번째 해의 <x,y>값은 <3,1>이 됨
	///	cout << "nx, ny = " << nx << ' ' << ny << '\n';
			if( nx == x && ny == y){
				flag = 1;
				//answer = k;
				break;
			}
	}
	
	
	if(flag == -1){
		cout << "-1" << '\n';
	}
	else{
		cout << k << '\n';	
	}
}

int main() {
	int tc;
	cin >> tc;
	for(int i = 0; i < tc; i++){
		testcase();	
	}
	
  return 0;
}
************/


/*
//문제4I - 골드바흐의 추측!!!!!!!!!!!!!!!!!!!!
#include <iostream>

using namespace std;

int arr[1000001];
void testcase(){
	int num;
	cin >> num;
	int flag = -1;
	int firstnum, secondnum;
	for(int a = 3; a <= num; a++){
			if(arr[a] == 1){ // a가 소수이고
				int b = num - a; // a + b = num에서 b = num - a
				if(arr[b] == 1){ // b도 소수이면
					firstnum = a;
					secondnum = b;
					flag = 1; // 답 확정
					break;
				}
			}
		}
	cout << num << " = " << firstnum << " + " << secondnum << '\n';
}

int main() {
	arr[1] = 0; // 1은 소수 아님
	for(int i = 2; i <= 1000000; i++){
			arr[i] = 1; // 초기화
	}
	for(int i = 2; i*i <= 1000000; i++){ // 에러토네스의 체 활용.
		if(arr[i] == 0) continue;
		for(int j = i*i; j <= 1000000; j+=i)
			arr[j] = 0;
	}
	
	int tc;
	cin >> tc;
	for(int i = 0; i < tc; i++){		
		cout << "Case #" << i+1 << ":" << '\n';
		testcase();
	}
  return 0;
}
*****************/


/*
//문제4J - 공약수 게임
#include <iostream>
#include<vector>
using namespace std;

int cnt[1000001];
vector<int> fact(int n)
{
	vector<int> ret;
	for(long long d = 2; d*d <= n; d++){
		while(n % d == 0)
		{			
			ret.push_back(d);
			n /= d;
		}
	}
	if(n > 1){
		ret.push_back(n);
	}
	return ret;
}

int main() {
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		int num;
		cin >> num;
		vector<int> v = fact(num);
		for(int j = 0; j < v.size(); j++){
			int p = v[j];
			cnt[p]++;
		}
	}
		int answer = 1;
		for(int p = 1; p<=1000000; p++){
			if(cnt[p] == 0) continue;
			int 	result = cnt[p] / n;
			for(int i = 0; i < result; i++){
					answer = answer * p;
			}
		}
		cout << answer << '\n';
	
  return 0;
}
****************/