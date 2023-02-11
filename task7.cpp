#include <iostream>
using namespace std;
main()
{

    string words;
    string doc;

    cout << "Enter string: ";
    getline(cin, words);
    int count = 0;
    for (int m = 0; words[m] != '\0'; m++)
    {
        if (words[m] == ' ')
        {
            count++;
        }
    }
    count = count + 1;

    string rever[count];
    int j = count - 1;

    string temp = "";
    for (int f = 0; f < words.length(); f++)
    {
        temp = temp + words[f];

        if (words[f] == ' ' || words[f + 1] == '\0')
        {
            rever[j] = temp;

            temp = "";
            j = j - 1;
        }
    }
    for (int m = 0; m < count; m++)
    {
        cout << rever[m];
    }
}
