#include<iostream>
using namespace std;
class book{
    public:
    string title;
    string authors[2];
    float price;
    public:
    book(string t,string a1,string a2,double p){
        title=t;
        author[0]=a1;
        author[1]=a2;
        price=p;
    }
    void display() {
        cout <<"book:"<title<<",Authors:"<<authors[0]<<","<<authors[1]<<",Price"<<price<< endl;
    }
    double getprice(){return price;}
};
book expensivebook(book b[],int n){
    int index=0;
    double maxprice=b[0].getprice();
    for (int i=1;i<n;i++){
        if(b[i].getprice()>maxprice){
            maxprice=b[i].getprice();
            index=i;
        }
    }
     return b[index];
}
int main(){
    book b[3]={
    book("c++","Bjarne strouustrup","stralstrup",500),
    book("javaprogramming","james","gosling",400),
    book("pythonprogramming","guido","rossum",600)
    };
    for(int i=0;i<3;i++)b[i].display();
    book exp =expensivebook (b,3);
    cout<<"most expensive book:"<< exp.getprice()<<endl;
    return 0;
}
