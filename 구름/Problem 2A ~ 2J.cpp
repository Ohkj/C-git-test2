
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
	/////////////37줄 ~ 43줄 성능 개선 하려면
	//int tallest = -1;
	//for(int i = m.size(); i >= 0; i--){ // 키가 큰 사람부터 탐색함
	//	if(find == m[i]){
	//		tallest = i;
	//		break; // break로 뒤에 있는 사람은 탐색안함
	//	}
	//}
    //////////////

	sort(v.begin(), v.end(), greater<int>());
	if (flag == false)
		cout << "-1";
	else if(flag == true)
		cout << v[0];
	
	return 0;
}
************/

/*
//문제2B - 오름차순인가?
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
int main() {
	int n;
	bool flag = false;
	int cnt = 0;
	cin >> n;
	vector<int> v(n); // 입력크기만큼 벡터 크기 설정
	for(int i = 0; i < n; i++){
			//cin >> v[i];
			scanf("%d", &v[i]);
	}

	for(int i = 0; i+1 < n; i++) // for문 조건을 i+1 < n으로 해야됨!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	{
		if(v[i+1] < v[i] ){ // i < n으로 하면 i+1 했을 때 인덱스 범위 초과됨.
			cnt++;
		}
	}
	/////////////88줄 ~ 93줄 다른 표현
	//for(int i = 1; i < n; i++){
	//	if(v[i-1] <= v[i]){
	//		cnt++;
	//	}
		else break; // 하나라도 오름차순이 아니면 전체도 오름차순 아님
	//}
	//////////////

	
	if(cnt == 0) cout << "YES";
	else cout << "NO";
	
  return 0;
}
*************/

/*
//문제2C - 다양성
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

int main(){
	int n;
	cin >> n;
	set<int> s;
	for(int i = 0; i < n; i++){
		int num;
		cin >> num;
		s.insert(num); // set은 중복빼고 자동 오름차순 정렬됨
	}
	cout << s.size(); // {1,2,3,3} 이면 3출력

	/////////////////set 안쓰고 구현
	int cnt = 1; // 첫 번째 데이터는 항상 중복되지 않고 카운트 적용
	for(int i = 1; i < n; i++){
		if(v[i] == v[i-1]){ // 정렬 되어 있기 때문에 자신과 자신의 왼쪽 값이 같으면 중복. 예)1 2 3 3 5
			cnt++;
		}
	}
	
	return 0;
}
***************/


/*
//문제2D - 문자열의 비교
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

int main() {
	char str1[100001];
	char str2[100001];

	cin >> str1;
	cin >> str2;
	cout << strcmp(str1, str2) << '\n';

	return 0;
}
*************/

/*
////문제2D - 문자열의 비교 / strcmp 함수 구현 버전
#include<cstdio>

int strcmp(const char* sa, const char* sb)
{	
	for(int i = 0; ; i++){ // 중단하지 않고 계속 탐색
		if(sa[i] != sb[i]){ // 두 문자열이 다른 인덱스를 발견하면
			if(sa[i] < sb[i]){ // sa[i]가 사전 순서상 앞이면
				return -1;
			}
			else return 1;
		}
		if(sa[i] == '\0' || sb[i] == '\0') //문자열 끝이면 break
			break;
	}
	return 0; // 위 if문에 안걸리는 것은 두 문자열이 같은 경우
	
}

int main() {
	char sa[100000+1];
	char sb[100000+1];
	scanf("%s", sa);
	scanf("%s", sb);
	int result = strcmp(sa, sb);
	if( result < 0 )
	{
		printf("-1\n");
	}else if(result > 0)
	{
		printf("1\n");
	}else{
		printf("0\n");
	}
	
  return 0;
}
***********************/


/*
//문제2E - 소수의 판별
#include<cstdio>

bool is_prime(int n)
{ 
	if (n <= 1)
		return false;

	if (n == 2)
		return true;

	if (n % 2 == 0)
		return false;

	for (long long i = 3; i*i <= n; i += 2) // for문 i*i <= n; i+=2 주의!!!!!!!!!!!!!!!!!!!
	{
		if (n % i == 0) {
			return false;
		}
	}

	return true;
	
}
void test_case()
{
	int n;
	scanf("%d", &n);
	if(is_prime(n))
	{
		printf("YES\n");
	}else
	{
		printf("NO\n");
	}
}

int main() {
	int tc;
	scanf("%d", &tc);
	for(int i = 1 ; i <= tc; i++)
	{
		printf("Case #%d\n", i);
		test_case();
	}
  return 0;
}

*/


/*
//문제2F - 데스티니
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
#include<cmath>
using namespace std;

int main() {
	int n;
	vector<pair<int,int> > v;
	cin >> n;
	for (int i = 0; i < n; i++) {
		//cin >> x[i] >> y[i];
		int x, y;
		cin >> x >> y;
		v.push_back(make_pair(x, y)); // make_pair로 좌표를 쌍으로 넣음
	}
	int mini = 1234567890;
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		for(int j = i+1; j < n; j++){
			int dx = v[i].first - v[j].first; // x좌표 길이
			int dy = v[i].second - v[j].second;
			
			int result = (dx * dx) + (dy * dy);
			
			if(result < mini){
				mini = result;
				cnt = 1;
			}
			
			else if(result == mini){
				cnt++;
			}
	
		}
	}
	double dist = sqrt((double)mini); // 루트값 구하기
	
	printf("%.1lf\n", dist);
	printf("%d\n", cnt);
	
	return 0;
}
******************/