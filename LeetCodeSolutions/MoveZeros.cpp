//
//  MoveZeros.cpp
//  LeetCodeSolutions
//
//  Created by Himangshu Ranjan Borah on 6/12/16.
//  Copyright © 2016 NC State University. All rights reserved.
//

#include <stdio.h>
#include "AllSolutions.h"


MoveZeros::MoveZeros(){}
void MoveZeros::MoveInplace(vector<int>& nums){
    if(nums.empty())
        return;
    unsigned long readIndex = 0;
    unsigned long writeIndex = 0;
    
    while(readIndex < nums.size()){
        if(nums[readIndex] == 0){
            readIndex++;
            continue;
        }
        
        if(readIndex != writeIndex){
            nums[writeIndex] = nums[readIndex];
            nums[readIndex] = 0;
        }
        writeIndex++;
        readIndex++;
    }
}

