
/*
// 2741 N찍기
#pragma warning(disable:4996)
#include<cstdio>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		printf("%d\n", i); // printf가 cout보다 빠르고 '\n'이 endl 보다 빠름
	}

	return 0;
}
***************/

/*
// 2555 생일출력하기
#pragma warning(disable:4996)
#include<cstdio>
#include<algorithm>
#include<string>
#include<iostream>
using namespace std;

int main()
{
	auto print = [] {
		cout << "3 / 16" << '\n';
	};
	print();

	return 0;
}
*****************/

/*
// 10870 피보나치수 5
#pragma warning(disable:4996)
#include<cstdio>
#include<algorithm>
#include<string>
#include<iostream>
using namespace std;
int f(int n);
int main()
{
	int n;
	scanf("%d", &n);
	cout << f(n);

	return 0;
}
int f(int n) {
	if (n <= 1) return n;

	else
		return f(n - 1) + f(n - 2);
}
**************/

/*
// 10870 피보나치수 5 변형(10번째 피보나치 수 다 보이게 출력)
#pragma warning(disable:4996)
#include<cstdio>
#include<algorithm>
#include<string>
#include<iostream>
using namespace std;
int f(int n);
int main()
{
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
		cout << f(i) << ' '; // 0 1 1 2 3 5 ...

	return 0;
}
int f(int n) {
	if (n <= 1) return n;

	else {
		return f(n - 1) + f(n - 2);
	}
}
*****************/


/*
// 10871 x보다 작은수
#pragma warning(disable:4996)
#include<cstdio>
#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;

int main()
{
	int n, x, t;
	int arr[1000];
	scanf("%d %d", &x, &n);
	for (int i = 0; i < x; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < x; i++) {
		if (arr[i] < n)
			printf("%d ", arr[i]);
	}

	return 0;
}
*****************/


// 10869 사칙연산
#pragma warning(disable:4996)
#include<cstdio>
#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d\n", a + b);
	printf("%d\n", a - b);
	printf("%d\n", a * b);
	printf("%d\n", a / b);
	printf("%d\n", a % b);

	return 0;
}


