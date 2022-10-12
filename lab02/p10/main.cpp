#include <bits/stdc++.h>

template <typename C>
int sz(const C &c) { return static_cast<int>(c.size()); }

using namespace std;

int main()
{
    iostream::sync_with_stdio(false);

    int numOfTest;
    cin >> numOfTest;

    for (int i = 1; i <= numOfTest; i++)
    {
        int numOfWalls;
        cin >> numOfWalls;
        int arr[50] = {0};

        for (int j = 0; j < numOfWalls; j++)
        {
            int wallHeight;
            cin >> wallHeight;
            arr[j] = wallHeight;
        }

        int highJump = 0;
        int lowJump = 0;

        for (int k = 0; k < numOfWalls - 1; k++)
        {

            if(arr[k + 1] < arr[k])
            {
                lowJump++;
            }

            if(arr[k + 1] > arr[k])
            {
                highJump++;
            }
        }

        cout << "Case " << i << ": " << highJump << " " << lowJump << endl;
    }
}