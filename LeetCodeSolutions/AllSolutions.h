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
#include <vector>

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


class AddNumbers{
public:
    AddNumbers(int n);
    int GetAddedNumber();
    
private:
    int _n;

};

class SetIntersect{
public:
    SetIntersect(vector<int>&, vector<int>&);
    vector<int> FindIntersect();
    
private:
    vector<int> _first;
    vector<int> _second;


};


class MoveZeros{
public:
    MoveZeros();
    void MoveInplace(vector<int>& nums);
};


#endif /* AllSolutions_h */




