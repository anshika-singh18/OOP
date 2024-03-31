/*Problem Statement:
Implement a class Complex which represents the Complex Number data type. Implement the following operations:
1. Constructor (including a default constructor which creates the complex number 0+0i).
2. Overloaded operator+ to add two complex numbers.
3. Overloaded operator* to multiply two complex numbers.
4. Overloaded << and >> to print and read Complex Numbers.*/


#include <iostream>
using namespace std;

class complex{
    float real, img;
    public:
    complex(){
        real=0.0;
        img=0.0;
    }
    
    friend istream &operator>>(istream &i, complex &c){
        cout<<"Enter real part: ";
        i>>c.real;
        cout<<"Enter imaginary part: ";
        i>>c.img;
        return i;
    }

    friend ostream &operator<<(ostream &o, complex &c){
        o<<c.real<<"+("<<c.img<<")i"<<endl;
        return o;
    }

    complex operator+(complex c){
        complex r1;
        r1.real=real+c.real;
        r1.img=img+c.img;
        return r1;
    }

    complex operator-(complex c){
        complex r2;
        r2.real=real-c.real;
        r2.img=img-c.img;
        return r2;
    }

    complex operator *(complex c){
        complex r3;
        r3.real= (real*c.real)-(img*c.img);
        r3.img = (real*c.img)-(img*c.real);
        return r3;
    }
};

int main(){
    int ch;
    complex c1,c2,c3;
    cout<<"Enter first complex number: "<<endl;
    cin>>c1;
    cout<<"Enter second number: "<<endl;
    cin>>c2;

    do{
        cout<<"1. Addition."<<endl;
        cout<<"2. Subtraction."<<endl;
        cout<<"3. Multiplication."<<endl;
        cout<<"4. EXIT!"<<endl;

        cout<<"Enter your choice: ";
        cin>>ch;

        switch(ch){
            case 1:{
                c3=c1+c2;
                cout<<"Addition is: "<<c3<<endl;
                break;
            }

            case 2:{
                c3=c1-c2;
                cout<<"Subtraction is: "<<c3<<endl;
                break;
            }

            case 3:{
                c3=c1*c2;
                cout<<"Subtraction is: "<<c3<<endl;
                break;
            }

            case 4:{
                cout<<"Program ended!";
                break;
            }
        }
    }while(ch<4);
}