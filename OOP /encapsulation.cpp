//encapsulation :
//data and variable , function methods , hide data p
// private 
// access public only ;

#include<bits/stdc++.h>
using namespace std ;
class Solu {
 
    public : 
    double balance   ; 
    Solu() {
         balance = 0 ; 
    } 
    void Find(double money) {
        if(money>0) {
            balance+= money ; 
        }else {
            return ;
        } 

     } 
     void del(double money) {
        if(money > 0 && money<= balance) {
            balance-=money; 
        }
     } 
     double getBalance() {
        return balance ; 
     }
} ;
int main() { 
 
    Solu s ;
    cout << "Banlace :" ; cin>>s.balance ; 
     
    s.Find(100) ; 
    s.del(100) ; 
 
    cout << s.getBalance() <<endl ; 
}