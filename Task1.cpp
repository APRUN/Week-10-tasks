#include <iostream>
using namespace std;

int checkcondition(string, char, int);
string word[10];

main()
{
    int n=0, count = 0, sum = 0;
    char search;
    string doc;
    cout << "Enter number of words you want to enter: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter word " << i + 1 << ": ";
        cin >> word[i];
    }
    cout << "Enter the letter you want to count: ";
    cin >> search;
    for (int i = 0; i < n; i++)
    {
        doc = word[i];
        sum = sum + checkcondition(doc, search, count);
    }

    cout << search << " repeats " << sum << " times.";
}
int checkcondition(string doc, char search, int count)
{
    int i=0;
    while(doc[i] != '\0')
    {
        if (doc[i] == search)
        {
            count = count + 1;
        }
        i++;
    }
    return count;
}