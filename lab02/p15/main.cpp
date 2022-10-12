#include <bits/stdc++.h>

template <typename C>
int sz(const C &c) { return static_cast<int>(c.size()); }

using namespace std;

int main()
{
    iostream::sync_with_stdio(false);

    int numOfTest;
    cin >> numOfTest;

    for(int i = 1; i <= numOfTest; i++)
    {
        vector<string> webSite(10);
        vector<int> webRank(10);
        for(int j = 0; j < 10; j++)
        {
            string webSiteName;
            int rank;

            cin >> webSiteName >> rank;
            webSite[j] = webSiteName;
            webRank[j] = rank;
        }
        int max = 0;
        for (auto item : webRank)
        {
            if(item > max)
            {
                max = item;
            }
        }

        cout << "Case #" << i << ":" << endl;
        for(int k = 0; k < 10; k++)
        {
            if(webRank[k] == max)
            {
                cout << webSite[k] << endl;
            }
        }
    }

}