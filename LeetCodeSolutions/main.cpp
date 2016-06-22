//
//  main.cpp
//  LeetCodeSolutions
//
//  Created by Himangshu Ranjan Borah on 6/11/16.
//  Copyright © 2016 NC State University. All rights reserved.
//

#include <iostream>
#include "AllSolutions.h"
#include <cmath>
#include <unordered_set>
#include <unordered_map>

using namespace std;
vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    vector<int> result;
    unordered_map<int, int> dict1;
    unordered_map<int,int> dict2;
    for(auto it = nums1.begin(); it!= nums1.end();it++){
        if(dict1.find(*it) == dict1.end())
                    dict1[*it] = 1;
        else
            dict1[*it]++;
    }
    
    for(auto it = nums2.begin(); it!= nums2.end();it++){
        if(dict2.find(*it) == dict2.end())
            dict2[*it] = 1;
        else
            dict2[*it]++;
    }
    
    for(auto it = dict1.begin(); it!= dict1.end();it++){
        auto find = dict2.find(it->first);
        if(find == dict2.end())
            continue;
        else{
            int a = find->second;
            int b = it->second;
            int common = min(a, b);
            for(int i = 0; i<common; i++){
                result.push_back(it->first);
            }
        }
    }
    return result;
}


int hammingWeight(uint32_t n) {
    int count = 0;
    uint32_t mask = 0x01;
    while(n > 0){
        uint32_t temp = n & mask;
        n = n >> 1;
        count += temp;
    }
    return count;
}


bool isPowerOfTwo(int n) {
    if(n == 0)
        return false;
    bool result = false;
    double x = log2(n);
    if(round(x) == x)
        result = true;
    else
        result = false;
    return result;
}


int main(int argc, const char * argv[]) {
    bool result = isPowerOfTwo(0);
    cout<<"The result is = "<<result<<endl;
    return 0;
}
