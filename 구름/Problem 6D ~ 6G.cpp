
//==============Queue, Stack 활용===============

/*
//문제6D - 조세퍼스 문제(구름 출력 테스트케이스 이상)
#include <iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<iostream>
#include<set>
#include<list>
#include<queue>
using namespace std;

void testcase(){
	int n,m;
	cin >> n >> m;
	queue<int> q;
	for(int i = 1; i <=n; i++){
		q.push(i);	
	}
	
	while(!q.empty()){
		for(int j = 0; j < m-1; j++){
			q.push(q.front());	
			q.pop();
		}
		cout << q.front();
		q.pop();
		if(!q.empty())
			cout << ' ';
	}
	//cout << q.front();
	cout << endl;
}
	
int main() {
	int t;
	cin >> t;
	for(int i = 0; i < t; i++)
		testcase();	
	
  return 0;
}
************************/




