#include<bits/stdc++.h>
#include "base.h"
using namespace std;

int main(int argv,char* argc[])
{
    int a,b,p;
    sscanf(argc[1],"%d",&p);
    sscanf(argc[2],"%d",&a);
    printf("Result : %d",Pow(a,p-2,p));
    return 0;
}