#include "interpolated.h"

//***************************   Utility   ************
void fill0toN(vector <int> &a){                    //*
    for(int i = 0; i < a.size(); ++i)              //*
        a[i] = i;                                  //*
}                                                  //*
//****************************************************


double Interpolated :: polynomial(vector <int> is, int size){
    if(size == 1){
        return points[is[0]].second;
    }
    
    vector <int> tmp1(size-1);
    for(int i = 0; i < size - 1; ++i){
        tmp1[i] = is[i];

    }
    vector <int> tmp2(size-1);
    for(int i = 0; i < size - 1; ++i){
        tmp2[i] = is[i+1];
    }

    
    
    
    return ( polynomial(tmp2, size - 1) - polynomial(tmp1, size - 1) )/(points[is[size - 1]].first - points[is[0]].first);


}

Interpolated :: Interpolated(vector< pair< double, double> > &shit){
    degree = shit.size() - 1;
    points = shit;
    dividedDifferences.resize(degree + 1);
    vector <int> is(degree + 1);

    fill0toN(is);

    for(int i = 0; i <= degree; ++i)
        dividedDifferences[i] = polynomial(is, i + 1);
    


}

void Interpolated :: AddPoint(pair< double, double> point){
    
    degree = degree + 1; 
    points.push_back(point);
    vector <int> is(degree + 1);
    fill0toN(is);
    
    dividedDifferences.push_back(polynomial(is, degree + 1) );

}

double Interpolated :: evaluate(double x){
    double sum = 0;
    double mult = 1;
    for(int i = 0; i <= degree; ++i){
        mult = 1;
        for(int j = 0; j < i; ++j)
            mult *= (x - points[j].first);

        sum += mult * dividedDifferences[i];       
    }

    return sum;
}
