#include <bits/stdc++.h>

template <typename C>
int sz(const C &c) { return static_cast<int>(c.size()); }

using namespace std;

int main()
{
    iostream::sync_with_stdio(false);

    int numOfTest;
    cin >> numOfTest;

    for(int i = 0; i < numOfTest; i++)
    {
        int numOfStores;
        cin >> numOfStores;
        int arr[numOfStores];
        for (int j = 0; j < numOfStores; j++)
        {
            int num;
            cin >> num;
            arr[j] = num;
        }

        int len = sizeof(arr) / sizeof(arr[0]);
        sort(arr, arr + len, greater<int>());

        int sum = 0;

        for (int k = 0; k < len - 1; k++)
        {
            sum += arr[k] - arr[k+1];
        }

        cout << sum * 2 << endl;        
        

        
    }
}