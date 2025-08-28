#include<iostream>
using namespace std;
int main() {
    int x;
   cout<<"ENTER THE NUMBER TO CHECK DIVISIBLE BY 5 AND 11 : ";
   cin>>x;
   if (x%5==0){
    if (x%11==0){
        cout<<x<<" IS DIVISIBLE BY 5 AND 11";
    }
    else{
        cout<<x<<" IS DIVISIBLE BY 5 AND NOT DIVISIBLE BY 11";
    }
   }
   else if (x%11==0){
    cout<<x<<" IS NOT DIVISIBLE BY 5 AND DIVISIBLE BY 11";
   }
   else {
    cout<<x<<" IS NOT DIVISIBLE BY 5 AND 11";
   }
  return 0;
}
