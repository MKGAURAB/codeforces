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
#define all(a) a.begin(),a.end()
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
const int SZ = 5000+7;

//int X[]={1,1,2,2,-1,-1,-2,-2};//knight move//
//int Y[]={2,-2,1,-1,2,-2,1,-1};//knight move//
//int X[]={0,-1,-1,-1,0,1,1,1};
//int Y[]={-1,-1,0,1,1,1,0,-1};
//int X[]={-1,0,1,0};
//int Y[]={0,1,0,-1};
Long csum[SZ];
bool color[SZ];

Long DP[SZ][SZ];
int N, M, K;

Long REC(int POS, int NUM)
{
    if(NUM>=K) return 0LL;
    Long &ret = DP[POS][NUM];
    if(~ret) return ret;
    ret = 0;
    if(POS+1<=N+1)
    ret = REC(POS+1,NUM);
    if(POS+M<=N+1)
    ret = max(ret,REC(POS+M,NUM+1)+csum[POS+M-1]-csum[POS-1]);

    return ret;
}
int main(int argc, const char **argv)
{
    //freopen("input.txt","r",stdin);
    //freoepn("output.txt","w",stdout);
    Long tmp;
    while(sf("%d %d %d",&N, &M, &K)==3)
    {
        REP(i,1,N)
        {
            sf("%I64d",&tmp);
            csum[i] = tmp;
            csum[i] += csum[i-1];
        }
        mem(DP,-1);
        Long RES = REC(1,0);
        pf("%I64d\n",RES);
    }
    return 0;
}



