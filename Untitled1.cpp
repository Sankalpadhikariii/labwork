#include<iostream>
using namespace std;
template <class T>
T area(T len, T bre)
{
	return (len * bre);
}
int main()
{
	int l=4,b=5;
	int res=area(l,b);
	cout<<"Area is "<<res<<"sq units"<<endl;
float l1=4.143789760,b1=5.51611416;
	float res1=area(l1,b1);
	cout<<"Area is "<<res1<<"sq units"<<endl;

}
