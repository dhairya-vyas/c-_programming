#include <iostream>
using namespace std;
int stringOccurrence(string, string);
int main()
{
    string s = {"Hello world Hello nothing just Hello"};
    string x = {"Hello"};
    cout << stringOccurrence(s, x);

    return 0;
}
int stringOccurrence(string s, string x)
{
    int occurrence=0;
    int i = 0, length, j=0;
    for (length = 0; x[length] != '\0'; length++);
        

    while (s[i] != '\0')
    {
        for (j = 0; j < length && (s[i + j] == x[j]); j++);

        if (length == j)
            occurrence++;

        i++;
    }
    return occurrence;
}