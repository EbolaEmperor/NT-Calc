#include<bits/stdc++.h>
#include "base.h"
using namespace std;

int p;

int A(int n,int m)
{
    int ans=1;
    if(n<m) return 0;
    for(int i=n;i>n-m;i--)
        ans=1ll*ans*i%p;
    return ans;
}

int C(int n,int m)
{
    if(n<m) return 0;
    int ans=A(n,m),fac=1;
    for(int i=1;i<=m;i++)
        fac=1ll*fac*i%p;
    return 1ll*ans*Pow(fac,p-2,p)%p;
}

int main(int argv,char* argc[])
{
    int n,m;char ty;
    sscanf(argc[1],"%c",&ty);
    sscanf(argc[2],"%d",&n);
    sscanf(argc[3],"%d",&m);
    sscanf(argc[4],"%d",&p);
    if(ty=='A') printf("A(%d,%d) = %d",n,m,A(n,m));
    else if(ty=='C') printf("C(%d,%d) = %d",n,m,C(n,m));
    else printf("No such Arguments!");
    return 0;
}