#include <bits/stdc++.h>
#include <vector>

template <typename C>
int sz(const C &c) { return static_cast<int>(c.size()); }

using namespace std;

int main()
{
    iostream::sync_with_stdio(false);

    
    for(int numOfBanks, numOfDebutors; cin >> numOfBanks && cin >> numOfDebutors 
        && numOfBanks != 0 && numOfDebutors != 0;)
    {
        vector<int> v(numOfBanks);

        for(int i = 0; i < numOfBanks; i++)
        {
            cin >> v[i];
        }

        for(int j = 0; j < numOfDebutors; j++)
        {
            int debitorBank, creditorBank, debentureVal;

            cin >> debitorBank >> creditorBank >> debentureVal;
            v[debitorBank - 1] -= debentureVal;
            v[creditorBank - 1] += debentureVal;
        }

        bool possible = true;

        for(int k = 0; k < numOfBanks; k++)
        {
            if(v[k] < 0)
            {
                possible = false;
                break;
            }
        }

        if(possible)
        {
            cout << "S" << endl;
        }
        else
        {
            cout << "N" << endl;
        }
    }
    
}