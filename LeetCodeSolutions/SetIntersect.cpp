//
//  SetIntersect.cpp
//  LeetCodeSolutions
//
//  Created by Himangshu Ranjan Borah on 6/11/16.
//  Copyright © 2016 NC State University. All rights reserved.
//

#include <stdio.h>
#include "AllSolutions.h"
#include <unordered_set>


SetIntersect::SetIntersect(vector<int>& a, vector<int>& b){
    _first = a;
    _second = b;
}



vector<int> SetIntersect::FindIntersect(){
    vector<int> nums1 = _first;
    vector<int> nums2 = _second;
    vector<int> result;
    unordered_set<int> nums1Set(nums1.begin(), nums1.end());
    unordered_set<int> nums2Set(nums2.begin(), nums2.end());
    
    for(auto it = nums1Set.begin(); it != nums1Set.end(); it++){
        if(nums2Set.find(*it) != nums2Set.end()){
            result.push_back(*it);
        }
    }
    
    return result;
}


