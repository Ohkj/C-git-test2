
/*
//문제1A - 최대값 함수
#include <cstdio>
// <algorithm> 헤더를 사용하지 말고 직접 구현해보세요
int get_max(int a, int b)
{
	if(a < b)
		return b;
	else return a;
	
}
int main() {
	int p, q;
	scanf("%d %d", &p, &q);
	int answer = get_max(p, q);
	printf("%d\n", answer);
  return 0;
}
***************/

/*
//문제1B - 배열의 최대값
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
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> v;
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		v.push_back(num);
	}
	sort(v.begin(), v.end());
	cout << v[v.size() - 1];

	return 0;
}
*************/

/*
//문제1C - 카운팅하기
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
using namespace std;
vector<int> v(10000); // 벡터 크기 10000으로 초기화
int main()
{
	int n, m, s;
	int cnt = 0;
	cin >> n >> m >> s;
	for (int i = 0; i < n; i++) {
		scanf("%d", &v[i]);
	}
	for (int i = 0; i < v.size(); i++) {
		if (v[i] == m || v[i] == s)
			cnt++;
	}
	cout << cnt;
	return 0;
}
***********/