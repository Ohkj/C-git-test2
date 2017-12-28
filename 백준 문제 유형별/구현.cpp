
/*
//1924 2007년!
#pragma warning(disable:4996)
#include<cstdio>
#include<algorithm>
#include<vector>
#include<iostream>
#include<map>
#include<set>
#include<queue>
#include<string>
#include<functional>
using namespace std;

int main()
{
	int x, y;
	int cnt = 0;
	cin >> x >> y;
	vector<int> v = {31,28,31,30,31,30,31,31,30,31,30,31}; // 월 별로 끝나는 날짜 저장
	for (int i = 1; i < x; i++) {
		cnt += v[i-1]; // 3월이면 31+28(1월,2월) 더하고
	}
	cnt += y; // 2월3일 이면 1월달 총 31 + 3일 = 34

	if (cnt % 7 == 0) { // 이전까지 월 끝나는 숫자 총합 + y로 입력한 것을 7로 나눴을 때
		cout << "SUN" << '\n';
	}
	else if (cnt % 7 == 1) {
		cout << "MON" << '\n';
	}
	else if (cnt % 7 == 2) {
		cout << "TUE" << '\n';
	}
	else if (cnt % 7 == 3) {
		cout << "WED" << '\n';
	}
	else if (cnt % 7 == 4) {
		cout << "THU" << '\n';
	}
	else if (cnt % 7 == 5) {
		cout << "FRI" << '\n';
	}
	else if (cnt % 7 == 6) {
		cout << "SAT" << '\n';
	}

	return 0;
}
********************/

/*
//10871 x보다 작은 수
#pragma warning(disable:4996)
#include<cstdio>
#include<algorithm>
#include<vector>
#include<iostream>
#include<map>
#include<set>
#include<queue>
#include<string>
#include<functional>
using namespace std;

int main()
{
	int n, x;
	cin >> n >> x;
	vector<int> v;
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		v.push_back(num);
	}
	for (int i = 0; i < v.size(); i++) {
		if (x > v[i])
			cout << v[i] << ' ';
		else
			continue;
	}
	cout << '\n';

	return 0;
}
*******************/

/*
//2839 설탕배달(블로그 참고)
#pragma warning(disable:4996)
#include<cstdio>
#include<algorithm>
#include<vector>
#include<iostream>
#include<map>
#include<set>
#include<queue>
#include<string>
#include<functional>
using namespace std;
void sugar(int n, int num3, int num5) {
	while (n % 5 != 0 && n >= 0) { // 19됨(3kg 3개 + 5kg 2개)
		n -= 3; // 5 배수 될 때까지 3씩 뺌
		num3++;
	}
	if (n < 0) { // 음수면 만들 수 없는 경우
		cout << "-1" << '\n';
	}
	else
	{
		num5 = n / 5;
		cout << num3 + num5 << '\n';
	}
}
int main()
{
	int n;
	int num3 = 0;
	int num5 = 0;
	cin >> n;
	sugar(n, num3, num5);
	
	return 0;
}

**************/