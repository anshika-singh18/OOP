#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class students{
	public:

	string name;
	int roll;
	int tele;

	void input(){
		cout<<"Enter name: ";
		cin>>name;
		cout<<"Enter roll number: ";
		cin>>roll;
		cout<<"Enter telephone number: ";
		cin>>tele;
	}

	void display(){
		cout<<"Name: "<<name<<endl;
		cout<<"Roll No.: "<<roll<<endl;
		cout<<"Telephone Number: "<<tele<<endl;
	}

	bool operator==(students x){
		if (roll==x.roll){
			return true;
		}
		else{
			return false;
		}
	}
};

bool compare(students x, students y){
	return x.roll<y.roll;
}

int main(){
	int n;
	cout<<"Enter total number of students in the class: ";
	cin>>n;

	students r[n];
	vector<students>vr;

	for (int i=0; i<n; i++){
		r[i].input();
		vr.push_back(r[i]);
	}

	sort(vr.begin(), vr.end(), compare);

	for (int i=0; i<n; i++){
		vr[i].display();
	}

	students s;
	cout<<"Enter the roll number you want to search: ";
	cin>>s.roll;

	vector<students>::iterator it;
	it=find(vr.begin(),vr.end(), s);

	if (it==vr.end()){
		cout<<"record not found"<<endl;
	}
	else{
		cout<<it->name;
		cout<<it->roll;
		cout<<it->tele;
	}
}