#include<iostream>
#include<string>
//using namespace std; do std declaration necessary?
using std::cin;
using std::cout;
using std::endl;
int main(){
	string str = "hello";
	cout<<"int ="<<sizeof(int)<<"\n";
	cout<<"long = "<<sizeof(long)<<"\n";
	cout<<"float = "<<sizeof(float)<<"\n";
	cout<<"double = "<<sizeof(double)<<"\n";
	cout<<"char = "<<sizeof(char)<<"\n";
	cout<<"str = "<<sizeof(str)<<endl;
	return 0;
}
