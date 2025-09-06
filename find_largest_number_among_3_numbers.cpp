#include<iostream>
using namespace std;
int main() {
    int x,y,z,a;
   cout<<"ENTER THE 1ST NUMBER  : ";
   cin>> x;
   cout<<"ENTER THE 2ND NUMBER  : ";
   cin>> y;
   cout<<"ENTER THE 3RD NUMBER  : ";
   cin>> z;
   if (x<y){
    if (z<y){
        cout<<"THE LARGEST NUMBER IS "<< y;
    }
    else {
         cout<<"THE LARGEST NUMBER IS "<< z;
    }
   }
   else {
    if (z<x){
         cout<<"THE LARGEST NUMBER IS "<< x;
    }
    else {
         cout<<"THE LARGEST NUMBER IS "<< z;
    }
   }
  
    return 0;
}
