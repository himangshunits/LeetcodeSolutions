//
//  NimGame.cpp
//  LeetCodeSolutions
//
//  Created by Himangshu Ranjan Borah on 6/11/16.
//  Copyright © 2016 NC State University. All rights reserved.
//

#include <stdio.h>
#include "AllSolutions.h"


NimGame::NimGame(int n){
    _n = n;
}


bool CanWin(int n, bool isMe){
    if(n == 1 || n == 2 || n == 3){
        if(isMe)
            return true;
        else
            return false;
    }
    bool c1 = CanWin(n - 1, !isMe);
    bool c2 = CanWin(n - 2, !isMe);
    bool c3 = CanWin(n - 3, !isMe);
    if(c1 || c2 || c3){
        if(isMe)
            return false;
        else
            return true;
    }
    else{
        if(isMe)
            return true;
        else
            return false;
    }
}

bool NimGame::CanWinNim(){
    bool result;
    int n = _n;
    if(n == 0){
        return  false;
    }
    
    result = !(n % 4 == 0);
    
    return result;
}

