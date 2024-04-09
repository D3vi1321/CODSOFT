#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    int ans, dif, RANno;
    RANno = 1 + (rand() % 11);
    cout << "**********NUMBER GUESSING GAME**********\n";
    cout << "Choose difficulty\n1.Easy\n2.Medium\n3.Hard\nEnter your choice:";
    cin >> dif;
    switch (dif)
    {
    case 1:
        for (int i =0 ; i <= 10; i++)
        {
            cout << "\nGuess a number between 0-10\n";
            cin >> ans;
            if (RANno == ans)
            {
                cout << "\nYou Won!!!";
                exit(0);
            }
            else if (i == 10)
            {
                cout << "\nYou loose";
            }
            else
            cout << "\nYou have " << 9 - i << " chances left";
        }
        exit(0); 
        break;
    case 2:
        for (int i = 0; i < 5; i++)
        {
            cout << "\nGuess a number between 0-10\n";
            cin >> ans;
            if (RANno == ans)
            {
                cout << "\nYou Won!!!";
                exit(0);
            }
            else if (i == 5)
            {
                cout << "\nYou loose";
            }
            else
            cout << "\nYou have " << 4 - i << " chances left";
        }
        exit(0);
        break;
    case 3:
        for (int i = 0; i <= 3; i++)
        {
            cout << "\nGuess a number between 0-10\n";
            cin >> ans;
            if (RANno == ans)
            {
                cout << "\nYou Won!!!";
                exit(0);
            }
            else if (i == 3)
            {
                cout << "\nYou loose";
            }
            else
            cout << "\nYou have " << 2 - i << " chances left";
        }
        exit(0);
        break;
        default:cout<<"\nYou Entered wrong choice\nExiting.....";
    }
    return 0;
}