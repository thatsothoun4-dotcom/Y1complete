#include <bits/stdc++.h>
using namespace std  ; 
  
class Banking {
  
    private : 
        int password ; 
    public : 
        string name ;  
        int id; 
        //parameter constructure 
        Banking(string n , int idx  , int pass) {
            
            name = n ;  
            id = idx  ; 
            password = pass ; 

        }  
        int getPass() {
         
            return password ; 
        }
        void Banking_SHOW() {
 
            cout << left ; 
            cout << "Banking Account " <<endl ;
            cout << "Name :" << name << endl ; 
            cout << "Id : "<< id <<endl ; 
           cout << "password : " << getPass() <<endl ; 
}
                 
} ; 
int main() {
 
    string name = "user" ;  
    int id = 10001 ;  
    int password = 135279 ; 
    Banking user(name , id ,password ) ;
    user.Banking_SHOW() ; 





}

