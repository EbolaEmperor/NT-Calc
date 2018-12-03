#include<bits/stdc++.h>
#include "base.h"
using namespace std;

int main(int argv,char* argc[])
{
    int n,a,p;
    sscanf(argc[1],"%d",&p);
    sscanf(argc[2],"%d",&n);n%=p;
    if(p==2){printf("Result : 1");return 0;}
    if(Pow(n,(p-1)/2,p)==p-1){printf("No root");return 0;}
    do{
        a=rand()%p;
        imageroot=(1ll*a*a-n+p)%p;
    }while(Pow(imageroot,(p-1)/2,p)!=p-1);
    Comp t=Comp(a,1,p)^((p+1)/2);
    int x1=t.r,x2=p-x1;
    if(x2<x1) swap(x1,x2);
    if(x1==x2) printf("Result : %d",x1);
    else printf("Result : %d or %d\n",x1,x2);
    return 0;
}