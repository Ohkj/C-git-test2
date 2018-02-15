

//문자열 활용하기(구현)

/*
//문제 5L - NBA농구(48:00분 처리 해야 됨)
#include <iostream>
#include<algorithm>
#include<string>
#include<cstdio>
#include<string.h>
using namespace std;

int pa[100];
int pb[100];
int times[100];

int main() {
	int tc;
	
	cin >> tc;
	pa[0]=pb[0]=0;
	//cout << tc+1 << endl;
	for(int i = 0; i < tc; i++){
		if(i > 0){
			pa[i] = pa[i-1];
			pb[i] = pb[i-1];
		}
		int sec = 0;
		int t;	
		char str[100];
		scanf("%d %s", &t,str);
		
		//초로 변환
		sec += str[4] - '0';
		sec += (str[3] - '0')*10;
		sec += (str[1] - '0')*60;
		sec += (str[0] - '0')*600;
		
		times[i] = sec;
		if(t == 1){
			pa[i]++;	
		}
		else{
			pb[i]++;	
		}	
				//printf("%d %02d%c%02d\n", t, m, ch, s);
		//cout << t << ' ' << m << ":" << s << endl;
	}
	pa[tc] = 0;
	pb[tc] = 0;
	
	int flag=0;
	int start_t;
	int end_t;
	int total_team1 = 0;
	int total_team2 = 0;
	for(int i = 0; i <= tc; i++){
			if(flag == 0){
					if(pa[i] > pb[i]){
						flag = 1;
						start_t = times[i];
					}
					else if(pa[i] < pb[i]){
						flag = 2;
						start_t = times[i];
					}
			}
			else if(flag != 0 && pa[i] == pb[i]){
					end_t = times[i];
					int tlen = end_t - start_t;
					if(flag == 1){
						total_team1 += tlen;
					}
					else{
						int tlen2 = 48*60;
						int t2result = tlen2 - tlen; cout << "t2result = " << t2result << endl;
						total_team2 += t2result;	
					}
				flag = 0;
			}
	}
	printf("%02d:%02d\n", total_team1/60, total_team1%60);
	printf("%02d:%02d", total_team2/60, total_team2%60);
	
  return 0;
}
********************/



/*
//문제5M - 와일드카드(문자열 입력, 비교 기준 주의)
#include<cstdio>
#include<string>
#include<string.h> 
#include<iostream>

using namespace std;
int strcmp(const char* sa, const char* sb)
{	
	for(int i = 0; ; i++){ // 중단하지 않고 계속 탐색
		if(sa[i] != sb[i]){ // 두 문자열이 다른 인덱스를 발견하면
			if(sa[i] == '?'){ 
				continue;
			}
			else return 1;
		}
		if(sa[i] == '\0' || sb[i] == '\0') //문자열 끝이면 break
			break;
	}
	printf("%s\n", sb); // 위 if문에 안걸리는 것은 두 문자열이 같은 경우
	
}

int main() {
	char sa[100+1];
	char sb[100+1];
	int n;
	cin >> n;
	
	scanf("%s", sa);
	for(int i = 0; i < n; i++){
		scanf("%s", sb);
		int result = strcmp(sa, sb);
		
	}	
	
  return 0;
}
************************/


/*
//문제5N - 패턴검사
#include <iostream>
#include<cstdio>
#include<string>
#include<string.h> 
#include<algorithm>
using namespace std;

int main() {
	char s[1001];
	char p[1001];
	scanf("%s", s);
	scanf("%s", p);
	int slen = strlen(s);
	int plen = strlen(p);

	for(int i = 0; i + plen -1 < slen; i++){ // i+plen-1 범위 주의
		int flag = 1;
		for(int j = 0; j < plen; j++){
			if(s[i+j] != p[j]){ // s인덱스는 고정이고 p인덱스는 상대적. s[i+j]로 +j만큼 처리해주어 s에서 패턴 p끝까지 체크
					flag = 0;
					break;
			}
		}
		if(flag == 1) // 같은 경우일 때만 인덱스 출력
			cout << i << endl;
	}		
	
  return 0;
}
************************/


/*
//문제5O - 단어퍼즐!!!!!!!!!!!!!!!!!!!!!!!!!
#include <iostream>
#include<cstdio>
#include<string>
#include<string.h> 
#include<algorithm>
using namespace std;

char arr[101][101]; // N*N 배열
char p[101]; // 패턴
int plen; // 패턴길이
int dr[3] = {1,1,0}; // 상,하,대각선 총 3방향으로 이동할 경우 (행증가,열 그대로) / (행증가,열증가) / (행그대로,열증가)
int dc[3] = {0,1,1}; // 세로로 봐야됨(dr의1과 dc의0) : 행이 1증가, 열 그대로(0) 인 경우

void testcase(){
	int n;
	int cnt = 0;
	cin >> n;
	scanf("%s", p);
	plen = strlen(p);
	
	for(int i = 0 ; i < n; i++){
		scanf("%s", arr[i]); //arr[][]에서 i열에 알파벳 정보 저장. 두 번째 테스트케이스 경우 arr[0]에 APPLLLL저장 ...
	}
	
	for(int r = 0; r < n; r++){
		for(int c = 0; c < n; c++){
			for(int d = 0; d < 3; d++){
					int er = r + dr[d] * (plen-1); // 0+1*2=2, 
					int ec = c + dc[d] * (plen-1); // 0+0*2=0,
					
				
					if(er >= n || ec >= n){
						continue;
					}//cout << er << ' ' << ec << endl;
			//cout << p[0] << ' ' <<p[1] << endl;
					int flag = 1;
					for(int j = 0; j < plen; j++){
							int nr = r + dr[d] * j;
							int nc = c + dc[d] * j; //cout << nr << ' ' << nc << endl;
							if(arr[nr][nc] != p[j]){
								flag = 0;
								break;
							}
					}
				if(flag == 1)
					cnt++;
			 }
		}
	}
	cout << cnt << endl;
	
}

int main() {
	int tc;
	cin >> tc;
	
	for(int i = 0;  i < tc; i++){
		testcase();
	}	
	
	
  return 0;
}
****************************/



