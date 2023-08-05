/*



*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    // declaring a map
    map<string, double> mp, mp1;

    // assigning some values in map mp;

    // 1st method

    // mp['ashish'] = 9.8;
    // mp['shubham'] = 8.5;
    // mp['ramanpreet'] = 8.9;

    // second method
    //  mp.insert(pair<string, double>('ashish', 9.8));
    //  mp.insert(pair<string, double>('shubham', 8.8));
    //  mp.insert(pair<string, double>('ramanpreet', 7.8));

    // third method
    mp.insert({'ashish', 9.8})
        mp.insert({'ashish', 8.8})

        // traversing in map
        map<string, double>::iterator it;

    // if we want to traverse from beginning then the pointer should
    // be initialized with mp.begin()

    it = mp.begin();

    // the loop should continue till it is not equal to mp.end()
    while (it != mp.end())
    {
        cout << "Key: " << it->first << " = " << it->second << endl;
    }

    // copy all values in mp1

    mp1.insert(mp.begin(), mp.end());
    return 0;

    // mp.size()
    // mp.empty()
    // mp.erase()
}