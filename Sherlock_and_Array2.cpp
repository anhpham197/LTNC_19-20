#include <iostream>
#define mn 100005
using namespace std;
int T, a[mn], s[mn] , n, kt;
int main()
{
	cin >> T;
	while(T--)
	{
		cin >> n;                
        kt=0;
		for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            s[i]=s[i-1]+a[i];
        }
        for(int i=1;i<=n;i++)
        if(s[i-1]==s[n]-s[i])
        {
            kt=1;
            cout<<"YES\n";
            break;
        }
        if(!kt) cout<<"NO\n";
	}
	return 0;
}
