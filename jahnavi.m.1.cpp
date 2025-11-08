#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int rollNo;
    float marks;
    void display(){
        cout <<"Name:"<<name
             <<",RollNo:"<<rollNo
             <<",Marks:"<<marks<<endl;
    }
};
int main(){
    student s1,s2,s3;
    s1.name="ratna";
    s1.rollNo=101;
    s1.marks=85.5;
    s2.name="madhu";
    s2.rollNo=102;
    s2.marks=93.2;
    s3.name="sravs";
    s3.rollNo=103;
    s3.marks=90.2;
    s1.display();
    s2.display();
    s3.display();
    return 0;    
}
