#include <iostream>
#include <vector>
 
using namespace std;
 
int main()
{
    int n, x;
    int counter;
    vector <int> a[10001];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> x;
            a[i].push_back(x);
        }
    }
    int temp, k;
    for (int i = 0; i < n; i++)
    {
        counter = 0;
        for (int j = a[i][0]; j <= a[i][1]; j++)
        {
            int b = j;
            temp = 0;
            while (b != 0)
            {
                k = b % 10;
                b = b / 10;
                temp = temp * 10 + k;
            }
            if (temp == j)
                counter++;
        }
        cout << counter << endl;
    }
}
