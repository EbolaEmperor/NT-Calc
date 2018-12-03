#include<bits/stdc++.h>
using namespace std;

int imageroot;
struct Comp
{
    int r,i,p;
    Comp(int _r=0,int _i=0,int _p=0):r(_r),i(_i),p(_p){}
    Comp operator * (const Comp &b){return Comp((1ll*r*b.r+1ll*i*b.i%p*imageroot)%p,(1ll*r*b.i+1ll*i*b.r)%p,p);}
    friend Comp operator ^ (Comp a,int b)
    {
        Comp ans(1,0,a.p);
        for(;b;b>>=1,a=a*a)
            if(b&1) ans=ans*a;
        return ans;
    }
};

int Pow(int a,int b,int p)
{
    int ans=1;
    for(;b;b>>=1,a=1ll*a*a%p)
        if(b&1) ans=1ll*ans*a%p;
    return ans;
}

int gcd(int a,int b){return b==0?a:gcd(b,a%b);}