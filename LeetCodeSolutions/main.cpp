//
//  main.cpp
//  LeetCodeSolutions
//
//  Created by Himangshu Ranjan Borah on 6/11/16.
//  Copyright © 2016 NC State University. All rights reserved.
//

#include <iostream>
#include "AllSolutions.h"

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    /*StringReverse str("");
    string result = str.GetReversedString();
    cout<<"The string is = "<<result<<endl;*/
    
    /*for(int i = 0 ; i< 10; i++){
        NimGame nim(i+1);
        cout<<"Win Status for "<<(i + 1)<<" : "<<nim.CanWinNim()<<endl;
    }*/
    
    
    /*for(int i = 0 ; i< 123; i++){
     AddNumbers n(i+1);
     cout<<"Add numbers Status for "<<(i + 1)<<" : "<<n.GetAddedNumber()<<endl;
    }*/
    
    
    /*vector<int> a = {1,2,2,3,4};
    vector<int> b = {2,2,5};
    SetIntersect set(a,b);
    vector<int> result = set.FindIntersect();
    for (auto it = result.begin(); it != result.end(); it++ ){
        cout<<*it<<" :: ";
    } */
    
    vector<int> b = {2, 2, 5, 0,  8, 0, 3};
    MoveZeros x(b);
    x.MoveInplace();
    for (auto it = b.begin(); it != b.end(); it++ ){
        cout<<*it<<" :: ";
    }

    return 0;
}
