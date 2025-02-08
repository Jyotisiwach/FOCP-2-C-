#include <iostream>
using namespace std;
 
bool check(string s)//data to represent a Boolean value
{
     int freq[26] = {0};
     int n = s.length();
    for (int i = 0; i < s.length(); i++)
     freq[s[i] - 97]++;
     
    // checking if any odd or not
    for (int i = 0; i < 26; i++)
        if (freq[i] % 2 == 1)
        return false;
    return true;
}
 

 