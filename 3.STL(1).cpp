
/*
// 10866 덱
#pragma warning(disable:4996)
#include<cstdio>
#include<algorithm>
#include<vector>
#include<iostream>
#include<deque>
#include<string>
using namespace std;

int main()
{
	deque<int> d;
	int n;
	string str;
	scanf("%d", &n);
	while (n--) {
		cin >> str;

		if (str == "push_front") {
			int num;
			scanf("%d", &num);
			d.push_front(num);
		}
		else if (str == "push_back") {
			int num;
			scanf("%d", &num);
			d.push_back(num);
		}
		else if (str == "pop_front") {
			if (d.empty()) {
				printf("-1\n");
			}
			else {
				printf("%d\n", d.front());
				d.pop_front();
			}
		}
		else if (str == "pop_back") {
			if (d.empty()) {
				printf("-1\n");
			}
			else {
				printf("%d\n", d.back());
				d.pop_back();
			}
		}
		else if (str == "size") {
			printf("%d\n", d.size());
		}
		else if(str == "empty") {
			if (d.empty()) {
				printf("1\n");
			}
			else
				printf("0\n");
		}
		else if (str == "front") {
			if (d.empty()) {
				printf("-1\n");
			}
			else
				printf("%d\n", d.front());
		}
		else if (str == "back") {
			if (d.empty()) {
				printf("-1\n");
			}
			else
				printf("%d\n", d.back());
		}
	}

	return 0;
}
******************/

/*
// 1406 에디터  list 활용
#pragma warning(disable:4996)
#include<cstdio>
#include<algorithm>
#include<vector>
#include<iostream>
#include<list>
#include<string>
using namespace std;

int main()
{
	int n;
	string str;
	cin >> str;

	list<char> editor(str.begin(), str.end());
	auto cursor = editor.end(); // 처음 커서 위치는 맨끝

	scanf("%d", &n);
	while (n--) {
		char c;
		cin >> c;
		if (c == 'L') {
			if(cursor != editor.begin()) // 맨 앞이면 무시
				--cursor;
		}
		else if (c == 'D') {
			if(cursor != editor.end()) // 맨 뒤면 무시
				++cursor;
		}
		else if (c == 'B') {
			if (cursor != editor.begin()) {
				auto temp = cursor;
				--cursor;
				editor.erase(cursor);
				cursor = temp;
			}
		}
		else if (c == 'P') {
			char ch;
			cin >> ch;
			editor.insert(cursor, ch);
		}
	}
	for (char x : editor) { // auto x : editor로 하면 백준 런타임에러, VS에서는 에러 안남
		cout << x;
	}
	cout << endl;
	return 0;
}
*********************/


// 2346 풍선 터뜨리기(***********복습필요*************)
#pragma warning(disable:4996)
#include<cstdio>
#include<algorithm>
#include<vector>
#include<iostream>
#include<list>
#include<string>
#include<functional>
using namespace std;

int main()
{
	list < pair<int, int>> a; // 리스트 활용
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		int x;
		cin >> x;
		a.push_back({ x,i });
	}
	auto it = a.begin();
	
	for (int i = 0; i < n - 1; i++) {
		cout << (it->second) << ' '; // 출력 형식 잘보기
		int step = it->first;

		if (step > 0) {
			auto temp = it; // 삭제하게 되면 이상한값이 들어갈 수 있으므로 
			++temp;         // 미리 증가시키고 진행
			if (temp == a.end()) {
				temp = a.begin();
			}
			a.erase(it);
			it = temp;
			for (int i = 1; i < step; i++) {  // temp 미리 한번 증가했으므로 i < step 등호 안들어감
				++it;
				if (it == a.end()) {
					it = a.begin();
				}
			}
		}

		else if (step < 0) {
			step = -step;
			auto temp = it;
			if (temp == a.begin()) {
				temp = a.end();
			}
			--temp;
			a.erase(it);
			it = temp;
			for (int i = 1; i < step; i++) {
				if (it == a.begin()) {
					it = a.end();
				}
				--it;
			}
		}
	}
	cout << a.front().second << '\n';

	return 0;
}

