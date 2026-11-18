// Leetcode 217: Contains Duplicate

#include <unordered_set>
#include <iostream>
using namespace std;

int main() {
    vector<int> nums = {2,5,7,2,9};     //Test vector
    unordered_set<int> nums2;       //Good because each element represented once, so bool easy to determine
    bool duplicate = false;     //Start by assuming no duplicate

    for (int x:nums) {      //Goes through vector
        if (nums2.count(x)) {       //Checks if item represented in vector
            duplicate = true;       //Updates bool if it is found
        }
        else {
            nums2.insert(x);        //Adds val if not found
        }
    }

    //Appropriate output displayed
    if (duplicate) {
        cout << "There is a duplicate.\n";
    }
    else {
        cout << "There is no duplicate.\n";
    }

    return 0;
}