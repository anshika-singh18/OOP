#include <iostream>
using namespace std;

class Publication{

private:
string title;
float price;

public:
Publication(){
title="Assignment";
price=299;
}
void getdetails(){
cout<<"Enter the title: ";
cin>>title;

cout<<"Enter the price: ";
cin>>price;
}

void display(){
    
if(price<0){
    try{
        throw "Price cannot be negative!";
    }
    catch (const char* s){
        cout<<"Exception handled: "<<s<<endl;
        cout<<"The title is: 0"<<endl;
        cout<<"The price is: 0"<<endl;        
    }
}
else{
    cout<<"The title is: "<<title<<endl;
    cout<<"The price is: "<<price<<endl;
}
}

~Publication(){
cout<<"Publication Destructor"<<endl;
}
};


class book : public Publication {
int pagecount;

public:
book(){
pagecount=400;
}

void getdetails(){
Publication::getdetails();
cout<<"Enter the page count: ";
cin>>pagecount;
}

void display(){
// Publication::display();
//exception handling
if (pagecount<0){
    try{        
        throw "Page count cannot be negative!";
   }
    catch (const char* str){
        cout<<"Exception handled: "<<str<<endl;
        cout<<"The title is: 0"<<endl;
        cout<<"The price is: 0"<<endl; 
        cout<<"The page count is: 0"<<endl;
    }
}
else{
    Publication::display();
    cout<<"The page count is: "<<pagecount<<endl;
}

}

~book(){
}
};


class tape : public Publication {
float tapetime;

public:
tape(){
tapetime=4.5;
}

void getdetails(){
Publication::getdetails();
cout<<"Enter the duration of the tape: ";
cin>>tapetime;
}

void display(){

if (tapetime<0){
    try{        
        throw "Playing time of tape cannot be negative!";
   }
    catch (const char* str){
        cout<<"Exception handled: "<<str<<endl;
        cout<<"The title is: 0"<<endl;
        cout<<"The price is: 0"<<endl; 
        cout<<"The playing time is: 0"<<endl;
    }
}
else{
    Publication::display();
    cout<<"The duration of tape is: "<<tapetime<<endl;
}
;
}

~tape(){
}
};

int main() {

int ch;
do{
    cout<<"1. BOOK"<<endl;
    cout<<"2. TAPE"<<endl;
    cout<<"3. EXIT"<<endl;

    cout<<"\n Enter your choice: ";
    cin>>ch;

    switch(ch){
        case 1:{
            book b;
            b.getdetails();
            b.display();
            break;
        }

        case 2:{
            tape t;
            t.getdetails();
            t.display();
            break;           
        }

        case 3: {
            cout<<"Program ended"<<endl;
            break;
        }
    }
}while(ch<3);


return 0;
}