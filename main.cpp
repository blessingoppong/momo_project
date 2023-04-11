#include <iostream>

using namespace std;

int main()
{
    int balance = 1000; // default balance
    int pin = 0000; // default pin
    int attempts = 0; // count of incorrect pin attempts

    int entered_pin; // holds the user's entered pin

    while(true){
        int option;

        cout << "Welcome to Mobile Money Service" << endl;
        cout << "Select an option:" << endl;
        cout << "1. Authentication" << endl;
        cout << "2. Reset/Change Pin" << endl;
        cout << "3. Check Balance" << endl;
        cout << "4. Send Money" << endl;
        cout << "5. Exit" << endl;

        cin >> option;

        switch(option){
        case 1:
            // authentication
            int user_pin;

            cout << "Enter your PIN: ";
            cin >> user_pin;

            if (user_pin == pin) {
                cout << "Authentication successful" << endl;
                attempts = 0; // reset attempts count
            } else {
                attempts++;
                cout << "Incorrect PIN. Attempts remaining: " << 3 - attempts << endl;
                if (attempts == 3) {
                    cout << "Too many incorrect attempts. Program exiting." << endl;
                    return 0;
                }
            }
            break;


            case 2:
                // reset/change pin
                int new_pin;
                cout << "Enter new PIN: ";
                cin >> new_pin;
                pin = new_pin;
                cout << "PIN changed successfully" << endl;
                break;


            case 3:



                cout << "Enter pin: ";
                cin >> entered_pin;

                if (entered_pin == pin){
                    cout << "Current balance: " << balance << endl;
                }else{
                    cout << "Incorrect pin" <<endl;
                }
                break;

            case 4:
                // send money
                int recipient_number;
                int amount;

                cout << "Enter pin: ";
                cin >> entered_pin;


                if (entered_pin == pin){
                cout << "Enter recipient phone number: ";
                cin >> recipient_number;
                cout << "Enter amount to send: ";

                cin >> amount;

                if (amount <= balance) {
                    balance -= amount;
                    cout << "Transaction successful" << endl;
                } else {
                    cout << "Insufficient balance" << endl;
                }
                }else{
                    cout << "Incorrect pin" <<endl;
                }
                break;


            case 5:
                // exit program
                cout << "Exiting program. Thank you for using Mobile Money Service." << endl;
                return 0;


            default:
                cout << "Invalid option. Please select again." << endl;


        }
    }

    return 0;
}
