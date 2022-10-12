#include <bits/stdc++.h>

template <typename C>
int sz(const C &c) { return static_cast<int>(c.size()); }

using namespace std;

int main()
{
    iostream::sync_with_stdio(false);

    int numOfRoads, numOfInt;
    int suffix;

    int count = 1;
    while (cin >> numOfRoads >> numOfInt)
    {
        if(numOfRoads == 0 && numOfInt == 0)
        {
            break;
        }

        numOfRoads--;
            
        suffix = numOfRoads / numOfInt;
        
        if(suffix > 26)
        {
            cout << "Case " << count++ << ": " << "impossible" << endl;
        }
        else
        {
             cout << "Case " << count++ << ": " << suffix << endl;
        }
    }
}