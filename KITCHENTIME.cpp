#include <iostream>
using namespace std;

int main() {
    int t,x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        int count=0;
        for(int i=x;i<y;i++)
        {
            count++;
        }
        cout<<count<<endl;
    }
	// your code goes here
	return 0;
}
