//access modify  
// class 
#include <bits/stdc++.h>
using namespace std ; 
//publicaccess modifier 
class User {
    public : 
    string name ; 
    void displayUser() {
     
        this -> name = "Thoun " ; 
        cout << "Name : " <<name <<endl ; 
    }
}  ; 
// private acces specifier 
class Private_User{
    private : 
    int age ; 
    public : 
    void displayPrivate() {
        this -> age = 18 ;
        cout << "age : " << age <<endl ; 
    }
} ; 
class Bank  { 
    private: 
    double balance ; 
     
    public : 
    void displayBalance() {
        this -> balance = 10000 ; 
        cout << "Balance : " << balance <<endl ; 
    }
} ;  
int main() {
  
    // public -> access 
    User  s ; 
    s.displayUser()  ;  
    // private : access 
    Private_User u ; 
    u.displayPrivate() ;  
    Bank T ; 
    T.displayBalance() ; 
}