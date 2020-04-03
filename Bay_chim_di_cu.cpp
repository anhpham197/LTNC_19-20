#include <iostream>
using namespace std;
int getMax (int a[], int n)
{
	int max = a[1];
	int i;
	for (i=2; i <= n; i++)
	{
		if (a[i] >= max)   max = a[i];
	}
	return max;
}
int main()
{
	int n; 
	cin >> n; 
	int ID [n];
	int count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0;
	for (int i=0; i < n; i++)
	{
		cin >> ID [i];
	}
	for (int i=0; i < n; i++)
	{
		if (ID[i] == 1) count1 ++;
		else if (ID[i] == 2) count2 ++;
		else if (ID[i] == 3) count3 ++;
		else if (ID[i] == 4) count4 ++;
		else count5 ++;
	}
	int count [5] = {count1, count2, count3, count4, count5};
	int max = getMax (count, 5);
	if (max == count1) cout <<"1";
	else if	(max == count2) cout <<"2";
    else if (max == count3) cout <<"3";
	else if (max == count4) cout <<"4";
	else cout <<"5";
	
	return 0;
}
