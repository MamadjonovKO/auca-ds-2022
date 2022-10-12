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
        int sizeOfList;
        cin >> sizeOfList;
        vector<int> listOfSales(sizeOfList);
        int genSum = 0;

        for(int j = 0; j < sizeOfList; j++)
        {
            cin >> listOfSales[j];
            int sum = 0;
            for(int k = 0; k < j; k++)
            {
                if(listOfSales[j] >= listOfSales[k])
                {
                    sum += 1;
                }
            }
            genSum += sum;
        }
        
        cout << genSum << endl;
    }
}