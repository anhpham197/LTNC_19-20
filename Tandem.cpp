#include <bits/stdc++.h>
using namespace std;
int main()
{
    int length, num;
    cin >> length >> num;
    string s;
    cin >> s;
    int x,y;
    vector <int> start;
    vector <int> end;
    for (int i=0; i<num; i++)
    {
        cin >> x >> y;
        start.push_back(x);
        end.push_back(y);
    }
    for (int i=0; i<num; i++)
    {
        int count = 1;
        int l = end[i] - start[i] + 1;
        string r = s.substr (start[i]-1, l);
        for (int j= end[i]; j <= s.length(); j+=l)
        {
            string q = s.substr (j,l);
            cout << q <<" ";
            if (q == r) count++;
            else break;
        }
        cout << count;
        cout << endl;
    }
    return 0;
}
