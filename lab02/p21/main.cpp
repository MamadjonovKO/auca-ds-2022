#include <bits/stdc++.h>

template <typename C>
int sz(const C &c) { return static_cast<int>(c.size()); }

using namespace std;

int main()
{
    iostream::sync_with_stdio(false);

    int biggestEnd = 0;
    int leftCoord, height, rightCoord;
    vector<int> bHeight(10000);

    while (cin >> leftCoord >> height >> rightCoord)
    {
        if (biggestEnd < rightCoord)
        {
            biggestEnd = rightCoord;
        }
        for (int i = leftCoord; i < rightCoord; i++)
        {
            bHeight[i] = max(bHeight[i], height);
        }
    }
    
    int best = bHeight[1];
    cout << "1 " << best;
    
    for (int i = 2; i < biggestEnd; ++i)
    {
        if (best != bHeight[i])
        {
            cout << ' ' << i << ' ' << bHeight[i];
            best = bHeight[i];
        }
    }
    cout << ' ' << biggestEnd << endl;
}