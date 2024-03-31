#include <iostream>
using namespace std;

template<class T>
class sorting{
    public:

    T a[50];
    int x;

    void input(){
        cout<<"Enter total number of elements: ";
        cin>>x;
        for (int i=0; i<x; i++){
            cout<<"Enter the element: ";
            cin>>a[i];
        }
    }

    void selection_sort(){
        T temp;
        for (int i=0; i<x; i++){
            for (int j=i+1; j<x; j++){
                if (a[i]>a[j]){
                    temp=a[j];
                    a[j]=a[i];
                    a[i]=temp;
                }
            }
        }
    }

    void display(){
        for (int i=0; i<x; i++){
            cout<<a[i]<<" ";
        }
    }
};

int main(){
    sorting<int>i;

    i.input();
    i.selection_sort();
    i.display();
}