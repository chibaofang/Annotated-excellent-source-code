#include<iostream>
using namespace std;
struct student
{
	char name[15];
	int age;
	int grade;
};
class teacher
{
	char name;
	char className[15];
	int grade;
public:
	void setGrade(int number){
		grade=number;
	}
	void printName()
	{
		cout<<grade<<endl;
	}
};
int main(){
	struct student	A=
	{"male",
	  15,
	  3
	};
	teacher Mary;
//	cout<<A.name<<endl;
	int a = 5;
//	cout<<"sizeof(a)="<<sizeof(a)<<endl;
///	cout<<"sizeofa[]"<<sizeof(a[1])<<endl;
	Mary.printName();
	Mary.setGrade(a);
	Mary.printName();
	
	return 0;
}


