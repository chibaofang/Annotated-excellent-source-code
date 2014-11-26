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
	string new_str;	
	while(getline(cin,str)){
		cout<<"the sequence you input is:"<<str<<endl;
		for(int i=0;i<str.size();i++){
			char temp = str[str.size()-i];
				cout<<temp<<"\n";
				str[str.size()-i] = str[i];
				str[i] = temp;
		}		
			cout<<"the sequence reversed is:"<<str<<endl;
	}		
	return 0;
}
