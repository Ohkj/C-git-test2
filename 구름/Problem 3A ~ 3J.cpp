
/*
//문제3A - 전화번호!!!!!!!!!!!!!!!!!!!!!!!!!
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
int v[100000];
int table[10000];
int main()
{
	int n;
	int M = 0;
	int num;
	cin >> n;
	//vector<int> v = { 0 };
	for (int i = 0; i < n; i++) {
		//int num;
		//cin >> num;
		scanf("%d", &v[i]);
		num = v[i];
		table[num]++;
	}
	int result = v[0];
	for (int i = 0; i < 10000; i++) {
		int cnt = table[i];
		if (cnt > M) {
			result = i;
			M = cnt;
		}
	}
	printf("%04d\n", result); // printf("%d\n", 123);      // 123
  													// printf("%04d\n", 123);    // 0123 -> 4자리로 0 맞춰서 출력해야 됨.
 														// printf("%08d\n", 123);    // 00000123
//cout << result;
	return 0;
}
******************/

/*
//문제3B - 페인트!!!!!!!!!!!!!!!!!!!!!!!!!!!!
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

//int x[1000];
//int y[1000];

int main() {
	int n, m;
	int left, right, cnum;
	cin >> n >> m;
	vector<int> v(n, 0);
	vector<int> color;
	for (int i = 0; i < m; i++) {
		cin >> left >> right >> cnum;
		fill(v.begin() + (left - 1), v.begin() + right, cnum); // for(int i = left; i <= right; i++) v[i] = cnum;
	}
	for (int i = 0; i < v.size(); i++) {
		int result = count(v.begin(), v.end(), i);
		color.push_back(result);
	}
	int min_color = -1;
	int max_color = -1;
	for (int c = 0; c < color.size(); c++)
	{
		if (color[c] == 0)
		{
			continue;
		}

		if (max_color == -1 || color[c] > color[max_color] ) // -1면 아무색도 못찾은 경우
		{
			max_color = c;
		}
		if (min_color == -1 ||color[c] < color[min_color])
		{
			min_color = c;
		}
	}
	cout << max_color << '\n';
	cout << min_color;

	return 0;
}
****************/

/*
//문제3C - 응모
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
int v[100001];
int main() {
	int n;
	cin >> n;
	//vector<int> v(n,0); // 벡터로 하면 에러...Why?
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		v[num]++;
	}
	bool first = true;
	for (int i = 0; i <= 100000; i++) { // i <= 100000 등호 들어가야 됨..
		if (v[i] != 1) // 카운트가 1인 것만 필요. 0이거나 2이상 된거는 불필요
			continue;

			cout << i << ' ';
	}

	return 0;
}
*******************/

/*
//문제3D - 피보나치
#pragma warning(disable:4996)
#include<cstdio>
#include<algorithm>
#include<iostream>

using namespace std;
int fibo[1000001];
int main() {
	fibo[1] = 0;
	fibo[2] = 1;
	for(int i = 3; i <= 1000000; i++){ // 배열에 미리 피보나치 값을 저장해놓고 불러다가 씀 -> 시간복잡도 빠름
			fibo[i] = (fibo[i-1] + fibo[i-2]) % 100000000;	// 8자리 까지 표시 -> 1억으로 나눈 나머지
	}
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++){
		int num;
		cin >> num;
		int answer = fibo[num];
		cout << answer << '\n';
	}
	
	return 0;
}
******************/

/*
//문제3E - 색종이
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
	
	int tc;
	cin >> tc;
	while (tc--)
	{
		int n, x, y;
		int arr[101][101];
	for(int i = 0; i <= 100; i++){
		for(int j = 0; j <= 100; j++){
				arr[i][j] = 0;	
		}
	}
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> x >> y;
			for (int a = x; a < x + 10; a++) {
				for (int b = y; b < y + 10; b++) {
					arr[a][b] = 1; // 사각형 넓이만큼 1로 바꿈 // 1로 안바뀐 것은 0으로 표시됨
				}
			}
		}
			int cnt = 0;
			for (int i = 0; i <= 100; i++) { // 전체 도화지 영역에 대해서
				for (int j = 0; j <= 100; j++) {
					if (arr[i][j] == 1) // 1로 바뀐 것의 개수를 플러스
						cnt++;
				}
			}
			cout << cnt << '\n';
		cnt = 0;
	}
	return 0;
}
******************/


