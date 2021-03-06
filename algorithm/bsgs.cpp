#include<bits/stdc++.h>
using namespace std;

typedef long long LL;
const int hs=233173,M=31700;
int Hash[hs],state[M],val[M],tot=0,ha;

void push(int x,int p)
{
    int a=x%hs;
    while(Hash[a])
    {
        if(state[Hash[a]]==x) return;
        a++;if(a==hs) a=0;
    }
    Hash[a]=++tot;
    state[tot]=x;
    val[tot]=p;
}

int find(int x)
{
    int a=x%hs;
    while(state[Hash[a]]!=x)
    {
        if(!Hash[a]) return -1;
        a++;if(a==hs) a=0;
    }
    return val[Hash[a]];
}

void ExGcd(LL a,LL b,LL &x,LL &y)
{
    if(b==0){x=1;y=0;return;}
    ExGcd(b,a%b,x,y);
    LL t=x;x=y;
    y=t-(a/b)*y;
}

int BSGS(int a,int b)
{
    int sq=ceil(sqrt(ha)),base=1;
    for(int i=0;i<sq;i++)
    {
        push(base,i);
        base=1ll*base*a%ha;
    }
    int now=1;LL d,y;
    for(int i=0;i<sq;i++)
    {
        ExGcd(now,ha,d,y);
        d=(d%ha+ha)%ha;
        d=1ll*d*b%ha;
        int res=find(d);
        if(~res) return i*sq+res;
        now=1ll*base*now%ha;
    }
    return -1;
}

int main(int argv,char* argc[])
{
    int T,a,b;
    sscanf(argc[1],"%d",&a);
    sscanf(argc[2],"%d",&b);
    sscanf(argc[3],"%d",&ha);
    int ans=BSGS(a,b);
    if(ans==-1) printf("No Solution!");
    else printf("Result : %d",ans);
    return 0;
}