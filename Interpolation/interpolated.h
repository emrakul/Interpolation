#ifndef INTERPOLATED_H
#define INTERPOLATED_H

#include <vector>
#include "function.h"

using namespace std;

class Function;

class Interpolated : Function{
public:
    int degree;

    double evaluate (double);
    double Shit(vector<int> is, int size);

    Function* Base;


    void AddPoint(pair< double, double> point);
    vector< pair< double, double> > points;

    vector< double> dividedDifferences;

    Interpolated(vector< pair< double, double> > &shit);
    
    

};

#endif

