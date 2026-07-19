#include <bits/stdc++.h>
using namespace std ; 

double factorial(int n) { 
    int fact = 1 ; 
    for (int i = 1 ;  i<= n ; i++) {
        fact *= i ; 
    } 
    return fact ; 
}
int main() {
    double sum =0.0; 
    int x ;  
    cout << "x :" ;cin>>x ; 
    double term ; 
    for (int i = 0 ; i<= 20 ; i++) {
         term = pow(x,i) /factorial(i) ; 
         sum+=term ; 
    } 
    cout << "sum:"<<sum <<endl; 
 

    return  0 ; 

}
