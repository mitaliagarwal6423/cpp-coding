//  We have populated the solutions for the 10 easiest problems for your support.
// Click on the SUBMIT button to make a submission to this problem.

#include<iostream>
using namespace std;
int main(){
     int t;
     cin>>t;
     while(t--){
          int a,b,c,d;
          cin>>a>>b;
          if (a>=b){
               c=a%b;
               cout<<"\n"<<c;
          }
          else
          {d=a%b;
          cout<<"\n"<<d;}
     }
     return 0;
}
