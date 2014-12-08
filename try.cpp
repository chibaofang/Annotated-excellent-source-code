#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	float ratio = 0.047;
	float total_money=0;
	for (int i = 1; i<=10; i++)
	{
		total_money = (total_money+1000)*1.047;
	}
	cout<<setprecision(8)<<total_money<<endl;;
	return 0;
}
