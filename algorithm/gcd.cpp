#include<bits/stdc++.h>
#include "base.h"
using namespace std;

int main(int argv,char* argc[])
{
    int a,b,p;
    sscanf(argc[1],"%d",&a);
    sscanf(argc[2],"%d",&b);
    printf("Result : %d",gcd(a,b));
    return 0;
}