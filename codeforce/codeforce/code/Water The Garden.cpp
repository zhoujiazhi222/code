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

//ifstream in("C:\\input.txt");
istream& in = cin;


typedef long long LL;
#define pii pair<int,int>
#define pll pair<LL,LL>
#define mp make_pair
#define pb push_back



int n, k, a[210];

void input(){
	in >> n >> k;
	for (int i = 1; i <= k; ++i){
		in >> a[i];
	}
}

int A[210];

int main(){

	int TEST_CASE = 1;
	in >> TEST_CASE;
	while (TEST_CASE-- > 0){
		input();

		for (int i = 0; i < 210; ++i)
			A[i] = 222;
		for (int i = 1; i <= k; ++i){
			for (int j = 1; j <= n; ++j)
				A[j] = min(A[j], abs(j - a[i]) + 1);
		}

		int ans = 0;
		for (int i = 1; i <= n; ++i)
			ans = max(ans, A[i]);
		cout << ans << endl;











	}


	return 0;
}





