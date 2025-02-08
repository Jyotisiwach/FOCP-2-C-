#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cout << "Input the string\n";
    cin >> str;

    cout << "After replacing all the vowels from the input string\n";

    string vowels = "aeiou";

    //while there is vowel in the string
    while (str.find_first_of(vowels) != string::npos) {
        //replaced the vowel with '*'
        str[str.find_first_of(vowels)] = '*'; 
    }

    cout << "The updated string is: " << str << endl;

    return 0;
}