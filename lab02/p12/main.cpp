#include <bits/stdc++.h>

template <typename C>
int sz(const C &c) { return static_cast<int>(c.size()); }

using namespace std;

void computeDigits(int n, int &sum, int &count)
    {
        sum = 0;
        count = 0;
        while(n != 0)
        {
            sum += n % 10;
            n /= 10;
            count++;
        }
    }

int main()
{
    iostream::sync_with_stdio(false);

    int n;

    for(int n; cin>> n && n != 0;)
    {
        int sumOfDigits = 0;
        int countOfDigits = 0;
        do
        {
            computeDigits(n, sumOfDigits, countOfDigits);
            n = sumOfDigits;
        } while(countOfDigits != 1);
        cout << n << "\n";
    }

    /*
    my solution
    while (cin >> num)
    {
        if (num == 0)
        {
            break;
        }

        while (num / 10 != 0)
        {
            int sum = 0;
            while (num != 0)
            {
                sum += (num % 10);
                num /= 10;
            }
            num = sum;
        }

        cout << num << "\n";
    }

    */
}
