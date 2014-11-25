#include<iostream>
#include<fstream>
#include<iomanip> //?
#include<cstdlib> //used for "exit(1)"
#include<string>
using namespace std;

int main(){
	
	ifstream infile("forin");
	ofstream outfile("forout");

	if(!infile){
		cout<<"Unable to open infile!"<<endl;
		exit(1);
	}
	//if no outfile found, Linux would creat one.
	if(!outfile){
		cout<<"Unable to open outfile"<<endl;
		exit(1);
	}
	string str;
//	while(getline(infile,str)){
//		cout<<str<<"\n";
//	
	string str;
	while(getline(cin,str)){
		//int i;
		for(int i=0;i<sizeof(str);i++){
			new_str[i] = str[sizeof(str)-1];
		}
	//	cout<<"the sequence you input is:"<<str<<endl;
		cout<<"the sequence reversed is:"<<new_str<<endl;

	}		
	return 0;
}
