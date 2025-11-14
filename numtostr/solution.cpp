#include <iostream>
using namespace std;

int main()
{
    long int n, sum = 0, r;
    cout << "Enter the Number= ";    
    cin >> n;

    long int original = n;  // store original number
    
    // Reverse number
    while(n > 0){
        r = n % 10;
        sum = sum * 10 + r;
        n = n / 10;
    }

    // Print digits in words using reversed number
    while(sum > 0){
        r = sum % 10;

        switch(r){
            case 1: cout << "one "; break;
            case 2: cout << "two "; break;
            case 3: cout << "three "; break;
            case 4: cout << "four "; break;
            case 5: cout << "five "; break;
            case 6: cout << "six "; break;
            case 7: cout << "seven "; break;
            case 8: cout << "eight "; break;
            case 9: cout << "nine "; break;
            case 0: cout << "zero "; break;
            default: cout << "tttt "; break;
        }

        sum = sum / 10;
    }

    return 0;
}
