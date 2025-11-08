#include<iostream>
using namespace std;
class bankaccount{
    string holder;
    int accno;
    double balance;
    static double totalbalance;
    public:
    bankaccount(string h,int a,double b){
        holder=h;
        accno=a;
        balance=b;
        totalbalance+=b;
    }
    bankaccount(){
        cout<<"account of"<< holder <<"closed"<<endl;
    }
    void deposit(double amount){
        balance+=amount;
        totalbalance+=amount;
    }
    double getbalance(){return balance;}
    string getbalance(){return holder;}
    static void show totalbalance(){
        cout <<"totalbalance in bank:"<<totalbalance<<endl;
    }
};
bankaccount richestaccount(bankaccount arr[],int n){
    int index=0;
    double maxbal=arr[0].getbalance();
    for(int i=1;i<n;i++){
        if (arr[i].getbalance()> maxbal){
            maxbal=arr[i].getbalance();
            index=i;
        }
    }
    return arr[index];
}
int bankaccount:: totalbalance=0;
int main(){
    bankaccount b[3]={
    bankaccount("nani",101,5000),
    bankaccount("ram",102,10000),
    bankaccount("anu",103,8000)
    }
    b[0].deposit(2000);
    bankaccount::show totalbalance();
    bankaccount rich=richestaccount(b,3);
    cout<<"richest account holder:"<<rich getholder()endl;
    return 0;
}
