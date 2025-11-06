#include<iostream>
using namespace std;
class Car{
    public:
    string brand;
    string price;
    Car(string brand, string price){
    this->price=price;
    this->brand=brand;
    }
    void display(){
    cout<<this->brand<<" "<<this->price<<endl;
    }
    };
    
    int main(){
    Car
    c1("BMW M4" , "164561445254616");
    Car
    c2("LAMBORGHINI AVENTADOR" , "14654949449841");
    c1.display();
    c2.display();
    
    return 0;
    }
