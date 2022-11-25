#include<iostream>
using namespace std;
class Temperature
{
public:
  int Temperature;
void SetData(int t)
{
Temperature = t;
}
float ConverttoCelsius()
{
return ((Temperature - 32) /1.8);
}
float ConverttoFahrenheit()
{
return (1.8 * Temperature + 32);
}
};
int main()
{
Temperature T1,T2;
float t,far,cel;
cout<<"Enter Temperature"<<endl;
cin>>t;
T1.SetData(t);
T2.SetData(t);
far=T1.ConverttoCelsius();
cel=T2.ConverttoFahrenheit();
cout<<"Temperature in Celsius is"<<far<<endl;
cout<<"Temperature in Fahrenheit is"<<cel<<endl;
}
