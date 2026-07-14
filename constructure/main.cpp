#include <bits/stdc++.h>
using namespace std ;
//parameter constructure 
class SolutionA {
 
    public : 
        string name ; 
        int age ;
        SolutionA(string n , int a){

            name  = n ; 
            age = a ;  
            std::cout << left  ; 
            std::cout<< "Name : " <<name << "\tAge :" << age <<endl ; 
        } 
} ;  
//move constructure  
class Myclass {

    private : 
        int b ; 
    public : 
        //move from b to a 
        Myclass(int &&a ) : b(move(a)) {
 
            cout << "Move constructure call " <<endl ; 
        } 
        void display() {
 
            cout <<  b <<endl ; 
        } 
} ;  
//move string 
 
class Mystring{
 
    private : 
        string s ; 
    public : 
        Mystring (string &&sx ) : s(move(sx)){
         
            cout << "move string from s to sx call " <<endl ; 

        } 
        void show() {
 
            cout << s<<endl ; 
        }

} ;  
// if copy constructure 
class A {
 
    public : 
        int val  ; 
        // parameter 
        A(int x ){
            val = x ; 
        } 
        // copy constructure 
        A(A& a ){
 
            val = a.val ; 
        }
} ; 
//copy constructure use string 
 
class Mystr{
 
    public : 
        string name ; 
        //parameter 
        Mystr(string s){
            name = s ; 
        }
        //copy  constructure 
        Mystr(Mystr& s){
 
            name  = s.name ; 
        }
} ; 

int main() {

    int a = 4 ; 
    Myclass obj1(move(a)) ;  
    obj1.display() ; 
    string sx = "hello world " ; 
    Mystring test(move(sx))  ; 
    test.show()  ;  
    A a1(10) ; 
    A a2(a1)  ; 
    cout << a2.val <<endl ;  
    SolutionA obj("thoun", 12) ; 

     
    //copy constructure 
 
    Mystr str1("John Deo") ; 
    Mystr str2(str1) ; 
    cout << str2.name<<endl ; 




    return 0 ; 
    //CONSTRUCTURE IN C++    
    //defeault 
    //parameter 
    //copy 
    //move 

}
