#include <iostream>

using namespace std;

string removeduplicates(string str)
{
    string out = "";

    for (int i = 0; i < str.length(); i++)
    {
        if (i == 0 || str[i] != str[i - 1])
        {
            out += str[i];
        }
    }

    return out;
}

int main()
{
    string str;
    cin >> str;

    cout << removeduplicates(str) << endl;

    return 0;
}