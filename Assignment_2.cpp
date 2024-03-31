// //============================================================================
// //Develop a program in C++ to create a database of student’s information system containing the
// //following information: Name, Roll number, Class, Division, Date of Birth, Blood group, Contact
// //address, Telephone number, Driving license no. and other. Construct the database with
// //suitable member functions. Make use of constructor, default constructor, copy constructor,
// //destructor, static member functions, friend class, this pointer, inline code and dynamic
// //memory allocation operators-new and delete as well as exception handling.
// //============================================================================


#include <iostream>
#include <string>
using namespace std;

class Database
{
private:
    string name;
    int roll;
    string class_str;
    int division;
    string dob;
    string bloodgroup;
    string address;
    long int telephone;
    int static count;

public:
    Database()
    {
        name = "Parth";
        roll = 21205;
        class_str = "SE";
        division = 2;
        dob = "20/05/2003";
        bloodgroup = "B+";
        telephone = 81430;
        count++;
    }

    Database(string name, int roll, string class_str, int division, string dob, string bloodgroup, string address, int telephone)
    {

        this->name = name;
        this->roll = roll;
        this->class_str = class_str;
        this->division = division;
        this->dob = dob;
        this->bloodgroup = bloodgroup;
        this->address = address;
        this->telephone = telephone;
        count++;
    }

    Database(Database &d)
    {
        d.name = name;
        d.roll = roll;
        d.class_str = class_str;
        d.division = division;
        d.dob = dob;
        d.bloodgroup = bloodgroup;
        d.address = address;
        d.telephone = telephone;
        count++;
    }

    inline void input()
    {
        cout << "Enter the student name: ";
        cin >> name;
        cout << endl;
        cout << "Enter the student roll number: ";
        cin >> roll;
        cout << endl;
        cout << "Enter the student class: ";
        cin >> class_str;
        cout << endl;
        cout << "Enter the student division: ";
        cin >> division;
        cout << endl;
        cout << "Enter the student Date of Birth: ";
        cin >> dob;
        cout << endl;
        cout << "Enter the student Blood Group: ";
        cin >> bloodgroup;
        cout << endl;
        cout << "Enter the student address: ";
        cin >> address;
        cout << endl;
        cout << "Enter the student telephone number: ";
        cin >> telephone;
        cout << endl;
    }

    void display()
    {
        cout << " student name: " << name << endl;
        cout << " student roll number: " << roll << endl;
        cout << " student class: " << class_str << endl;
        cout << " student division: " << division << endl;
        cout << " student Date of Birth: " << dob << endl;
        cout << " student Blood Group: " << bloodgroup << endl;
        cout << " student address: " << address << endl;
        cout << " student telephone number: " << telephone << endl;
    }

    ~Database()
    {
        count--;
    }

    int static getcount()
    {
        return count;
    }
    friend class student_details;
};

class student_details
{
public:
    void give(Database &d)
    {
        cout << " student name: " << d.name << endl;
        cout << " student roll number: " << d.roll << endl;
        cout << " student class: " << d.class_str << endl;
        cout << " student division: " << d.division << endl;
        cout << " student Date of Birth: " << d.dob << endl;
        cout << " student Blood Group: " << d.bloodgroup << endl;
        cout << " student address: " << d.address << endl;
        cout << " student telephone number: " << d.telephone << endl;
    }
};

int Database ::count = 0;

int main()
{
    int n;
    cout << "Number of students in a class: ";
    cin >> n;
    Database *ptr = new Database[n];
    for (int i = 0; i < n; i++)
    {
        (*(ptr + i)).input();
    }
    for (int i = 0; i < n; i++)
    {
        (*(ptr + i)).display();
    }
    delete[] ptr;
}