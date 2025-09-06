#include<iostream>
using namespace std;
int main() {
    int x;
   cout<<"ENTER THE MARK TO FIND THE GRADE  : ";
   cin>> x;
   if (x>=90){
    cout<<"GRADE IS A";
   }
   else if (x>=80){
    cout<<"GRADE IS B";
   }
   else if (x>=70){
    cout<<"GRADE IS C";
   }
   else if (x>=60){
    cout<<"GRADE IS D";
   }
   else if (x>=50){
    cout<<"GRADE IS E";
   }
   else {
    cout<<"GRADE IS F";
   }
  
    return 0;
}
