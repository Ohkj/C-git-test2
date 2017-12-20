
/*
// 11816 8진수 10진수 16진수
#pragma warning(disable:4996)
#include<stdio.h>
#include<algorithm>

using namespace std;

int main()
{
	int n;
	scanf("%i", &n); // i로 입력하면 8, 10, 16 진수로 알아서 출력
	printf("%d", n);

	return 0;
}

********************/

/*
// 10951 A+B-4
#pragma warning(disable:4996)
#include<stdio.h>
#include<algorithm>

using namespace std;

int main()
{
	int x, y;
	while (scanf("%d %d", &x, &y) != EOF) { // EOF : 파일 끝까지 입력(테스트 케이스 개수 없는 경우)
		printf("%d\n", x + y);
	}
	
	return 0;
}

********************/

/*
// 10953 A+B-6 추가로 풀어본 문제
#pragma warning(disable:4996)
#include<stdio.h>
#include<algorithm>

using namespace std;

int main()
{
	int x, y, t;
	char c;
	scanf("%d", &t);
	while (t--) { // 
		scanf("%d %*c %d", &x, &y); // *붙이면 무시하고 입력(저장 안됨)
		printf("%d\n", x + y);
	}
	
	return 0;
}
**********************/


/*
// 11718, 11719 그대로 출력하기,2
#pragma warning(disable:4996)
#include<cstdio>
#include<algorithm>

using namespace std;

int main()
{
	char c;
	while ((c = getchar()) && c != EOF) { // 공백까지 포함하여 파일끝까지 입력
		printf("%c", c);
	}
	
	return 0;
}
*******************/

/*
// 11720 숫자의 합
#pragma warning(disable:4996)
#include<cstdio>
#include<algorithm>

using namespace std;

int main()
{
	int t,n;
	int sum = 0;
	scanf("%d", &t);
	while (t--) { // 5
		scanf("%1d", &n); // 12345 입력하면 1,2,3,4,5 하나씩 끊어서 입력 가능
		sum += n;
	}
	printf("%d", sum);
	
	return 0;
}
*******************/


/*
// 11721 10개씩 끊어서 출력하기
#pragma warning(disable:4996)
#include<cstdio>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
	
	char s[100];
	while (scanf("%10s", s) == 1) {
		printf("%s\n", s);
	}
	
	
	return 0;
}
*********************/

