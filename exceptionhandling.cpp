#include<iostream>
using namespace std;

int main()
{
		try
		{
			int a,b,c;
			cout<<"Enter Numerator"<<endl;
			cin>>a;
			cout<<"Enter Denominator"<<endl;
			cin>>b;
			if (b==0) 
				{
					throw(b);
				}
				c=a/b;
				cout<<"Result="<<c;
			}	
			catch(int e)
			{
				cout<<"Error!!!!!!!!!!!!!!!!!!!!!";
			}
}
