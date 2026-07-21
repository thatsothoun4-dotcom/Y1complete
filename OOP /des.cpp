#include <bits/stdc++.h>
using namespace std ;
class Test {
 
    public : 
    string name ; 
    Test() {
        this -> name = "Hello " ; 
        cout << "defeault construcute "<<endl ; 
    } 
    ~Test() {
        cout <<"Destructure " <<endl ;
    }
    void print() {
        cout << "object name : " << name <<endl; 
    }
} ; 
// destructure is auto accesss and auto compile   
// destructure non parameter 
// concpet  
// assign defeault and after use destructure 
class Solution { 
    public : 
    int  a, b ;  
    Solution() {
        a=0 ; 
        b=0 ; 
    }
    Solution(int newa , int newb){
        this -> a = newa  ; 
        this -> b = newb ; 
    } 
   ~Solution() {
    cout << "compile run "<< endl ; 

   } 
   void compile() {
    std::cout << " a ,b " << a<<b <<endl; 
   }
} ; 
int main() {

    Test t ; 
    t.print() ; 
    Solution s ;
    cout << "a  : " ; cin>>s.a ; 
    cout << "b : " ; cin>>s.b ; 
    s.compile() ; 
   
    return 0 ; 
}