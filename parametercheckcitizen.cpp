
#include<bits/stdc++.h>
using namespace std;
class Demo
{
	char name[50],address[50];
	int citizenship_number,age;
	public:
		Demo(char n[],char ad[],int a,int cn)
		{
			strcpy(name,n);
			strcpy(address,ad);
			citizenship_number=cn;
			age=a;
			
		}
		void display()
		{
			cout<<"Name ="<<name<<endl;
			cout<<"Address ="<<address<<endl;
			cout<<"Age ="<<age<<endl;
			cout<<"Citizenship Number ="<<citizenship_number<<endl;
		}
};
int main()
{
	char nm[50],ad[50];
	int cn,a;
	cout<<"Enter name"<<endl;
	cin>>nm;
	cout<<"Enter address"<<endl;
	cin>>ad;
	cout<<"Enter age"<<endl;
	cin>>a;
cn=0;
 if (a>18)
 {
 	cout<<"Enter Citizenship number"<<endl;
 	cin>>cn;
 }
 Demo d(nm,ad,a,cn);
 d.display();
}
