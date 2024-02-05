#include <iostream>
#include <vector>
#include "library_raining.h"

using namespace std;

int main() 
{

    //variables
    vector<string> stores;
    string store, temp, answer;

    //welcome statement
    cout << "Welcome to the Business Sorting Program!\n";

    //asks for stores, sorts and displays them 
    do 
    {
        cout << "\nPlease enter the name of a business: ";
        getline(cin, store);

        stores.push_back(store);

        //makes sure all the stores are ordered correctly
        organize(stores);

        //prints out the stores
        cout << "\nYour business is:\n";

        for (const string& b : stores) 
        {
            cout << "    " << b << "\n";
        }

        cout << "\nAnother business? ";
        getline(cin, answer);

        //converts the input to lowercase
        for (char& c : answer) 
        {
            c = tolower(c);
        }

        //exits program
        if (answer != "y" && answer != "yes") 
        {
            break;
        }

    } 
    
    //for end statement
    while (true);

    cout << "\nThank you for using the Business Sorting Program!\n";

    return 0;
}



