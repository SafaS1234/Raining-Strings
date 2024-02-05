#include <iostream>
#include <vector>
#include "library_raining.h"

using namespace std;


int main() 
{

    //test case 1 - different stores
    vector<string> stores1 = {"WalMart", "JcPenny", "MerlinMuffler"};
    cout << " JcPenny \n Merlin Muffler \n WalMart\n";
    organize(stores1);
    for (const string& b : stores1) 
        {
            cout << "    " << b << "\n";
        }
    cout << endl;

    //test case - case insensitive (order shouldn't change)
    vector<string> stores2 = {"WalMart", "walmart", "walMart"};
    cout << " WalMart \n walmart \n walMart\n";
    organize(stores2);
    for (const string& b : stores2) 
        {
            cout << "    " << b << "\n";
        }
    cout << endl;

    //test case 3 - spaces and apostrophe
    vector<string> stores3 = {"WalMart", "Merlin Muffler", "Applebee's"};
    cout << " Applebee's \n Merlin Muffler \n WalMart\n";
    organize(stores3);
    for (const string& b : stores3) 
        {
            cout << "    " << b << "\n";
        }
    cout << endl;

    return(0);
}
