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
        vector<int> lumberjacks(10);

        for(int j = 0; j < 10; j++)
        {
            cin >> lumberjacks[j];
        }

        vector<int> ordered(10);
        vector<int> orderedInDecrease(10);
        ordered = lumberjacks;
        orderedInDecrease = lumberjacks;

        sort(ordered.begin(), ordered.end());
        sort(orderedInDecrease.begin(), orderedInDecrease.end(), greater<int>());

        if(i == 0)
        {
            cout << "Lumberjacks:" << endl;
        }
        
        if(lumberjacks == ordered || lumberjacks == orderedInDecrease)
        {
            cout << "Ordered" << endl;
        }
        else
        {
            cout << "Unordered" << endl;
        }
    }
}