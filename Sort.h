//
// Created by Satori on 2022/10/9.
//

#ifndef P7_SORT_H
#define P7_SORT_H
#include <vector>

class Sort{
public:
    Sort();
    virtual std::vector<int> sort();
    virtual void sort(std::vector<int>); //Actually I prefer to use pure virtual functions, but I still can't build a good list
    void swap(int&, int&); //Here we can pre-fabricate a function and save it in other files.
    ~Sort();
};


#endif //P7_SORT_H
