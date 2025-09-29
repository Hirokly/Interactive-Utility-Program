//******************************************************************************
//Author......: Juan Vasquez
//Assignment.: Interactive Utility Program
//Date........: 2025-09-28
//****************************************************************************** 
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main ()
{
int choice = 0;
int positiveint;
int limit = 0;
int sum = 0;
char typeofnum;
string str, reversedstr;

    while (true)
    {
        cout << "========= Interactive Utility Program =========\n"
        <<"1. Factorial Calculator\n2. Number Pyramid\n3. Sum of Even or Odd Numbers\n"
        << "4. Reverse a String\n5. Exit\n"
        << "==============================================\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
            {
                while (positiveint < 0)
                {
                    cout << "\nEnter a positive integer: ";
                    cin >> positiveint;
                    if (positiveint < 0)
                    {
                        cout << "Invalid input. Please enter a positive integer.\n";
                    }
                    else
                    {
                        long long factorial = 1;
                        for (int i = 1; i <= positiveint; ++i)
                        {
                            factorial *= i;
                        }
                    cout << "Factorial of " << positiveint << " is: " << factorial << "\n\n";
                    }
                }
            break;
            }
            case 2:
            {
                int rows;
                cout << "\nEnter the number of rows for the pyramid: ";
                cin >> rows;

                for (int i = 1; i <= rows; ++i)
                {
        
                    for (int space = 1; space <= rows - i; ++space)
                    {
                        cout << " ";
                    }

                    for (int j = 1; j <= i; ++j)
                    {
                        cout << j << " ";
                    }

                    cout << "\n";
                }
            cout << "\n";
            break;
            }
            case 3:
            {
                cout << "\nEnter a number(Positive integer): ";           
                cin >> limit;
                cout << "Do you want to sum even or odd numbers? (e/o): ";
                cin >> typeofnum;

                    if (typeofnum == 'e' || typeofnum == 'E')
                    {
                        sum = 0;
                        for (int i = 1; i <= limit; ++i)
                        {
                            if (i % 2 == 0)
                            {
                                sum += i;
                            }
                        }
                    cout << "Sum of even numbers up to " << "limit" << ": " << sum;
                    cout << "\n\n";
                    }
                    else if (typeofnum == 'o' || typeofnum == 'O')
                    {
                        sum = 0;
                        for (int i = 1; i <= limit; ++i)
                        {
                            if (i % 2 != 0)
                            {
                                sum += i;
                            }
                        }
                    cout << "Sum of odd numbers up to " << limit << ": " << sum;
                    cout << "\n\n";
                    }
                    else
                    {
                        cout << "Invalid input. Please enter 'e' for even or 'o' for odd.\n\n3";
                    }
            break;
            }
            case 4:
            {
                cout << "\nEnter a string: ";
                cin >> str;
                
                reverse(str.begin(), str.end());
                cout << "Reversed string: " << str << "\n\n";
            break;
            }
            case 5:
                cout << "Exiting the program. Goodbye!\n";
                return 0;
            default:
                cout << "Invalid choice. Please select a valid option.\n\n";        
            break;
        }
    }
    return 0;
}