#include<iostream>
using namespace std;
int main() {
    int x;
   cout<<"ENTER THE YEAR TO CHECK LEAP YEAR OR NOT : ";
   cin>> x;
   if (x%4==0){
    if (x%100!=0){
        cout<<x<<" IS LEAP YEAR";
    }
    else {
        if(x%400==0){
            cout<<x<<" IS LEAP YEAR";
        }
        else {
            cout<<x<<" IS NOT LEAP YEAR";
        }
    }
   }
   else {
    cout<<x<<" IS NOT A LEAP YEAR";
   }
  return 0;
}
