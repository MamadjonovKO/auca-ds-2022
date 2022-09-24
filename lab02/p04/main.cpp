#include <bits/stdc++.h>

template <typename C>
int sz(const C &c) { return static_cast<int>(c.size()); }

using namespace std;

int main()
{
    iostream::sync_with_stdio(false);

    int numOfCases;
    cin >> numOfCases;
    for(int i = 0; i < numOfCases; i++) 
    {
        int num;
        cin >> num;
        int tensNum = (((((num * 567 / 9 + 7492) * 235) / 47) - 498) / 10) % 10;
        if(tensNum < 0)
        {
            tensNum *= -1;
        }
        cout << tensNum << endl;
    }
}