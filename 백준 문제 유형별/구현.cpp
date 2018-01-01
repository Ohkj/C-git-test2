
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

/*
//2490 윷놀이!!
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
	int n;
	int cnt = 0;
	vector<int> v(4); // 윷 개수만큼 크기 지정
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cin >> v[j]; // 0 ~ 3번째 인덱스에 입력값 저장. 배열 형태로 입력할 것
			v.push_back(v[j]);
			if (v[j] == 1) {
				cnt++;
			}
		}
			if (cnt == 3)
				cout << "A" << '\n';
			else if (cnt == 2)
				cout << "B" << '\n';
			else if (cnt == 1)
				cout << "C" << '\n';
			else if (cnt == 0)
				cout << "D" << '\n';
			else if (cnt == 4)
				cout << "E" << '\n';

			cnt = 0;
	}
	return 0;
}
*********************/

/*
//10797 10부제
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
	int n, num;
	vector<int> v;
	cin >> n;
	for (int i = 0; i < 5; i++) {
		cin >> num;
		v.push_back(num);
	}

	cout << count(v.begin(), v.end(), n) << '\n';
	//set으로 count 하면 있으면 1 없으면 0 반환

	return 0;
}
******************/

/*
//5543 상근날드
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
	int burger, drink;
	vector<int> b;
	vector<int> d;
	for (int i = 0; i < 3; i++) {
		cin >> burger;
		b.push_back(burger);
	}
	sort(b.begin(), b.end());

	for (int i = 0; i < 2; i++) {
		cin >> drink;
		d.push_back(drink);
	}
	sort(d.begin(), d.end());

	cout << b[0] + d[0] - 50 << '\n';

	return 0;
}
*****************/

/*
//10798 세로읽기!!!!!!!!!!!
#pragma warning(disable:4996)
#include<cstdio>
#include<algorithm>
#include<vector>
#include<iostream>
#include<map>
#include<set>
#include<queue>
#include<string>
#include<string.h> // 헤더파일 선언
#include<functional>
using namespace std;

int main()
{
	char ch[5][15] = { 0 }; // 0으로 초기화해야 null 처리 시 ?값 안들어감
	int size = 0;
	for (int i = 0; i < 5; i++) {
		scanf("%s", ch[i]); // 라인 한 줄 입력받음
		if(strlen(ch[i]) > size)
			size = strlen(ch[i]); // 입력한 문자 길이만큼 for문 돌려야 쓰레기값 안들어감
	}

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < 5; j++) {
			if (ch[j][i] == NULL) {
				continue;
			}

			else
				cout << ch[j][i]; // 세로 출력. 인덱스 주의
		}
	}

	return 0;
}
************/


/*
//12790 Mini Fantasy War
#pragma warning(disable:4996)
#include<cstdio>
#include<algorithm>
#include<vector>
#include<iostream>
#include<map>
#include<set>
#include<queue>
#include<string>
#include<string.h> // 헤더파일 선언
#include<functional>
using namespace std;

int main()
{
	int n;
	int HP, MP, AT, DF;
	int hp, mp, at, df;
	int result;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> HP >> MP >> AT >> DF >> hp >> mp >> at >> df;
		int sumHP = HP + hp;
		if (sumHP < 1) sumHP = 1;

		int sumMP = MP + mp;
		if (sumMP < 1) sumMP = 1;

		int sumAT = AT + at;
		if (sumAT < 0) sumAT = 0;

		int sumDF = DF + df;

		cout << (1 * sumHP + 5 * sumMP + 2 * sumAT + 2 * sumDF) << '\n';
	}

	return 0;
}
****************/

/*
//1764 듣보잡!!!!!!!!!!!!!
#pragma warning(disable:4996)
#include<cstdio>
#include<algorithm>
#include<vector>
#include<iostream>
#include<map>
#include<set>
#include<queue>
#include<string>
#include<string.h> // 헤더파일 선언
#include<functional>
using namespace std;

int main()
{
	int n, m;
	int cnt = 0;
	string str1, str2;
	vector<string> s1;
	vector<string> s2;
	vector<string> s3;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> str1; // s1[vi] 이 방식이 push_back보다 속도는 빠름
		s1.push_back(str1);
	}
	sort(s1.begin(), s1.end()); // binary_search STL 사용하기 위해 정렬
	for (int i = 0; i < m; i++) {
		cin >> str2;
		if (binary_search(s1.begin(), s1.end(), str2)) { // binary_search STL 사용
			s3.push_back(str2); // s1에 str2 문자열이랑 같은 것이 있으면 s3 vector에 삽입
		}
	} // 이중 for문 사용해서 s3에 삽입하면 시간초과

	sort(s3.begin(), s3.end());

	cout << s3.size() << '\n';

	for (string a : s3)
		cout << a << '\n';

	return 0;
}
*****************/

/*
//2563 색종이!!!!!!!!!!!!!!!!!!!!!!!!
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
int arr[100][100]; // !!!!!!!!!!!!!전역으로 선언 -> 0으로 초기화. C++에서 초기화 안하면 cnt 0 출력됨
int main()
{
	int n,x,y;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		for (int a = x; a < x + 10; a++) { // x,y 좌표 크기의 사각형을 돌면서
			for (int b = y; b < y + 10; b++) {
				arr[a][b]++; // 격자 하나를 플러스
			}
		}
	}
	int cnt = 0;
	for (int b = 0; b < 100; b++) { // 전체 도화지 100 x 100 사이즈에서 
		for (int a = 0; a < 100; a++) {
			if (arr[b][a] >= 1) // 1이상으로 플러스 된 것(x,y좌표 사각형의 격자 하나)의 개수를 센다.
				cnt++;
		}
	}
	cout << cnt << '\n';

	return 0;
}
*****************/

/*
//10984 내 학점을 구해줘
#pragma warning(disable:4996)
#include<cstdio>
#include<algorithm>
#include<vector>
#include<iostream>
//#include<math.h>
#include<set>
#include<queue>
#include<string>
#include<string.h> // 헤더파일 선언
#include<functional>
using namespace std;

int main()
{
	int T, n, c, csum = 0;
	double g;
	double sum = 0;
	cin >> T;
	while (T--) {
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> c >> g;
			csum += c;
			sum += (c * g);
		}
			printf("%d %.1f\n", csum, sum / csum); // 소수 둘 째자리에서 반올림 출력 형식 %.1f
			csum = 0;
			sum = 0.0;
	}

	return 0;
}
************/

/*
//5597 과제 안 내신 분?
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
	int arr[31] = { 0, };
	for (int i = 0; i < 28; i++) {
		cin >> n;
		arr[n] = 1; // 입력한 숫자를 arr의 인덱스로 설정하고 이 값을 1로 바꿈
	}
	for (int i = 1; i <= 30; i++) {
		if (arr[i] == 0) // 0이면 입력하지 않은 숫자
			cout << i << '\n';
	}

	return 0;
}
****************/


/*
//1159 농구경기!!!!!!!!!!!!!!!!!!!!
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
int arr[26]; // 전역변수, 배열 초기화
char ch[30];
int main()
{
	int n, cnt = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> ch;
		arr[ch[0] - 97]++; // 아스키코드값 이용. 입력한 문자에서 97(a)를 뺀 것을 인덱스로 하고 이것을 플러스
	}

	for (int i = 0; i < 26; i++) {
		if (arr[i] >= 5) {
			printf("%c", i + 97); // i+97을 하게되면 배열 0번째 인덱스부터 5이상이면 출력
			cnt++;
		}
	}
	if (cnt == 0)
		cout << "PREDAJA" << '\n';

	return 0;
}
**************/

/*
//5532 방학숙제
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
int arr[26];
char ch[30];
int main()
{
	int L, A, B, C, D;
	int kor, math;
	cin >> L >> A >> B >> C >> D;
	if (A % C != 0) {
		kor = (A / C) + 1;
	}
	if ((A % C == 0)) {
		kor = A / C;
	}
	if (B % D != 0) {
		math = (B / D) + 1;
	}
	if ((B % D == 0)) {
		math = B / D;
	}
	int maxnum = max(kor, math); 
	cout << L - maxnum << '\n';

	return 0;
}
****************/

/*
//2851 슈퍼마리오!!!!!!!!!!!!!!!!!!!
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
	int n, result;
	int sum = 0;
	int now, next;
	vector<int> v;
	for (int i = 0; i < 10; i++) {
		cin >> n;
		v.push_back(n);
	}	
	    result = v[0];

		if (result == 100) { // 처음 값이 100이면 출력하고 종료
			cout << "100" << '\n';
			return 0;
		}
		for (int i = 1; i < v.size(); i++) {
					
			now = result;
			next = result + v[i];

			now = abs(100 - now);
			next = abs(100 - next);

			if (now >= next) {
				result += v[i];
			}
			else
				break;
		}
	cout << result << '\n';

	return 0;
}
*************/