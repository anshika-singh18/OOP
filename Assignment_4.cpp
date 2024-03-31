
#include <iostream>
#include <fstream>

using namespace std;

class student
{
    private:
        char name[30];
        int age;
    public:
        void write1(){
            cout<<"Enter name: ";
            cin.getline(name,30);         
        }

        void write2(){
            cout<<"Enter age: ";
            cin>>age;
        }

        void read(void)
        {
            cout<<"File content:"<<endl;
            cout<<"Name:"<<name<<" " <<"Age:"<<age<<endl;
        }
};

int main()
{
    student s;

    ofstream file;
    file.open("hello.txt",ios::out);
    if(!file)
    {
      cout<<"Error in creating file.."<<endl;
      return 0;
    }
    cout<<"File created successfully."<<endl;
    s.write1();
    s.write2();
    file.write((char*)&s,sizeof(s));
    file.close();
    cout<<"File saved and closed successfully."<<endl;


    ifstream file1;
    file1.open("hello.txt",ios::in);
    if(!file1)
    {
        cout<<"Error in opening file..";
        return 0;
    }
    file1.read((char*)&s,sizeof(s));
    s.read();
    file1.close();

    return 0;
}