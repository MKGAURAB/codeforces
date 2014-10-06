/*
 * A.cpp
 *
 *  Created on: Oct 5, 2014
 *      Author: ddxofy
 */
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <cstring>
#include <limits>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;

const int inf = 2000000000;
const int MOD = 10007;

typedef long long Long;
typedef double DD;

#define sf scanf
#define pf printf
#define mem(a,b) memset(a,b,sizeof(a))
#define pb push_back
#define REP(i,a,b) for(int i=a; i<=b; ++i)
#define REPB(i,a) for(int i=a;; ++i)
#define REPR(i,a,b) for(int i=b; i>=a; --i)
#define REPRB(i,a) for(int i=a;; --i)
#define mp(a,b) make_pair(a,b)
#define fs first
#define sc second
#define SZ(s) ((int)s.size())
#define PI 3.141592653589793
#define VS          vector<string>
#define VI          vector<int>
#define VD          vector<DD>
#define VLL         vector<Long>
#define lim 25
#define unq(vec) stable_sort(vec.begin(),vec.end());\
vec.resize(distance(vec.begin(),unique(vec.begin(),vec.end())));
#define BE(a)       a.begin(),a.end()
#define rev(a)      reverse(BE(a));
#define sorta(a)    stable_sort(BE(a))
#define sortc(a)    sort(BE(a),comp)
//int X[]={1,1,2,2,-1,-1,-2,-2},Y[]={2,-2,1,-1,2,-2,1,-1};//knight move
//int X[]={0,-1,-1,-1,0,1,1,1},Y[]={-1,-1,0,1,1,1,0,-1};//8 move
//int X[]={-1,0,1,0},Y[]={0,1,0,-1};//4 move

vector<string> RES;

int main(int argc, const char **argv) {
	ios::sync_with_stdio(false);
	int N;
	string tmp;
	while (cin >> N) {
		RES.clear();
		RES.pb(string("+------------------------+"));
		RES.pb(string("|#.#.#.#.#.#.#.#.#.#.#.|D|)"));
		RES.pb("|#.#.#.#.#.#.#.#.#.#.#.|.|");
		RES.pb("|#.......................|");
		RES.pb("|#.#.#.#.#.#.#.#.#.#.#.|.|)");
		RES.pb("+------------------------+");
		for (int i = 1; i <= 21; i += 2) {
			if (!N)
				break;
			REP(j,1,4)
			{
				if (!N)
					break;
				if (i > 1 and j == 3)
					continue;
				RES[j][i] = 'O';
				N--;
			}
		}
		REP(i,0,5)
		{
			cout << RES[i] << "\n";
		}

	}
	return 0;
}

