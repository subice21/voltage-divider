// rule => Vout = Vin * R2 / (R1 + R2)
// code written by Arad Fumm @ 2021
#include <iostream>
using namespace std;

int main(){
    float vout = 0.0;
    float vin = 0.0;
    float r2 = 0.0;
    float r1 = 0.0;

    printf("input val for Vin(float) : \n");
    cin  >> vin;
    printf("input val for Vout(float): \n");
    cin >> vout;
    printf("input val for R2(float): \n");
    cin >> r2;
    printf("input val for R1(float): \n");
    cin >> r1;
    
    if(vin == 0.0){
        vin = vout / (r2 / (r1 + r2) ) ;
        cout <<"the voltage IN will be : "<< vin << endl;
    }
    if(vout == 0.0){
        vout = vin * r2 / (r1 + r2);
        cout <<"the voltage Out will be : "<< vout << endl;
    }
    if(r1 == 0.0){
        r1 = ((vin * r2) / vout ) - r2;
        cout <<"the ressitor r1 will be :"<< r1 << endl;
    }
    if(r2 == 0.0){
        r2 = (r1 - vout / vin ) / (vout/vin);
        r2 = r2 - r1;
        //r2 = (r2*(-1) - r1);
        //cout << ha << endl;
        cout <<"the ressitor r2 will be : "<< r2 << endl;
    }


    return 0;
}
