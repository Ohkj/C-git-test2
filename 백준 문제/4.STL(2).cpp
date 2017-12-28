/*
// 10867 중복빼고 정렬하기 set 활용
#pragma warning(disable:4996)
#include<cstdio>
#include<algorithm>
#include<vector>
#include<iostream>
#include<set>
#include<string>
#include<functional>
using namespace std;

int main()
{
	set<int> s;
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		s.insert(x);
	}

	for (int a : s) { // set은 자동 정렬
		cout << a << ' ';
	}

	return 0;
}
**********************/

/*
// 10867 중복빼고 정렬하기 vector + unique 활용
#pragma warning(disable:4996)
#include<cstdio>
#include<algorithm>
#include<vector>
#include<iostream>
#include<map>
#include<set>
#include<queue>
#include<list>
#include<string>
#include<functional>
using namespace std;

int main()
{
	vector<int> s;
	int n, num;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num;
		s.push_back(num);
	}
	sort(s.begin(), s.end()); // vector 오름차순 정렬하고
	s.erase(unique(s.begin(), s.end()), s.end()); //unique, erase 사용법 주의

	for (int i = 0; i < s.size(); i++)
		cout << s[i] << ' ';
	
	return 0;
}
*******************************/

/*
// 10815  숫자카드
#pragma warning(disable:4996)
#include<cstdio>
#include<algorithm>
#include<vector>
#include<iostream>
#include<set>
#include<string>
#include<functional>
using namespace std;

int main()
{
	set<int> s;
	int n,m;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int num1;
		scanf("%d", &num1);
		s.insert(num1);
	}
	scanf("%d", &m);
	for (int i = 0; i < m; i++) {
		int num2;
		scanf("%d", &num2);
		cout << s.count(num2) << ' ';
	}

	return 0;
}

*******************/

/*
// 10816  숫자카드2(****************시간초과(컴파일 결과는 맞음)*************)
#pragma warning(disable:4996)
#include<cstdio>
#include<algorithm>
#include<vector>
#include<iostream>
#include<set>
#include<string>
#include<functional>
using namespace std;

int main()
{
	multiset<int> s;
	int n,m;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int num1;
		scanf("%d", &num1);
		s.insert(num1);
	}
	scanf("%d", &m);
	for (int i = 0; i < m; i++) {
		int num2;
		scanf("%d", &num2);
		printf("%d ", s.count(num2));
	}

	return 0;
}
*******************/


/*
// 1076 저항
#pragma warning(disable:4996)
#include<cstdio>
#include<algorithm>
#include<vector>
#include<iostream>
#include<set>
#include<map>
#include<string>
#include<functional>
using namespace std;

int main()
{
	//map<키, 값> 형태로 들어감
	map<string, int> m = { {"black", 0},{ "brown", 1 },{ "red", 2 },
	{ "orange", 3 },{ "yellow", 4 },{ "green", 5 },{ "blue", 6 },{ "violet", 7 },{ "grey", 8 },{ "white", 9 } };
	
	string a, b, c;
	cin >> a >> b >> c; // yello violet red
	long long ans = (m[a] * 10) + m[b]; // m[a] = 4, m[b] = 7
	for (int i = 0; i < m[c]; i++) {
		ans = ans * 10; // 곱 부분이 10씩 곱해짐
	}
	printf("%lld\n", ans);

	return 0;
}
********************/

/*
// 10828 스택
#pragma warning(disable:4996)
#include<cstdio>
#include<algorithm>
#include<vector>
#include<iostream>
#include<set>
#include<map>
#include<stack>
#include<string>
#include<functional>
using namespace std;

int main()
{
	stack<int> st;
	string str;
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		cin >> str;
		if (str == "push") {
			int x;
			cin >> x;
			st.push(x);
		}

		else if (str == "pop") {
			if (st.empty()) {
				cout << "-1" << '\n';
			}
			else {
				cout << st.top() << '\n';
			}
			if(!st.empty()) // pop할 때 조건 주의
				st.pop();
		}

		else if (str == "size") {
			cout << st.size() << '\n';
		}

		else if (str == "empty") {
			cout << st.empty() << '\n';
		}

		else if (str == "top") {
			if (st.empty()) {
				cout << "-1" << '\n';
			}
			else {
				cout << st.top() << '\n';
			}
		}
	}

	return 0;
}
****************/

/*
// 1158 조세퍼스 문제
#pragma warning(disable:4996)
#include<cstdio>
#include<algorithm>
#include<vector>
#include<iostream>
#include<set>
#include<list>
#include<queue>
#include<string>
#include<functional>
using namespace std;

int main()
{
	queue<int> q;
	int n, m;
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i++) {
		q.push(i);
	}
	cout << '<';
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < m - 1; j++) { // j 시작, 끝 인덱스 주의
			q.push(q.front()); // 1 2 3 4 5 6 7에서 front 2개를 7뒤에 다시 push
			q.pop(); // 기존 front 값(1,2) 삭제
		}
		cout << q.front(); // 1,2가 7 뒤로 push 되고 1,2가 pop 되었으므로 현재 front는 3
		q.pop(); // 출력하면 해당 값 삭제(pop)
		if (i != n) // 끝까지 다 체크하지 않았다면
			cout << ", "; // ,출력

	}
	cout << '>';

	return 0;
}

**********************/

/*
// 1927 최소힙
#pragma warning(disable:4996)
#include<cstdio>
#include<algorithm>
#include<vector>
#include<iostream>
#include<set>
#include<list>
#include<queue>
#include<string>
#include<functional>
using namespace std;

int main()
{
	priority_queue<int, vector<int>, greater<int>> pq; // 우선순위큐 작은순서 정렬 형식 확인!!!
	int n;

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		if(x > 0) // 자연수이면 push
			pq.push(x);

		else if (x == 0) { // x = 0일 때만 실행하므로 0 개수만큼 출력 됨. 0 카운트 변수 필요 X
			if (pq.empty())
				cout << "0" << '\n';
			
			if (!pq.empty()) { // 큐가 공백이 아니면
				cout << pq.top() << '\n';
				pq.pop();
			}
		}
	
	}

	return 0;
}

**************************/

/*
// 12813 이진수 연산
#pragma warning(disable:4996)
#include<cstdio>
#include<algorithm>
#include<vector>
#include<iostream>
#include<bitset>
#include<list>
#include<queue>
#include<string>
#include<functional>
using namespace std;

int main()
{
	string s1, s2;
	cin >> s1 >> s2;
	bitset<100000> a(s1), b(s2); // 100000=이진수 길이, bitset 사용법 숙지

	cout << (a & b) << '\n';
	cout << (a | b) << '\n';
	cout << (a ^ b) << '\n';
	cout << (~ a) << '\n';
	cout << (~ b) << '\n';
	return 0;
}
************************/


/*
// 1181 단어정렬(***********추가 문제******iterator 활용*****)
#pragma warning(disable:4996)
#include<cstdio>
#include<algorithm>
#include<vector>
#include<iostream>
#include<bitset>
#include<map>
#include<set>
#include<queue>
#include<string>
#include<functional>
using namespace std;
bool comp(const string &s1, const string &s2);
int main()
{
	vector<string> v;
	vector<string>::iterator endit; // 없으면 공백 두 줄 들어감
	int n;
	string str;
	scanf("%d", &n);
	while (n--) {
		cin >> str;
		v.push_back(str);
	}
	sort(v.begin(), v.end(), comp);

	end_iter = unique(v.begin(), v.end()); // unique로 중복제거

	for (auto it = v.begin(); it != endit; it++) // it != end 주의
		cout << *it << '\n';

	return 0;
}

bool comp(const string &s1, const string &s2) { // 정렬 기준 함수 주의!!!
	if (s1.size() == s2.size()) // 사이즈 같으면 사전순
		return s1 < s2;

	else
		return s1.size() < s2.size(); // 사이즈 다르면 작은게 앞
}
*************/


// 1181 단어정렬(***********추가 문제******vector + unique 활용*****)
#pragma warning(disable:4996)
#include<cstdio>
#include<algorithm>
#include<vector>
#include<iostream>
#include<map>
#include<set>
#include<queue>
#include<list>
#include<string>
#include<functional>
using namespace std;
bool comp(const string &s1, const string &s2);
int main()
{
	vector<string> v;
	int n;
	string str;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> str;
		v.push_back(str);
	}
	sort(v.begin(), v.end(), comp);
	v.erase(unique(v.begin(), v.end()), v.end()); // vector에서 unique 사용하여 중복 제거
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << '\n';

	return 0;
}
bool comp(const string &s1, const string &s2) {
	if (s1.size() == s2.size()) {
		return s1 < s2;
	}
	else
		return s1.size() < s2.size();
}