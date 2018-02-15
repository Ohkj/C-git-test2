
// ===================스택 활용=================

/*
//6A - 괄호문자열
#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>
#include<string>
#include<string.h>
#include<stdlib.h>
#include<functional> 
#include<memory.h>
#include<stack>
using namespace std;

bool check(string s){
	int len = s.length();
	stack<char> st;
	
	for(int i = 0; i < len; i++){
		if(s[i] == '(' ){
			st.push(s[i]);	
		}
		else if(s[i] == ')'){
			if(!st.empty()){
					st.pop();
			}
			else
				return false;
		}
	}
	return st.empty();
}

int main() {
	int n;
	string s;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> s;
		if(check(s) == true){
			cout << "YES" << endl;	
		}
		else
			cout << "NO" << endl;
	}
		
  return 0;
}
*********************/

/*
//문제6B - 탑
#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>
#include<string>
#include<string.h>
#include<stdlib.h>
#include<functional> 
#include<memory.h>
#include<stack>
using namespace std;

int main() {
	int n, top;
	stack<int> st; // 인덱스 저장
	stack<int> h; // 높이 저장
	cin >> n;
	st.push(0);
	h.push(10000000); // 0번째를 가장 큰값으로 하고 이 값과 6 9 5 7 4 ... 비교
	for(int i = 1; i <= n; i++){
		int num;
		cin >> num;
		while(h.top() < num){
			h.pop();
			st.pop();
		}
		int target = st.top(); // 1000000일 경우 6과 9는 걸리지 않음. st.push(0)으로 이미 인덱스에 0 저장됨. 6,9일경우 0출력
		if(i > 0) // 공백 출력
			cout << target << ' ';
		
		st.push(i); // 인덱스 추가
		h.push(num); // 높이 추가 : 1000000, 6, 9, 5, .....
	}
	
  return 0;
}
*********************/





