#include <iostream>
using namespace std;

int main() {
    int t,x,y,sub;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>x>>y;
        if(x>y)
        {
          sub = x-y;  
        }
        else
        {
            sub = y-x;
        }
        cout<<sub<<endl;
    }
	// your code goes here
	return 0;
}
