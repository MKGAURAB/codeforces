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
int dp[225][40005][2];
int arr[225];
int N, R, G;
int REC(int POS, int R, int G, int COL)
{
    if(R<0 or G<0) return SZ;
    if(POS>=N) return 0;
    int &ret = dp[POS][R][COL];
    if(~ret) return ret;
    int mn = 0;
    ret = SZ;
    if(COL==1) mn = min(arr[POS],arr[POS+1]);
    ret = min(ret,REC(POS+1,R-arr[POS+1],G,0)+mn);
    mn = 0;
    if(COL==0) mn = min(arr[POS],arr[POS+1]);
    ret = min(ret,REC(POS+1,R,G-arr[POS+1],1)+mn);

    return ret;

}

int main(int argc, const char **argv)
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    while(sf("%d %d %d",&N, &R, &G)==3)
    {
        REP(i,1,N) sf("%d",&arr[i]);
        mem(dp,-1);
        int RES = REC(1,R-arr[1],G,0);
        RES = min(RES,REC(1,R,G-arr[1],1));
        if(RES>=SZ)  RES = -1;
        pf("%d\n",RES);
    }
    return 0;
}




