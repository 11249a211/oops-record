#include<iostream>
#include<string>
using namespace std;
class student{
    string name;
    int roll;
    int marks[5];
    static int count;
    public:
    student(string n,int r,int m[]){
        name=n;
        roll=r;
        for(int i=0;i<5;i++)
        marks[i]=m[i];
        count++;
       }
       student(){
        cout<<"student"<<name<<"removed"<<endl;
       }
       inline int totalmarks()
       {
        int total=0;
        for(int i=0;i<5;i++)total+=marks[i];
        return total;
       }
       string getname(){return name;}
       static void showcount()
       {
        cout<<"totalstudents:"<<count<<endl;
       }
};
void printgrade(student s){
    int total=s.totalmarks();
    cout<<s.getname()<<"s.grade:";
    if (total>=450)cout<<"A+"<<endl;
    else if (total>=400)cout<<"A"<<endl;
    else if (total>=350)cout<<"B"<<endl;
    else cout<<"C"<<endl;
}
student topper (student s[],int n){
    int maxtotal=s[0].totalmarks();
    int index=0;
    for(int i=1;i<n;i++){
        if(s[i].totalmarks()>maxtotal){
            maxtotal=s[i].totalmarks();
            index=i;
        }
    }
     return s[index];
}
  int student::count=0;
  int main(){
    int m1[5]={90,85,88,92,80};
    int m2[5]={78,80,82,79,85};
    int m3[5]={95,90,93,88,92};
  student s[3]={
    student("janu",101,m1),
    student("manu",102,m2),
    student("sravs",103,m3)
  };
   for(int i=0;i<3;i++)printgrade(s[i]);
   student t=topper(s,3);
    cout<<"topper:"<<t.getname()<<endl;
    student::showcount();
    return 0;
};
