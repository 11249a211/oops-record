#include<iostream>
using namespace std;
class rectangle{
int length,width;
    public:
    rectangle(int l,int w){
        length=l;
        width=w;
    }
    inline int area(){return length*width;}
};
int main(){
    rectangle r1(5,4);
    rectangle r2(10,7);
    cout<<"area of r1:"<<r1 area()<<endl;
    cout<<"area of r2"<<r2.area()<<endl;
    return 0;
}
