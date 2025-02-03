#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std ;

int main () 
{
    int count, i , i2 ;
    int userInput, prime ;
    bool flag = false ;

    cout << "Enter: " ;
    cin >> userInput ;
    cout << "The prime factors are: " ;
    for (i = 2; i < userInput ; i++)
    {
        if (userInput % i == 0) // this for loop is to check is the counter (i) is a multiple of userInput
        {   
            prime = i;
            // the next for loop is to check is the multiple is a prime number
            for( i2 = 2; i2< ceil(sqrt(prime))  ; i2++)
            {
                if (prime % i2 == 0)
                    flag = true ;
            }
        }
        if (flag == false ) 
            cout << i << ", "  ;
        flag = false ;
    }

    cout<< endl ;

    return 0 ;
}
