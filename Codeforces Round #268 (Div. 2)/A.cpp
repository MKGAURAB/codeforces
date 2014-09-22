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

bool color[105];
int main(int argc, const char **argv)
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int N, p, q;
    while(sf("%d",&N)==1)
    {
        mem(color,false);
        sf("%d",&p);
        REP(i,1,p)
        {
            sf("%d",&q);
            color[q] = true;
        }
        sf("%d",&p);
        REP(i,1,p)
        {
            sf("%d",&q);
            color[q] = true;
        }
        bool flag = true;
        REP(i,1,N)
        {
            if(!color[i]) flag = false;
        }
        if(flag) pf("I become the guy.\n");
        else pf("Oh, my keyboard!\n");
    }
    return 0;
}




