#include<iostream>
#include<algorithm>
#include<string>
#include<fstream>

using namespace std;
string a,b,c;
int str2num(string &s){
	int num=0;
	for(int i=0;i<s.size();i++){
		if(s[i]!=','&&s[i]!='-'){
			num=num*10+s[i]-'0';
		}
	}
		if(s[0]=='-')
			return -num;
		else
			return num;
}
int main(){
	while(cin>>a>>b){
		cout<<str2num(a)+str2num(b)<<endl;	
	}
}
