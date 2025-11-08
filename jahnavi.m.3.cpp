#include<iostream>
using namespace std;
class car {
    public:
    sring model;
    sring company;
    float price;
    void display(){
        cout <<"model:"<< model
             <<",company:"<<company;
             <<",price:"<< price << endl;
    }
};int main() {
    car c1,c2,c3;
    c1.model="Innova";
    c1.company="Toyota";
    c1.price=2000000;
    c2.model="city";
    c2.company="Honda";
    c2.price=1200000;
    c3.model="i20";
    c3.company="Hyundai";
    c3.price=800000;
    c1.display();
    c2.display();
    c3.display();
    return 0;

}
