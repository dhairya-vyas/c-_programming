#include <iostream>

using namespace std;

string separateDuplicates(string str)
{
    
    if (str.length() <= 1)
    {
        return str;
    }

    // Recursive case
    if (str[0] == str[1])
    {
        return str[0] + "*" + separateDuplicates(str.substr(1));
    }
    else
    {
        return str[0] + separateDuplicates(str.substr(1));
    }
}

int main()
{
    string str;
    cin >> str;

    cout << separateDuplicates(str) << endl;

    return 0;
}