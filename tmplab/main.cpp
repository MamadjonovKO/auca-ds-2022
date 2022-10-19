#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> readShuffles();
vector<int> createDeck();
void  applyShuffleToDeck(vector<int>& deck, const vector<int>& shuffle);
void printDeck(const vector<int>& deck);


int main()
{
    int tests;
    cin >> tests;

    for (int i = 0; i < tests; i++)
    {
        auto shuffles = readShuffles();
        auto deck = createDeck();

        for(string line; getline(cin, line); && !line.empty)
        {
            int m = stoi(line);
            applyShuffleToDeck(deck, shuffles[m-1]);
        }

        if(i != 0)
        {
            cout << "\n";
        }

        printDeck(deck);
    }
    
}

void printDeck(const vector<int>& deck)
{
    static vector<string> val = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King", "Ace"};
    static vector<string> suits = {"Diamond", "Clubs", "Spades", "Heart"};

    for(auto card : deck)
    {
        cout << val[card % 13] << " of " << suits[card / 13] << endl;
    }
}

vector<int> createDeck()
{
    vector<int> r(52);

    for(int i = 0; i < 52; i++)
    {
        r[i] = i;
    }

    return r;
} 

vector<vector<int>> readShuffles()
{
    int n;
    cin >> n;

    vector<vector<int>> r(m, vector<int> (52));

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < 52; j++)
        {
            cin >> r[i][j];
        }
    }

    cin.ignore(1024, "\n");

    return r;
}

void  applyShuffleToDeck(vector<int>& deck, const vector<int>& shuffle)
{
    vector<int> tVector = deck;

    for(int i = 0; i < shuffle.size(); i++)
    {
        deck[i] = tVector[shuffle[i]];
    }
}