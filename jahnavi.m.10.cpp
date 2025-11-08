#include<iostream>
using namespace std;
class employee{
    string name; 
    double salary;
    static int empcount;
    public:
    employee(sting n,double (s)){
        name=n;
        salary=s;
        empcount++;
    }
    employee(){
        cout<<name<<"removed"<<endl;
    }
    double getsalary(){return salary;}
    string getname(){return name;}
    static voidshowcount (){
        cout<<"total employees:"<< empcount << endl
    }
};
void compare (employee e1,employee e2){
    if (e1.getsalary() c2.get salary())
    cout<<e1.getname<<"earns more"<<endl;
else cout<<e2.getname<<"earns more"<<endl;
}
int employee:: emp count=0;
int main (){
    employee [3]={
        employee("janu",50000);
        employee("manu",60000);
        employee("sravs",55000);
    };
     compare (e[0],e[1]);
     employee :: showcount();
     return 0;
}
