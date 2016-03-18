#include "main.h"
#include <vector>
//#include <pair>


int main(){
    
    int n;
    cin >> n;
    std :: vector <pair<double, double> > args;
    for(int i = 0; i < n; ++i){
        double a, b;
        //cin >> a >> b;
        a = i;
        b = i;
        pair <double, double> s;
        s.first = a;
        s.second = b;

        args.push_back(s);

    }
    Interpolated polynomial(args);
    
    cin >> n;
    for(int i = 1; i < n; ++i){
        double a, b;
        //cin >> a >> b;
        a = i;
        b = i;
        pair <double, double> s;
        s.first = a;
        s.second = b;
        polynomial.AddPoint(s);
    }
    

    cout << polynomial.evaluate(0.5) << endl;
    cout << polynomial.evaluate(1.5) << endl;
    cout << polynomial.evaluate(2.5) << endl;
    cout << polynomial.evaluate(3.5) << endl;
    cout << polynomial.evaluate(4.5) << endl;
    cout << polynomial.evaluate(5.5) << endl;
    cout << polynomial.evaluate(6.5) << endl;
    cout << polynomial.evaluate(7.5) << endl;


    cin >> n;
    return 0;
}
