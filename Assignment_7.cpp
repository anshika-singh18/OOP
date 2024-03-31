#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main(){
	string state, ser;
	int population,n;

	cout<<"Enter total number of states: ";
	cin>>n;

	map<string, int>mp;

	for (int i=0; i<n; i++){
		cout<<"Enter name of state: ";
		cin>>state;
		cout<<"Enter name of population: ";
		cin>>population;
		mp.insert({state,population});
	}

	map<string, int>::iterator it, itr;

	for (itr==mp.begin(); itr!=mp.end();itr++){
		cout<<itr->first<<"\t\t"<<itr->second<<endl;
	}

	cout<<"Enter the state to find: ";
	cin>>ser;

	it=mp.find(ser);

	if (it==mp.end()){
		cout<<"Record not found";
	}

	else{
		cout<<it->first<<"\t"<<it->second<<endl;
	}


}