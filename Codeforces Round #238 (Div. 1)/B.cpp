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
const int SZ = 1000000 + 7;

//int X[]={0,-1,-1,-1,0,1,1,1};
//int Y[]={-1,-1,0,1,1,1,0,-1};
//int X[]={-1,0,1,0};
//int Y[]={0,1,0,-1};

typedef long long Long;
typedef double dd;
bool data[SZ];

int main(int argc, const char **argv)
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int test, tmp, cnt;
    sf("%d",&test);
    mem(data,true);
    cnt = 0;
    REP(i,1,test)
    {
        sf("%d",&tmp);
        data[tmp] = false;
        if(!data[(SZ-6)-tmp]) cnt++;
    }
    pf("%d\n",test);
    REP(i,1,(SZ-7))
    {
        if(data[i] and data[(SZ-6)-i] and cnt)
        {
            pf("%d %d ",i,(SZ-6)-i);
            cnt--;
        }
        if(data[i] and !data[(SZ-6)-i]) pf("%d ",i);
    }
    return 0;
}
