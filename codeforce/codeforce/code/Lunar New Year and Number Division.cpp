#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include <functional>
#include <algorithm>
#include <ctime>
#include <cmath>
#include <vector>
#include <queue>
#include <map>
#include <sstream>
#include <unordered_set>
#include <unordered_map>
#include <sstream>
#include <set>
#include <cassert>
using namespace std;

#ifndef ONLINE_JUDGE
ifstream in("C:\\input.txt");
#endif

#ifdef ONLINE_JUDGE
istream& in = cin;
#endif


typedef long long LL;
#define pii pair<int,int>
#define pll pair<LL,LL>
#define mp make_pair
#define pb push_back
#define lson (root<<1)  
#define rson (root<<1|1)  

int n;
LL a[300010];


void input(){
	in >> n;
	for (int i = 1; i <= n; ++i){
		in >> a[i];
	}

}


int main(){

	int TEST_CASE = 1;
	//in >> TEST_CASE;
	while (TEST_CASE-- > 0){
		input();

		sort(a + 1, a + n + 1);
		LL ans = 0;
		for (int i = 1; i <= n / 2; ++i){
			ans += (a[i] + a[n - i + 1])* (a[i] + a[n - i + 1]);
		}
		cout << ans << endl;












	}


	return 0;
}





