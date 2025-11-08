#include<iostream>
using namespace std;
class patient{
    public:
    int patientid:
    string name:
    string disease:
    void setpatient(int id,string n,string d){
        patientid=id;
        name=n;
        disease=d;
    }
    void showpatient();
};
  void patient::show patient(){
    cout<<"Patientid:"<<Patientid
        <<",Name:"<<name
        <<",Disease:"<<disease<<endl;
  }
     int main(){
        patient p1,p2;
        p1.setpatient(301,"deepu","fever");
        p2.setpatient(302,"madhu","diadetes");
        p1.showpatient();
        p2.showpatient();
        return0;
     }
