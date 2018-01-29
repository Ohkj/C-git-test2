﻿
/*
//문제5A - 놀이공원
#include <iostream>

using namespace std;
int space[100][100];
void testcase()
{
	int n, k;
	cin >> n >> k;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> space[i][j];	
		}
	}
	
	int answer = k*k;
	for(int r = 0; r + k -1 <= n-1; r++){ // n*n칸 벗어나지 않을 때까지만 탐색
		int cnt = 0;
		for(int c = 0; c < n; c++){ // 모든 열에 대해
				for(int dr = 0; dr < k; dr++){
					cnt += space[r+dr][c];
				}
				if(c >= k){ // n=5, k=3일 때 c=0,1,2,3...진행하면 c=3일 때 
					for(int dr = 0; dr < k; dr++){
						cnt -= space[r+dr][c-k]; // 앞부분 장애물 개수 빼기
					}
				}
				if(c >= k-1){ // c=0,1,2일 경우
					if(answer > cnt) // 최소값 갱신
							answer = cnt;
				}
		}		
	}
	cout << answer;
	
}
int main() {
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		testcase();	
	}
	
  return 0;
}
*****************/


/*
//문제5B - 거대 놀이공!!!!!!!!!!!!!!!!!!!!!!
#include <iostream>

using namespace std;
int space[300][300];
void testcase()
{
	int n, k;
	cin >> n >> k;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> space[i][j];	
		}
	}
	
	int answer = k*k;
	for(int r = 0; r + k -1 <= n-1; r++){ // n*n칸 벗어나지 않을 때까지만 탐색
		int cnt = 0;
		for(int c = 0; c < n; c++){ // 모든 열에 대해
				for(int dr = 0; dr < k; dr++){
					cnt += space[r+dr][c];
				}
				if(c >= k){ // n=5, k=3일 때 c=0,1,2,3...진행하면 c=3일 때 
					for(int dr = 0; dr < k; dr++){
						cnt -= space[r+dr][c-k]; // 앞부분 장애물 개수 빼기
					}
				}
				if(c >= k-1){ // c=0,1,2일 경우
					if(answer > cnt) // 최소값 갱신
							answer = cnt;
				}
		}		
	}
	cout << answer;
	
}
int main() {
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		testcase();	
	}
	
  return 0;
}
**************/

