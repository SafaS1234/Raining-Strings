#include <iostream>
#include <vector>

using namespace std;

//places the stores alphabetically in a case-insensitive way
bool comp(const string& str1, const string& str2) 
{
    string lower1 = str1;
    string lower2 = str2;

    //converts both strings to lowercase
    for (char& c : lower1) 
    {
        c = tolower(c);
    }

    for (char& c : lower2) 
    {
        c = tolower(c);
    }

    return lower1 < lower2;
}

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
        for (size_t i = 0; i < stores.size(); ++i) 
        {
            for (size_t j = i + 1; j < stores.size(); ++j) 
            {
                if (comp(stores[j], stores[i])) 
                {
                    temp = stores[i];
                    stores[i] = stores[j];
                    stores[j] = temp;
                }
            }
        }

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



