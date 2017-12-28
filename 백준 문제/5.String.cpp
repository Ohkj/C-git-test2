
/*
// 1152 단어개수 세기
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

int main()
{
	string str;
	int cnt = 0;
	while (cin >> str) { // The Curious Case of Benjamin Button
		cnt += 1;
	}
	cout << cnt << '\n'; // 6

	return 0;
}

********************/

/*
// 100820 문자열 분석
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

int main()
{
	string str;
	
	while (getline(cin, str)) { // getline 함수 -> 문자열 끝까지 입력할 때 사용
		int lower = 0;
		int upper = 0;
		int number = 0;
		int space = 0;
		for (char x : str) {
			if (x >= 'a' && x <= 'z')
				lower++;
			else if (x >= 'A' && x <= 'Z')
				upper++;
			else if (x >= '0' && x <= '9') // 숫자도 ' '으로 묶어야 됨
				number++;
			else if (x == ' ')
				space++;
		}

		cout << lower << ' ' << upper << ' ' << number << ' ' << space << '\n';
	}


	return 0;
}
********************/

/*
// 10821 정수의 개수
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
	string str;
	int cnt = 0;

	while (getline(cin, str, ',')) { // 10,20,30,50,100 입력   getline 세번째는 구분자
		cnt++;
	}
	cout << cnt << '\n'; // 5

	return 0;
}

**************/


/*
//2743 단어길이재기
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
	string str;
	while (getline(cin, str)) {
		cout << str.length() << '\n';
	}

	return 0;
}
*********************/

/*
// 10822 더하기
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
	string str;
	int sum = 0;
	while (getline(cin, str, ',')) {
		sum += stoi(str); // stoi()는 문자열을 정수로 변환. "12 value" 입력이면 12만 변환됨.
	}

	cout << sum << '\n';

	return 0;
}
******************/

/*
// 10823 더하기2
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
#include <sstream> // istringstream 헤더파일
using namespace std;

int main()
{
	string str;
	string line;
	int sum = 0;
	while (cin >> line) {
		str += line; // str에 line으로 스트링 입력받아 뒤에 추가
	}
	istringstream sin(str); // 형식 주의, 표준입력처럼 사용

	string num;

	while(getline(sin, num, ',')) {
		sum += stoi(num);
	}
	cout << sum << '\n';
	
	return 0;
}
************/

/*
// 10824 네수
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
#include <sstream> // istringstream 헤더파일
using namespace std;

int main()
{
	string s1, s2, s3, s4;
	int n1, n2, n3, n4;
	scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
	s1 = to_string(n1); s2 = to_string(n2); // 입력받은 정수를 스트링으로 변환
	s3 = to_string(n3); s4 = to_string(n4);
	
	s1 + s2; s3 + s4; // 변환한 스트링을 합침
	
	cout << stoll(s1 + s2) + stoll(s3 + s4) << '\n'; // longlong으로 해야 범위 초과 안됨

	return 0;
}
********************/

