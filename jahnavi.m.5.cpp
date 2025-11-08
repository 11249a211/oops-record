#include<iostream>
using namespace std;
class employee {
    public:
    int employeeid;
    string name;
    float salary;
    void setemployee(int id, string n, float s){
        employeeid=id;
        name=n;
        salary=s;
    }
    void displayemployee();
};
void employee:: displayemployee(){
    cout <<"employeeid:"<< employeeid
         <<",name:"<<name
         <<",salary:"<< salary << endl;
}
int main(){
    employee e1,e2;
    e1.setemployee(101,"ram",5000.75);
    e2.setemployee(102,"nani",6200.50);
    e1.displayemployee();
    e2.displayemployee();
    return 0;
}
