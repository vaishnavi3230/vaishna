#include <iostream>
using namespace std;

int returnTotalBill();

int main()
{
    int totalbill = returnTotalBill();
    cout << "Your total bill amount is: " << totalbill << endl;
    cout << "Thank you for your order!" << endl;
    return 0;
}

int returnTotalBill()
{
    char c;
    char item;
    int billAmount = 0;
    char selectAgain;

    cout << " --------------- FOODI PARU --------------- " << endl;
    cout << " --------------- WELCOME TO FOODI PARU --------------- " << endl;
    cout << "--------------- ONLINE FOOD ORDER ---------------" << endl;
    cout << "--------------- Please follow below instructions ---------------" << endl;
    cout << "Step 1: Please press 's' to start your order" << endl;
    cout << "Step 2: You can order both veg and non-veg items" << endl;
    cout << "Step 3: Please press 'a' to select veg items" << endl;
    cout << "Step 4: Please press 'b' to select non-veg items" << endl;
    cout << "Step 5: You will get your final bill after your order" << endl;

start:
    cin >> c;
    if (c == 's' || c == 'S')
    {
        cout << "Please select your choice " << endl;
        cout << "(a) Veg Items                  (b) Non-veg Items" << endl;
        cin >> item;

        if (item == 'a' || item == 'A')
        {
vegItemlist:
            cout << "Please select 1, 2, 3, 4, 5 as per your choice" << endl;
            cout << "(1) Paneer      : Price  : Rs 250" << endl;
            cout << "(2) Burger      : Price  : Rs 50" << endl;
            cout << "(3) Pizza       : Price  : Rs 100" << endl;
            cout << "(4) Chowmein    : Price  : Rs 150" << endl;
            cout << "(5) Veg Roll    : Price  : Rs 100" << endl;

            int vegItem;
            cin >> vegItem;

            if (vegItem == 1)
                billAmount += 250;
            else if (vegItem == 2)
                billAmount += 50;
            else if (vegItem == 3)
                billAmount += 100;
            else if (vegItem == 4)
                billAmount += 150;
            else if (vegItem == 5)
                billAmount += 100;
            else
            {
                cout << "You have entered wrong value, please try again!" << endl;
                goto vegItemlist;
            }

            cout << "Do you want to add more items? (y/n)" << endl;
            cin >> selectAgain;
            if (selectAgain == 'y' || selectAgain == 'Y')
                goto start;
            else
                return billAmount;
        }
        else if (item == 'b' || item == 'B')
        {
nonvegItemlist:
            cout << "Please select 1, 2, 3, 4, 5 as per your choice" << endl;
            cout << "(1) Chicken      : Price  : Rs 350" << endl;
            cout << "(2) Chick Burger : Price  : Rs 100" << endl;
            cout << "(3) Pizza        : Price  : Rs 150" << endl;
            cout << "(4) Fish         : Price  : Rs 200" << endl;
            cout << "(5) Non Veg Roll : Price  : Rs 200" << endl;

            int nonvegItem;
            cin >> nonvegItem;

            if (nonvegItem == 1)
                billAmount += 350;
            else if (nonvegItem == 2)
                billAmount += 100;
            else if (nonvegItem == 3)
                billAmount += 150;
            else if (nonvegItem == 4)
                billAmount += 200;
            else if (nonvegItem == 5)
                billAmount += 200;
            else
            {
                cout << "You have entered wrong value, please try again!" << endl;
                goto nonvegItemlist;
            }

            cout << "Do you want to add more items? (y/n)" << endl;
            cin >> selectAgain;
            if (selectAgain == 'y' || selectAgain == 'Y')
                goto start;
            else
                return billAmount;
        }
        else
        {
            cout << "You have entered wrong value, please try again!" << endl;
            goto start;
        }
    }
    else
    {
        cout << "You have entered wrong value, please press 's'!" << endl;
        goto start;
    }

    return billAmount;
}

