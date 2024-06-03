#include <iostream>
using namespace std;
int main()
{
    int user_input;
    int amount = 0;
    int count = 0;
    while (true) // we will be using this true as our program gives multiple results repeateddly

    {
        cout << "\n";
        cout << "-------------------------------------------------------------" << endl;

        cout << "VEHICLE-----PARKING----MANAGEMENT-----SYSTEM" << endl;

        cout << "-------------------------------------------------------------" << endl;

        cout << "\n";
        cout << "ENTER THE NUMBER ACCORDINGLY TO PARK THE LISTED VEHICLES" << endl;
        cout << "\n";
        cout << "PRESS 1 : For Bicycle = 100 rupees" << endl;
        cout << "PRESS 2 : For Scooty = 200 rupees" << endl;
        cout << "PRESS 3 : For AutoRickshaw = 300 rupees" << endl;
        cout << "PRESS 4 : For Car = 400 rupees" << endl;
        cout << "PRESS 5 : For Bus = 500 rupees" << endl;
        cout << "PRESS 6 : TO Show Record" << endl;
        cout << "PRESS 7 : To Delete Record" << endl;

        cout << "**************************************************************" << endl;

        cout << "DEAR CUSTOMER YOU CAN PRESS ANY NUMBER (1 - 5) TO PARK YOUR VEHICLES : " << endl;
        cin >> user_input;
        if (user_input == 1)
        {
            count = count + 1;
            amount = amount + 100;
        }
        else if (user_input == 2)
        {
            amount = amount + 200;
            count = count + 1;
        }
        else if (user_input == 3)
        {
            amount = amount + 300;
            count = count + 1;
        }
        else if (user_input == 4)
        {
            amount = amount + 400;
            count = count + 1;
        }
        else if (user_input == 5)
        {
            amount = amount + 500;
            count = count + 1;
        }
        else if (user_input == 6)
        {
            cout << "TOTAL AMOUNT IS : "
                 << " " << amount << endl;
            cout << "TOTAL NUMBER OF VEHICLES PARKED : "
                 << " " << count << endl;
        }
        else if (user_input == 7)
        {
            amount = 0; // delete the records
            count = 0;
        }
        else
        {
            cout << "ENTER THE VALID NUMBER WHICH CAN BE MAPPED WITH THE ABOVE OPERATIONS!" << endl;
        }
    }
    return 0;
}