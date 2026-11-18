// Leetcode 1: Two Sum

#include <iostream>
#include <algorithm>
#include <array>
using namespace std;

int main() {
    const int TARGET=9;
    array<int,6> nums={4,6,9,1,3,10},temp;
    int sum=0, i=0, j=nums.size()-1;
    
    temp=nums;
    sort(nums.begin(), nums.end());

    while(sum!=TARGET) {
        sum=nums[i]+nums[j];
        if (sum > TARGET) {
            j--;
        }
        else if (sum < TARGET) {
            i++;
        }
    }
    
    cout << "Indeces that add to target:\n";
    cout << "[" << i << ", " << j << "]\n";
    

    return 0;
}
