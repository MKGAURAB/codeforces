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

int main(int argc, const char **argv)
{
    //freopen("input.txt","r",stdin);
    //freoepn("output.txt","w",stdout);
    int N, M, K, T;
    vector<int> P;
    while(sf("%d %d %d",&N, &M, &K)==3)
    {
        P.clear();
        int RES = 0;
        REP(i,1,M)
        {
            sf("%d",&T);
            P.pb(T);
        }
        sf("%d",&T);
        bitset<32> R(T);
        int cnt = 0;
        REP(i,0,(P.size()-1))
        {
            bitset<32> D(P[i]);
            cnt = 0;
            REPR(j,0,31)
            {
                if(D[j]!=R[j]) cnt++;
            }
            if(cnt<=K) RES++;
        }
        pf("%d\n",RES);
    }
    return 0;
}



