#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int n, a[3];
    cin>>n;
    while(n--)
    {
      for(int i=0;i<3;i++)
      {
          cin>>a[i];
      }
      int t = sizeof(a) / sizeof(a[0]);
      sort(a,a+t);
      cout<<a[1]<<endl;
    }
    
    

    
	// your code goes here
	return 0;
}
