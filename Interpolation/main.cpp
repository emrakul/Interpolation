#include "main.h"
#include <vector>
//#include <pair>


int main(){
    
    int n;
    cin >> n;
    std :: vector <pair<double, double> > shit;
    for(int i = 0; i < n; ++i){
        double a, b;
        //cin >> a >> b;
        a = i;
        b = i;
        pair <double, double> s;
        s.first = a;
        s.second = b;

        shit.push_back(s);

    }
    Interpolated Shit(shit);
    
    cin >> n;
    for(int i = 1; i < n; ++i){
        double a, b;
        //cin >> a >> b;
        a = i;
        b = i;
        pair <double, double> s;
        s.first = a;
        s.second = b;
        Shit.AddPoint(s);
    }
    

    cout << Shit.evaluate(0.5) << endl;
    cout << Shit.evaluate(1.5) << endl;
    cout << Shit.evaluate(2.5) << endl;
    cout << Shit.evaluate(3.5) << endl;
    cout << Shit.evaluate(4.5) << endl;
    cout << Shit.evaluate(5.5) << endl;
    cout << Shit.evaluate(6.5) << endl;
    cout << Shit.evaluate(7.5) << endl;
    
    //cout << Shit.evaluate(3.5);


    cin >> n;
    return 0;
}