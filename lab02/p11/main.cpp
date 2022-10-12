#include <bits/stdc++.h>

template <typename C>
int sz(const C &c) { return static_cast<int>(c.size()); }

using namespace std;

int sumOfLetters(string s)
{
    int sum = 0;
 
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            sum += s[i] - 'A' + 1;
        }
            
        else
        {
            sum += s[i] - 'a' + 1;
        }
            
    }

    return sum;
}

int sumOfDigits(int num)
{
    int sum = 0;
    int m;   
    while(num > 0)    
    {    
        m = num % 10;    
        sum = sum + m;    
        num = num / 10;    
    } 

    return sum;
}

int main()
{
    iostream::sync_with_stdio(false);
    string s1, s2;

    while (cin >> s1 && cin >> s2)
    {
        int num1 = sumOfDigits(sumOfLetters(s1));
        int num2 = sumOfDigits(sumOfLetters(s2));
        
        cout << num1 << " " << num2;
    }
    
}