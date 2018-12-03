#include<bits/stdc++.h>
#include "base.h"
using namespace std;

int main(int argv,char* argc[])
{
    int a,b,p;
    sscanf(argc[1],"%d",&p);
    sscanf(argc[2],"%d",&a);
    sscanf(argc[3],"%d",&b);
    printf("Result : %d",Pow(a,b,p));
    return 0;
}