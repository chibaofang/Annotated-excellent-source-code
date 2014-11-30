#include<iostream>
using namespace std;

int main(){
	int d[] = {1,2,3};
	char c[] = "hello";
	char *pc = c;
	
	cout<<"size of d = "<<sizeof(d)<<"\n"<<"d ="<<d<<endl;//整型数组名代表数组第一个元素所在的地址;sizeof()则表示的是整个数组的大小
	cout<<"size of c = "<<sizeof(c)<<"\n"<<"c ="<<c<<endl;//字符型数组的名输出后是整个数组的内容，这一点和整型数组有差异;这是因为“cout”对其进行了一定的操作。
	cout<<"size of c = "<<sizeof(c)<<"\n"<<"c ="<<c<<endl;
	cout<<pc<<endl;
	cout<<"size of c = "<<sizeof(c)<<"\n"<<"c ="<<c<<endl;
	pc++;
	cout<<"pc++ = "<<pc<<endl; 
	cout<<static_cast<void*>(c)<<endl;
	cout<<static_cast<void*>(pc)<<endl;//输出字符型数组首个元素地址的办法
	
	return 0;
}
