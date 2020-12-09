#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct Ratio
{
	int nom;
	long den;
};
struct ChainFraq
{ 
		int num=100;
		double eps;
		*a = (int*) malloc(num * sizeof(int));
		double ChainFraqcreateN(double x,int num)
		{
			if(num!=0)
			{
			}
			else
			{
				*a = (int*) realloc(*a, (int)x * sizeof(int));
				x=x-a[0];
				num=1;
				do
				{
					*a = (int*) realloc(*a, (int)(1.0/x) * sizeof(int));
					x=1.0/x-a[num];
					num++;
					scanf("%f",a[num-1]<<"+1");
				}
				while(x==0.0);
			}
			return num;
		}	
		double ChainFraqcreate(double x,double eps)
		{
			eps=fabs(x-(int)x);
			return eps;
		}	
	
};
int main()
{
	float x,eps=0,o,num=100;
	printf("viberit iak bydete voditi chislo natisnit 1 iaksho za dopomogoy chisla natusnit 2 iaksho za dopomogoy kofizientiv\n");
	scanf("%f",o);
	if(o==1)
	{
		scanf("%f",x);
		int num=0;
		ChainFraq str;
		scanf("%f",str.ChainFraqcreateN(x,num),"+1");
		scanf("%f",str.ChainFraqcreate(x,eps));
	}
	if(o==2)
	{
		printf("vedit koeficienti\n");
		*a = (int*) malloc(num * sizeof(int));
		int y=0,k;
		do
		{
			int y=0;
			printf(y,"=");
			scanf("%i",k)
			*a = (int*) realloc(*a, k * sizeof(int));
			y++;
		}
		while(k==0);
		do
		{
			printf(a[y],"+1");
			y++;
		}
		while(a[y]==0);
	}
	else
	cout<<"pomilka";
	string output(str.ChainFraqcreateN(x,num)); 
	string output(str.ChainFraqcreate(x,eps));

}
