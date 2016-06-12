//
//  AddNumbers.cpp
//  LeetCodeSolutions
//
//  Created by Himangshu Ranjan Borah on 6/11/16.
//  Copyright © 2016 NC State University. All rights reserved.
//

#include "AllSolutions.h"
#include <cmath>


AddNumbers::AddNumbers(int n){
    _n = n;
}


int AddNumbers::GetAddedNumber(){

    int n = _n;
    return n - 9 * floor((n - 1)/9);
    
}