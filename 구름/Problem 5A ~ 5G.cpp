
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
					cnt += space[r+dr][c]; // [r+dr]이 행을 k칸까지 제한(정사각형에서 세로크기).세로크기를 k로 유지하면서 열끝까지 확인
				}
				if(c >= k){ // n=5, k=3일 때 c=0,1,2,3..k-1, k와 같이 진행하므로 c=k이면 k칸을 벗어난 경우(k-1까지가 k칸임)
					for(int dr = 0; dr < k; dr++){
						cnt -= space[r+dr][c-k]; // 앞부분 장애물 개수 빼기. 앞부분 빼야 개수가 k개로 됨
					}
				}
				if(c >= k-1){ // c=0,1,2일 경우. k-1일 때가 k칸이고 위에서 cnt 변수에 배열 1, 0 배열 입력받은 것을 더하고 뺐으므로
					if(answer > cnt) // 최소값 갱신
							answer = cnt; // k-1일 때(k칸될때) k*k정사각형 안의 지뢰 개수를 카운트
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

