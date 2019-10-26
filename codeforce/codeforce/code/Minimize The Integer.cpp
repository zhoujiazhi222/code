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
ifstream in("/Users/jiazhi.zhou/CLionProjects/acm/InOutput/input.txt");
#define Debug(v) cerr<<#v<<"="<<v<<'\n'
#endif

#ifdef ONLINE_JUDGE
istream& in = cin;
#define Debug(v) ;
#endif


typedef long long LL;
#define pii pair<int,int>
#define pll pair<LL,LL>
#define mp make_pair
#define pb push_back
#define lson (root<<1)
#define rson (root<<1|1)
#define FFLUAHALL fflush(stdin);fflush(stdout);

string s;

void input() {
    in >> s;

}

void _init() {


}


int main() {

    int TEST_CASE = 1;
    in >> TEST_CASE;
    while (TEST_CASE-- > 0) {
        _init();
        input();
        queue<int> a, b;
        for (char c : s) {
            int k = c - '0';
            if (k % 2 == 0) {
                a.push(k);
            } else {
                b.push(k);
            }
        }
        while (!a.empty() && !b.empty()) {
            if (a.front() < b.front()) {
                cout << a.front();
                a.pop();
            } else {
                cout << b.front();
                b.pop();
            }
        }
        while (!a.empty()) {
            cout << a.front();
            a.pop();
        }
        while (!b.empty()) {
            cout << b.front();
            b.pop();
        }
        cout << endl;

    }


    return 0;
}





