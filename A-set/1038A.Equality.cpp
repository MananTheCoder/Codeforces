/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 105
#define inf 10000000000000000

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d ",n)
#define pff(n,m) printf("%d %d\n",n,m)
#define pffl(n,m) printf("%I64d %I64d\n",n,m)
#define pfl(n) printf("%I64d\n",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<int,int>

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);

    int i,j,k;
    int n,m;

    string s;

    int a[26];
    memset(a,0,sizeof(a));

    sff(n,k);
    cin>>s;

    for(i=0;i<n;i++)
    {
        a[s[i]-'A']++;
    }

    int mn=n;
    for(i=0;i<k;i++)
        mn=min(mn,a[i]);

    pf(mn*k);


    return 0;
}
