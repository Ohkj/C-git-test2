
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
//10809 알파벳 찾기
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
		auto it = find(str.begin(), str.end(), i); // i의 인덱스 반환

		if (count(str.begin(), str.end(), i) == 0) { // if(it == str.end())
			cout << "-1" << ' ';
		}

		else
			cout << (it - str.begin()) << ' '; // 인덱스 위치 
	}
	cout << '\n';

	return 0;
}
**********************/

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

/*
//10825 국영수
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
struct Student {
	string name;
	int kor, eng, math;
};
bool comp(const Student &s1, const Student &s2);

int main()
{
	int n;
	cin >> n;
	vector<Student> v(n); // 구조체 Student형으로 vector 생성하고 크기 지정. 크기 지정해야 에러 안남
	for (int i = 0; i < n; i++) {
		cin >> v[i].name >> v[i].kor >> v[i].eng >> v[i].math; // 개개인마다 이름, 점수 입력
	}

	sort(v.begin(), v.end(), comp);

	for (int i = 0; i < n; i++) {
		cout << v[i].name << '\n';
	}

	return 0;
}

bool comp(const Student &s1, const Student &s2) {
	if (s1.kor > s2.kor) {
		return true;
	}
	else if (s1.kor == s2.kor) {
		if (s1.eng < s2.eng) {
			return true;
		}
		else if (s1.eng == s2.eng) {
			if (s1.math > s2.math) {
				return true;
			}
			else if (s1.math == s2.math) {
				return s1.name < s2.name;
			}
		}
	}
	return false;
}


//국어 점수가 감소하는 순서로
//국어 점수가 같으면 영어 점수가 증가하는 순서로
//국어 점수와 영어 점수가 같으면 수학 점수가 감소하는 순서로
//모든 점수가 같으면 이름이 사전 순으로 증가하는 순서로


*******************/

/*
//10814 나이순 정렬
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

struct person {
	int age;
	string name;
};
bool comp(const person &age1, const person &age2);
int main()
{
	int n;
	scanf("%d", &n);
	//vector<pair<int, string>> v;
	vector<person> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i].age >> v[i].name;
		//cin >> age >> name;
		//v.push_back(make_pair(age, name)); // vector에 pair로 쌍만들어서 push 하는 방법도 알아 둘것. 아래도 같은 방식
		//v.push_back(pair<int, string>(age, name));
	}
	stable_sort(v.begin(), v.end(), comp); // 두번째 기준을 입력받은 순서로 정렬해야하므로 stable_sort 사용
	// stable_sort는 첫번째 원소가 같고 두번째 원소 정렬시 그냥 정렬하지 않고 입력받은 순서대로 정렬함.
	
	for (int i = 0; i < v.size(); i++)
		cout << v[i].age << ' ' << v[i].name << '\n';

	return 0;
}


bool comp(const person &age1, const person &age2)
{
	return age1.age < age2.age;
}
********************/

/*
//10817 세수
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
	//for (int i = 1; i <= a.size(); i++) {
	int a, b, c;
	cin >> a >> b >> c;
	v.push_back(a); v.push_back(b); v.push_back(c);

	sort(v.begin(), v.end());

	cout << v[1] << '\n';

	return 0;
}
***************/

/*
//10818 최소, 최대
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
	cin >> n;
	vector<int> v;
	for(int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.push_back(a); 
	}
	sort(v.begin(), v.end());
	int maxnum = v[0];
	int minnum = v[v.size() - 1];
	cout << maxnum << ' ' << minnum << '\n';

	return 0;
}
*******************/

/*
//10819 차이를 최대로(순열 : next_permutation 사용, 사용법 숙지!!!!
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
	cin >> n;
	vector<int> v;
	int maxnum = -99;
	int sum;
	for(int i = 0; i < n; i++) {
		int num;
		cin >> num;
		v.push_back(num); 
	}
	sort(v.begin(), v.end());
	do {
		sum = 0; // sum 위치 중요. 한번 돌면 초기화 해야 누적 안됨
		for (int i = 0; i < n-1; i++) {
			sum += abs(v[i] - v[i+1]);
		}
		maxnum = max(sum, maxnum);
	} while (next_permutation(v.begin(), v.end())); // 순열 모든 조합에서 최대값 찾음. do~while 사용

	cout << maxnum << '\n';

	return 0;
}
****************/




