#include<iostream>
#include<string>
#include<vector>
using namespace std;//here this sentence is necessary.(I do not know why...). Without it, compiler would say that "str" was not declared.
using std::cin;
using std::cout;
using std::endl;
int main(){
	cout<<"int ="<<sizeof(int)<<"\n";
	cout<<"long = "<<sizeof(long)<<"\n";
	cout<<"float = "<<sizeof(float)<<"\n";
	cout<<"double = "<<sizeof(double)<<"\n";
	cout<<"char = "<<sizeof(char)<<"\n";
	cout<<"str = "<<sizeof(string)<<"\n";
	vector<int> a(1);
	vector<float> b(1);
	vector<double> c(1);
	cout<<"vector<int> = "<<sizeof(a)<<"\n";
	cout<<"vector<float> = "<<sizeof(b)<<"\n";
	cout<<"vector<char> = "<<sizeof(c)<<endl;
	return 0;
}
