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

VI adj[2*lim];
int col[2*lim],low[2*lim],tim[2*lim],timer;
int group_id[2*lim],components;
bool ans[lim];
stack<int>S;

void scc(int u)
{
    int i,v,tem;
    col[u]=1;
    low[u]=tim[u]=timer++;
    S.push(u);
    REP(i,0,SZ(adj[u])-1)
    {
        v=adj[u][i];
        if(col[v]==1)
            low[u]=min(low[u],tim[v]);
        else if(col[v]==0)
        {
            scc(v);
            low[u]=min(low[u],low[v]);
        }
    }

    if(low[u]==tim[u])
    {
        do
        {
            tem=S.top();
            S.pop();
            group_id[tem]=components;
            col[tem]=2;
        }
        while(tem!=u);
        components++;
    }
}
int TarjanSCC(int n)
{
    int i;
    timer=components=0;
    mem(col,0);
    while(!S.empty()) S.pop();
    REP(i,0,n-1) if(col[i]==0) scc(i);
    return components;
}

bool TwoSAT(int n)
{
    TarjanSCC(n);
    int i;
    for(i=0; i<n; i+=2)
    {
        if(group_id[i]==group_id[i+1])
            return false;
        if(group_id[i]<group_id[i+1])
            ans[i/2]=true;
        else ans[i/2]=false;
    }
    return true;
}
void add(int ina,int inb)
{
    adj[ina].pb(inb);
}

int makeinv(int x)
{
    if(x%2) return (x-1);
    return (x+1);
}

map<int, int> mp;
Long data[lim];

int main(int argc, const char **argv)
{
    int N, A, B, num;
    sf("%d %d %d",&N, &A, &B);
    REP(i,0,(N-1))
    {
        sf("%d",&data[i]);
        mp[data[i]] = i;
    }
    REP(i,0,(N-1))
    {
        if(mp.find(A-data[i])==mp.end())
        {
            add(2*i,2*i+1);
        }
        else
        {
            add(2*i,2*mp[A-data[i]]);
            add(2*i+1,2*mp[A-data[i]]+1);
        }
        if(mp.find(B-data[i])==mp.end())
        {
            add(2*i+1,2*i);
        }
        else
        {
            add(2*i+1,2*mp[B-data[i]]+1);
            add(2*i,2*mp[B-data[i]]);
        }
    }
    if(!TwoSAT(2*N)) pf("NO\n");
    else
    {
        pf("YES\n");
        REP(i,0,(N-1))
        {
            if(ans[i]) pf("0 ");
            else pf("1 ");
        }
        pf("\n");
    }
    return 0;
}
