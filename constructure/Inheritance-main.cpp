//what is inheritance  
//why to use inheritance 
// because you don't write the same code 
// example : Animal class have dog class , cow class and cat class 
 
#include <bits/stdc++.h>
using namespace std ; 
 
class Animal {
  
    public : 
     
        void sound() {
 
            cout << "Animal make sound " <<endl ;
        }
} ;  
class Dog : public Animal{
 
    public : 
 
        void sound() {
 
            cout << "HUUUUUU" <<endl ; 
        }
} ;  
class  Cow : public Animal{
 
    public : 
        void sound() {
 
            cout << "muhhhhh" <<endl ;
        }
} ;  
class Solution {
 
    public : 
        void show() {
         
            cout << "Make me a solution case: " <<endl ; 
            cout << "case 1 : " <<endl ; 
            cout << "case 2 : " <<endl ; 
            cout << "case 3 : " <<endl ; 
        }
} ;  

class A : public Solution {
 
    public :
        int x  , y ; 
        void show() {
 
            x =1  , y=2 ; 
            cout << "calculate : " << x+y <<endl ; 
        }
} ; 
class B : public Solution  {
 
    public : 
        bool IsFalse  = 0 ; 
        void show() {
            if (!IsFalse) {
                cout << "True" <<endl ; 
            }
        }
} ;  
class C : public Solution{
 
    public : 
        void show() {
            cout << "exit =>" <<endl ; 
            return ; 
        }
}  ; 


int main() {
  
    Animal  s ; 
    s.sound() ; 

    Dog d ; 
    d.sound() ; 
    Cow c  ; 
    c.sound() ; 
    Solution ans  ; 
    ans.show() ; 
    A  a ; 
    a.show() ; 
    B b ;b.show() ; 
    C cs  ; 
    cs.show() ;
}

