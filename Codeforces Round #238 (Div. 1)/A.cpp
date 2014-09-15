#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
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

const int inf = 2000000000;
const int SZ = 26 + 7;

//int X[]={0,-1,-1,-1,0,1,1,1};
//int Y[]={-1,-1,0,1,1,1,0,-1};
//int X[]={-1,0,1,0};
//int Y[]={0,1,0,-1};

typedef long long Long;
typedef double dd;

int main(int argc, const char **argv)
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    Long test, RES, Q, POS;
    while(sf("%I64d",&test)==1)
    {
        RES = 0;
        POS = 1;
        REP(i,1,(test*test))
        {
            sf("%I64d",&Q);
            if(i==POS)
            {
                RES += Q;
                POS += (test+1);
            }
        }
        RES %= 2;
        sf("%I64d",&Q);
        REP(i,1,Q)
        {
            sf("%I64d",&test);
            if(test==1 or test==2)
            {
                sf("%I64d",&POS);
                RES++;
                RES%=2;
            }
            else pf("%I64d",RES);
        }
        pf("\n");
    }
    return 0;
}
