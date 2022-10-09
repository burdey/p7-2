//
// Created by Satori on 2022/10/9.
//

#include "RecursiveBinarySearch.h"
#include <vector>
using namespace std;

RecursiveBinarySearch::RecursiveBinarySearch(){}

bool RecursiveBinarySearch::Search(std::vector<int> storage, int intent) {
    return binarySearch(storage,intent,0,storage.size()-1);
}

bool RecursiveBinarySearch::binarySearch(std::vector<int> storage,int intent,int begin,int end){
    if(begin>end){
        return -1;
    }

    int midpoint = (begin+end)/2;
    if(storage.at(midpoint)>intent){
        return binarySearch(storage,intent,begin,midpoint-1);
    }
    else if(storage.at(midpoint)<intent){
        return binarySearch(storage,intent,midpoint+1,end);
    }
    else{
        return midpoint;
    }
}

RecursiveBinarySearch::~RecursiveBinarySearch() {}
