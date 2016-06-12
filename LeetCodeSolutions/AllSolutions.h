//
//  AllSolutions.h
//  LeetCodeSolutions
//
//  Created by Himangshu Ranjan Borah on 6/11/16.
//  Copyright © 2016 NC State University. All rights reserved.
//

#ifndef AllSolutions_h
#define AllSolutions_h
#include <string>
#include <iostream>

using namespace std;

class StringReverse{
public:
    StringReverse(string str);
    string GetReversedString();

private:
    string _str;
};


class NimGame{
public:
    NimGame(int n);
    bool CanWinNim();
private:
    int _n;
};


#endif /* AllSolutions_h */




