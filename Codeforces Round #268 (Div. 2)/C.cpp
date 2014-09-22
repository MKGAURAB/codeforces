// Md. Khairullah Gaurab
// CSE, SUST 20th Batch
// gaurab.cse.sust@gmail.com

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
#define REPR(i,a,b) for(int i=b; i>=a; --i)
#define mp(a,b) make_pair(a,b)
#define fs first
#define sc second
#define SZ(s) ((int)s.size())
#define PI 3.141592653589793
#define VS          vector<string>
#define VI          vector<int>
#define VD          vector<DD>
#define VLL         vector<Long>
#define lim 200005
#define unq(vec) stable_sort(vec.begin(),vec.end());\
vec.resize(distance(vec.begin(),unique(vec.begin(),vec.end())));
#define BE(a)       a.begin(),a.end()
#define rev(a)      reverse(BE(a));
#define sorta(a)    stable_sort(BE(a))
#define sortc(a)    sort(BE(a),comp)


int main(int argc, const char **argv)
{
    int N;
    while(sf("%d",&N)==1)
    {
        if(N<4) pf("NO\n");
        else{
            pf("YES\n");
            if(N==4)
            {
                pf("1 * 2 = 2\n");
                pf("2 * 3 = 6\n");
                pf("4 * 6 = 24\n");
            }
            else if(N==5)
            {
                pf("1 * 2 = 2\n");
                pf("4 + 3 = 7\n");
                pf("7 + 5 = 12\n");
                pf("12 * 2 = 24\n");
            }
            else{
                pf("5 - 3 = 2\n");
                pf("2 - 2 = 0\n");
                pf("1 * 0 = 0\n");
                pf("4 * 6 = 24\n");
                REP(i,7,N) pf("%d * 0 = 0\n",i);
                pf("0 + 24 = 24\n");
            }
        }
    }
    return 0;
}
