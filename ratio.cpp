#include <iostream>
#include <math.h>
#include <vector>
#include <set>
#include <string>
using namespace std;
struct Ratio
{
	int nom;
	long den;
};
//шаблон вектор
struct ChainFraq
{ 
		int num;
		vector<int> a;
		double eps;
		double ChainFraqcreateN(double x,int num)
		{
			if(num!=0)
			{
			}
			else
			{
				a.push_back((int)x);
				x=x-a[0];
				num=1;
				do
				{
					a.push_back((int)(1.0/x));
					x=1.0/x-a[num];
					num++;
					cout<<a[num-1]<<"+1"<<endl;
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
		/*double ChainFraqcreaten1(int a,int y)
		{
			y=0;
			do
			{
				cout<<a[y]<<"+1"<<endl;
				y++;
			}
			while(a[y]==0);
		}*/
	
};
int main()
{
	double x,eps=0,o;
	cout<<"viberit iak bydete voditi chislo natisnit 1 iaksho za dopomogoy chisla natusnit 2 iaksho za dopomogoy kofizientiv\n";
	cin>>o;
	ChainFraq str;
	if(o==1)
	{
		cout<<"vedit chislo\n";
		cin>>x;
		int num=0;
		ChainFraq str;
		str.ChainFraqcreateN(x,num);
		str.ChainFraqcreate(x,eps);
	}
	if(o==2)
	{
		cout<<"vedit koeficienti\n";
		vector<int> a;
		int y=0,k;
		do
		{
			int y=0;
			cout<<y<<"=";
			cin>>k;
			a.push_back(k);
			y++;
		}
		while(k==0);
		//str.ChainFraqcreaten1(a,y);
		do
		{
			cout<<a[y]<<"+1"<<endl;
			y++;
		}
		while(a[y]==0);
		str.ChainFraqcreate(x,eps);
	}
	else 
	cout<<"pomilka";
	//string strChainFraqcreateN = to_string(str.ChainFraqcreateN(x,num));
	//string strChainFraqcreate = to_string(str.ChainFraqcreate(x,exp));
}
