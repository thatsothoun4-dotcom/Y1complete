//destructure concept 
//destructure (~) 
#include <bits/stdc++.h>
using namespace std ; 
class Test {
 
    public :
        //user defind constructure 
        Test(){ 
            cout << "constructure Call" <<endl ; 
        } 
        //user defind destructure 
        ~Test() {
 
            cout << "destructure Call" <<endl ; 
        }
} ;  
class Myclass {
    private : 
        int* data ; 
    public : 
        //parameter constructure 
        Myclass(int value ) {
         
            data = new int ; 
            *data = value ; 
            cout << *data <<endl ; 

        }  
        // use destructure 
        // ~Myclass 
        ~Myclass() {
 
            //deallocat destructure dynamically 
            //allocated memory 
            
            delete data ; 
            cout << "Destructure : Memory deallocaated" <<endl ; 
        }


} ;   
int count = 0 ; 
class Count {
 
    public : 
      Count() {
 
          count++ ; 
          cout << "No of object create"<<count <<endl ;  

      } 
      // destructure 
      ~Count() {
 
          cout << "No of object destroyed "<< count <<endl ; 
          count--  ; 
      }
}; 
int main() {
  
    Test t ; 

    Myclass obj1(10); 
    Count t1,t2,t3,t4 ; 

    return  0 ; 
}



