#include<bits/stdc++.h>
using namespace std;

inline int phi(int x)
{
	int s=x;
	for(int i=2;i*i<=x;i++)
		if(x%i==0)
		{
			s=s/i*(i-1);
			while(x%i==0) x/=i;
		}
	if(x!=1) s=s/x*(x-1);
	return s;
}

int main(int argv,char* argc[])
{
    int x;
    sscanf(argc[1],"%d",&x);
    printf("Result : %d",phi(x));
    return 0;
}