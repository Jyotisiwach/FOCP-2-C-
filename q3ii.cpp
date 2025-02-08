
#include <bits/stdc++.h> //Non- standard header of file in GNU
using namespace std;

void isPalindrome(string str) {//palindrome is the reverse of the number of and the number itself.
   string rev = str;
 // Reverse the string
    reverse(rev.begin(), rev.end());
 // If rev is equal to str
    if (str == rev)
        cout << "\"" << str
          << "\" is palindrome." << endl;
       // If rev is NOT equal to str
    else
        cout << "\"" << str
          << "\" is NOT palindrome." << endl;
}

int main() {
    
      // Checking if strings given strings are palindrome
    isPalindrome("ABCDCBA");
      isPalindrome("ABCD");

    return 0;
}