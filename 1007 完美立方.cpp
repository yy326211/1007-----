#include<iostream>
const int num=100;
using namespace std;
int main()
{
	int a,b,c,d,n;
	int ai[num],bi[num],ci[num],di[num];
	int i=0;
	cin>>n;
	{
		for(a=2;a<=n;a++)
		for(b=2;b<n;b++)
			for(c=3;c<n;c++)
				for(d=4;d<n;d++)
					if(a*a*a==b*b*b+c*c*c+d*d*d&&b<c&&c<d)
						{
							ai[i]=a;
							bi[i]=b;
							ci[i]=c;
							di[i]=d;
							i++;
					}
	}
	for(int j=0;j<i;j++)
			cout<<"Cube = "<<ai[j]<<", Triple = ("<<bi[j]<<","<<ci[j]<<","<<di[j]<<")"<<endl;
	system("pause");
	return 0;
}