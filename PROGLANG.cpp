#include <iostream>
using namespace std;

int main() {
    int t,a,b,c,d,e,f;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d>>e>>f;
        if(a==c && b==d || a==d && b==c)
        {
            cout<<"1"<<endl;
        }
        else if(a==e && b==f || a==f && b==e)
        {
            cout<<"2"<<endl;
        }
        else
        {
            cout<<"0"<<endl;
        }
    }
	// your code goes here
	return 0;
}
