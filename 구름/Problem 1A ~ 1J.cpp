
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

/*
//문제1D - 합 구하기1
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
vector<int> v(10000);
int main()
{
	int n;
	int sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		sum += num;
	}
	cout << sum << '\n';
	return 0;
}
*****************/

/*
//문제1E - 합 구하기2
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
vector<int> v(10000);
int main()
{
	int n, p, q;
	int cnt = 0;
	int sum = 0;
	vector<int> v;
	cin >> n >> p >> q;
	for (int i = 0; i < n; i++) {
		int weight;
		cin >> weight;
		v.push_back(weight);
	}
	for (int i = 0; i < v.size(); i++) {
		if (v[i] <= p) {
			cnt++;
			sum += v[i];
		}
	}
	if (sum <= q) {
		cout << cnt << ' ' << sum << '\n';
		cout << "YES";
	}
	if (sum > q) {
		cout << cnt << ' ' << sum << '\n';
		cout << "NO";
	}


	return 0;
}
**************/

/*
//문제1F - 탐색하기1 !!!!!!!!!!!!!!! 구름에서 auto it = find(v.begin(), v.end(), m) // if(it == v.end()) // 적용안됨
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

int main()
{
	int n, m;
	int index = -1;
	vector<int> v;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		v.push_back(num);
	}
	for (int i = 0; i < v.size(); i++) {
		if(v[i] == m){
			index = i;	
		}
	}
	cout << index << '\n';
	return 0;
}
********************/

/*
//문제1G - 탐색하기2
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

int main()
{
	int n;
	int tmp, last, first;
	cin >> n;
	vector<string> v;
	vector<int> s;
	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;
		v.push_back(str);
	}
	for (int i = 0; i < v.size(); i++) {
		if (v[i] == "AJOU") {
			s.push_back(i);
		}
	}
		cout << s[0] + 1 << ' ' << s[s.size() - 1] + 1;
	
	return 0;
	첫번째, 마지막 인덱스로 접근해서 풀 경우 ->
	first = -1;
	last = -1;
	for(int i = 0; i < n; i++){
	if(first == -1){ // if문으로 first가 -1 조건을 걸면 첫번째 인덱스일 경우만 바뀌고 그 다음 나오는 AJOU의 인덱스는 반영X
		first = i;
	}
		last = i;
	}

}
***********/

/*
//문제1H - 탐색하기3
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

int main()
{
	int n;
	double sum = 0.0;
	vector<int> v;
	vector<int> v2;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		v.push_back(num);
	}
	for (int i = 0; i < v.size(); i++) {
		sum += v[i];
	}
	double avg = (double)(sum / n);
	int m = 300000;
	int index = -1;
	int result;
	double answer;
	for (int i = 0; i < v.size(); i++) {
		answer = fabs(avg - v[i]); // VS에서는 abs로 해도 double형 계산됨. 구름에서는 fabs() 사용 -> 실수형 절대값
		if (m > answer) {
			m = answer;
			index = i;
			result = v[i];
		}
	}
	cout << index + 1 << ' ' << result;
	
	return 0;
}
*************/

/*
//문제1I = 선택정렬
#include <cstdio>
#include<iostream>
using namespace std;

const int MAX_N = 1000;
void selection_sort(int data[], int n)
{
	int min;
	//이 곳에 정렬 함수를 작성한다
	for(int i = 0; i < n; i++)
	{
			min = i;
		for(int j = i; j < n; j++){
			if(data[min] > data[j])
				min = j; // 주의
		}
		int tmp = data[i];
		data[i] = data[min];
		data[min] = tmp;
	}
}

int main() {
	int n;
	int data[MAX_N];
	scanf("%d", &n);
	for(int i = 0 ; i < n ; i++)
	{
		scanf("%d", &data[i]);
	}
	selection_sort(data, n);
	for(int i = 0 ; i < n ; i++)
	{
		if( i > 0)
		{	//첫 번째 원소가 아니라면 앞에 공백을 하나 출력한다 
			printf(" ");
		}
		printf("%d",data[i]);
	}
  return 0;
}
**********************/

/*
//문제1J - 합 구하기3
#include <cstdio>
#include<iostream>
#include<vector>
using namespace std;

int main() {

	int n, tmp;
	int sum = 0;
	int result = 0;
	cin >> n;
	vector<int> v;
	for(int i = 1; i <= n; i++){
		sum += i;
		v.push_back(sum);
	}

	for(int i = 0; i < v.size(); i++){
			result += v[i];
	}
	cout << result;
  return 0;
}
***********/

/*
//문제1J - 합 구하기3 // 방법2
#include <cstdio>
#include<iostream>
#include<vector>
using namespace std;

int main() {

	int n, tmp;
	int sum = 0;
	int result = 0;
	cin >> n;
	vector<int> v;
	for(int i = 1; i <= n; i++){ // 안쪽 반복문에서 나온 subsum 값을 전체 반복(피라미드 구조에서 각 층)
		int subsum = 0;

		for(int j = 1; j <= i; j++){
			subsum += j;  // 각 숫자까지 합을 저장하고
		}
		result = result + subsum;
	}

	cout << result;
  return 0;
}
*****************/