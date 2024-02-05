#ifndef LIBRARY_RAINING_H
#define LIBRARY_RAINING_H
#include <string>
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


void organize(vector<string>& stores)
{
    string temp;

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
}

#endif
