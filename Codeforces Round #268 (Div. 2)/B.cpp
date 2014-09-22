//Md. Khairullah Gaurab
//CSE, SUST  20th
//gaurab.cse.sust@gmail.com

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


#define sf scanf
#define pf printf
#define mem(a,b) memset(a,b,sizeof(a))
#define pb push_back
#define all(a) (a.begin(),a.end())
#define REP(i,a,b) for(int i=a; i<=b; ++i)
#define REPR(i,a,b) for(int i=b; i>=a; --i)
#define mp(a,b) make_pair(a,b)
#define fs first
#define sc second
#define unq(vec) stable_sort(vec.begin(),vec.end());\
                 vec.resize(distance(vec.begin(),unique(vec.begin(),vec.end())));

using namespace std;

typedef long long Long;
typedef double dd;

const Long MOD = 1000000007;
const int SZ = 10000000+1;

//int X[]={1,1,2,2,-1,-1,-2,-2};//knight move//
//int Y[]={2,-2,1,-1,2,-2,1,-1};//knight move//
//int X[]={0,-1,-1,-1,0,1,1,1};
//int Y[]={-1,-1,0,1,1,1,0,-1};
//int X[]={-1,0,1,0};
//int Y[]={0,1,0,-1};

vector<int> A, B, C, D;
int L, R, P, Q, RES, xx, yy, mx;

int main(int argc, const char **argv)
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(sf("%d %d %d %d",&P, &Q, &L, &R)==4)
    {
        A.clear();
        B.clear();
        C.clear();
        D.clear();
        RES = mx = 0;
        REP(i,1,P)
        {
            sf("%d %d",&xx, &yy);
            A.pb(xx);
            B.pb(yy);
            mx = max(mx,yy);
        }
        REP(i,1,Q)
        {
            sf("%d %d",&xx, &yy);
            C.pb(xx);
            D.pb(yy);
        }
        REP(i,L,R)
        {
            bool flag = false;
            REP(j,0,(Q-1))
            {
                int m = C[j] + i;
                int n = D[j] + i;
                if(m>mx) continue;
                REP(k,0,(P-1))
                {
                    int G = A[k];
                    int H = B[k];
                    if((G<=m and m<=H) or (G<=n and n<=H) or (m<=G and G<=n) or (m<=H and H<=n))
                    {
                        flag = true;
                    }
                }
            }
            if(flag) RES++;
        }
        pf("%d\n",RES);
    }
    return 0;
}




