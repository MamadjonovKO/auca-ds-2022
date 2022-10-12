#include <bits/stdc++.h>

template <typename C>
int sz(const C &c) { return static_cast<int>(c.size()); }

using namespace std;

int main()
{
    iostream::sync_with_stdio(false);

    int num1, num2;

    cin >> num1 >> num2;
    while (num1 != -1 && num2 != -1)
    {   
        int stepsUp, stepsDown;

        if(num1 > num2)
        {
            stepsUp = num2 + 100 - num1;
            stepsDown = num1 - num2;
        }

        else
        {
            stepsUp = num1 + 100 - num2;
            stepsDown = num2 - num1;
        }

        int res = min(stepsUp, stepsDown);

        cout << res << endl;
        cin >> num1 >> num2;
    }
}