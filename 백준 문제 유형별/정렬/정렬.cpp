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
		n -= 3;
		num3++;
	}
	if (n < 0) {
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
/*http://jeonggyun.tistory.com/19 참고*/