#include <iostream>
using namespace std;

int main() {
    int t,x;
    cin>>t;
    while(t--)
    {
        cin>>x;
        if(x<=70)
        {
            cout<<"0"<<endl;
        }
        else if(x>100)
        {
          cout<<"2000"<<endl;  
        }
        else
        {
            cout<<"500"<<endl;
        }
    }
	// your code goes here
	return 0;
}
