//this program calculate the expenses 
#include<iostream>
using namespace std;
int main(){
    int size;
    cout << "How many expenses do you have? ";
    cin>>size;
    if(size<=0){
        cout << "Please enter a positive number\n";
        return 0;
    }
    int budget=200;
    double *expenses=new double[size];
    double total=0;
    double average=0;
    cout<<"Enter your expenses =";
    for(int i=0;i<size;i++){
           cin>>expenses[i];
        
   while(expenses[i]<0){
cout << "Please enter a positive number: ";
       cin >> expenses[i];
   }
        total+=expenses[i];
    }
     if(total>budget){
            cout<<"Warning: You exceeded your budget!"<<"\a"<<"\n";
        }
          average=total/size;
    cout<<"Total of expenses="<<total<<"\n";
     double remaining=budget-total;
    cout <<"The remaining of expenses="<<remaining <<"\n";
        cout<<"The average of expenses="<<average<<"\n";

double largest=expenses[0];
    for(int i=0;i<size;i++){
        if(expenses[i]>largest)
            largest=expenses[i];
    }
    cout<<"the largest expenses is ="<<largest<<"\n" ;

  
   delete []expenses;
}
