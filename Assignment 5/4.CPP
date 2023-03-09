#include <iostream>

using namespace std;

string compressString(string str)
{
    string output = "";

    char currentChar = str[0];
    int count = 1;

    for (int i = 1; i < str.length(); i++)
    {
        if (str[i] == currentChar)
        {
            count++;
        }
        else
        {
            output += currentChar;
            output += to_string(count);

            currentChar = str[i];
            count = 1;
        }
    }

    output += currentChar;
    output += to_string(count);

    return output;
}

int main()
{
    string str;
    cin >> str;

    cout << compressString(str) << endl;

    return 0;
}
