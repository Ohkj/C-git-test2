
/*
//10807 개수세기
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
	vector<int> a;
	int n,v;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		a.push_back(num);
	}
	cin >> v;

	cout << count(a.begin(), a.end(), v);

	return 0;
}
********************/

/*
//10808 알파벳 개수
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
	string str;
	cin >> str;

	for (int i = 'a'; i <= 'z'; i++) {
		cout << count(str.begin(), str.end(), i) << ' ';
	}
	cout << '\n';

	return 0;
}
*******************/

/*
//10810 공 넣기
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
	int n, m;
	int a, b, k;
	scanf("%d %d", &n, &m);
	vector<int> v(n, 0); // n크기만큼 0으로 초기화
	
	for (int i = 0; i < m; i++) {
		cin >> a >> b >> k;
		fill(v.begin() + (a-1), v.begin()+b, k); // fill()로 해당 위치부터 종료지점까지 k로 채움
	}
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << ' ';

	cout << '\n';

	return 0;
}
******************/

/*
//10811 바구니 뒤집기
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
	int n, m;
	int a, b;
	scanf("%d %d", &n, &m);
	vector<int> v; 

	for (int i = 0; i < n; i++)
		v.push_back(i + 1);

	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		reverse(v.begin() + (a-1), v.begin()+b);
	}
	for (int x : v)
		cout << x << ' ';

	cout << '\n';

	return 0;
}
*********************/

/*
//10812 바구니 순서 바꾸기
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
	int n, m;
	int a, b, k;
	scanf("%d %d", &n, &m);
	vector<int> v; 

	for (int i = 0; i < n; i++)
		v.push_back(i + 1); // 1부터 n까지 값으로 초기화

	for (int i = 0; i < m; i++) {
		cin >> a >> b >> k;
		rotate(v.begin() + (a-1), v.begin() + (k-1), v.begin()+b); // (a-1), (k-1) 범위 확인
	}
	for (int x : v)
		cout << x << ' ';

	cout << '\n';

	return 0;
}
********************/

/*
//10813 공바꾸기
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
	int n, m;
	int a, b;
	scanf("%d %d", &n, &m);
	vector<int> v; 

	for (int i = 0; i < n; i++)
		v.push_back(i + 1);

	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		swap(v[a-1], v[b-1]); // 벡터 인덱스에 접근하므로 -1
	}
	for (int x : v)
		cout << x << ' ';

	cout << '\n';

	return 0;
}
****************/

/*
//2750 수 정렬하기
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
	vector<int> v;
	int n, num;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num;
		v.push_back(num);
	}
	sort(v.begin(), v.end());

	for (int x : v)
		cout << x << '\n';

	return 0;
}
****************/

/*
//1181 단어정렬(STL(2)문제랑 동일)
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
	int n;
	string str;
	scanf("%d", &n);
	vector<string> s(n);
	for (int i = 0; i < n; i++) {
		cin >> s[i]; // 벡터 n크기로 초기화 방법. 그냥 push_back 보다 크기 정해질 땐 이 방식
	}
		sort(s.begin(), s.end(), [](string s1, string s2) { // 람다 활용법. comp활용은 STL(2) 파일 참고
			if (s1.size() == s2.size())
				return s1 < s2;

			else
				return s1.size() < s2.size();
		});

	s.erase(unique(s.begin(), s.end()), s.end()); // unique 해도 값이 지워지는 것이 아니므로 erase 써서 삭제해야 됨.

	for (string x : s)
		cout << x << '\n';

	return 0;
}
***************/

/*
//11650 좌표 정렬하기 (x,y)에서 x기준 정렬후 같으면 y순 정렬
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
	vector<pair<int, int>> v;
	int n, x, y;
	cin >> n;
	for (int i = 0; i < n; i++){
		scanf("%d %d", &x, &y);
		v.push_back(make_pair(x,y)); // make_pair!!!!!! 로 쌍 만들어서 push
	}
	sort(v.begin(), v.end());

	for (int i = 0; i < v.size(); i++) {
		cout << v[i].first << ' ' << v[i].second << '\n';
	}

	return 0;
}
******************/




