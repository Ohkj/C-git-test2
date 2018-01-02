
/*
//문제2A - 도토리 키재기 // 내 코드
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
	int n, find;
	bool flag = false;
	cin >> n;
	vector<int> v;
	vector<int> w;
	vector<int> m;
	for (int i = 0; i < n; i++) {
		int weight;
		cin >> weight;
		w.push_back(weight);
	}
	for (int i = 0; i < n; i++) {
		int month;
		cin >> month;
		m.push_back(month);
	}
	cin >> find;
	int tallest;
	for (int i = 0; i < m.size(); i++) {
		if (find == m[i]) {
			tallest = w[i];
			flag = true;
			v.push_back(tallest);
		}
	}
	sort(v.begin(), v.end(), greater<int>());
	if (flag == false)
		cout << "-1";
	else if(flag == true)
		cout << v[0];
	
	return 0;
}
************/

