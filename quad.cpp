#include <iostream>
#include<math.h>
using namespace std;
void getroot(int,int,int);
class Quadratic {
	int a,b,c;
	public:
		void SetData(int a1,int b1,int c1)
		{
			a=a1;
			b=b1;
			c=c1;
			
		}
		void DisplayData()
		{
		getroots( a, b, c);
		}
		void getroots(int a,int b,int c)
		{
			int determinant,roots[2];
			determinant =((b*b)-4*a*c);
			if (determinant >=0){
			
			roots[0]=(-b+sqrt(determinant))/2*a;
				roots[1]=(-b-sqrt(determinant))/2*a;
				cout<<"Real roots are:"<<roots[0]<<roots[1];
		}
		else
		{
			cout<<"The roots are imaginary";
		}
		
		}
		int main()
		{
			int a,b,c,roots[2];
			Quadratic q;
			cout<<"Enter values of a,b and c"<<endl;
			cin>>a>>b>>c;
			q.SetData(a,b,c);
			q.DisplayData();
		}
};
