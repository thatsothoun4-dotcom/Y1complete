// access modifier in c++ 
// type of acces modifier 
// public private protected  


#include <bits/stdc++.h>
using namespace std ;
//use public : 
class Student{
  
    public :
        string name ; 
} ;  

//public + private 
class Emp {
 
    private: 
        double salary ; 
        int emId ; 
    public : 
        string nx ; 
        //apply parameter constructure  
        //for accees it  anywhere 
        Emp(string n , double s , int id){
            nx =n ; 

            salary =s ; 
            emId = id ;  
        } 
        void  setSalary(double s) {

            salary = s  ; 
        } 
        double getSalary() {
 
            return salary  ; 
        } 
        void setId(int id_x){
 
            emId = id_x ; 
        }
        int getId() {
 
            return emId  ; 
        }
} ;  
//public + private + protected 
class Employee {
 
    private : 
        double mn ; 
    protected : 
        int mId ;  
    public : 
        string us ; 

        // use parameter constructure 
        Employee(string n , double m , int mi){
 
            us = n ; 
            mn = m ; 
            mId = mi ; 
        } 
        void setmn(double i) {
 
            mn = i ; 
        } 
        double getmn() {
 
            return mn ; 
        }
} ;  
class Manage : public Employee {
 
    Manage(string n , double m , int mi) 
        : Employee(n,m,mi) {} ; 
 
    void showdetail() {
 
        cout << "Manager Name : "<<us <<endl ;
        cout << "Manageer Id :" << mId <<endl ; 

    }
} ; 
int main() {
  
    Student user ; 
    user.name = "John Deo" ; 
    cout << user.name<<endl ; 
 
    double  s =1000  ; 
    int d = 21201238 ; 
    Emp obj("Jake",s ,d) ;  
    cout << obj.nx<<endl ;
    // acees by private 
    obj.setSalary(s) ; 
    cout << obj.getSalary() <<endl ; 
    obj.setId(d)  ; 
    cout << obj.getId()<<endl ; 
    Employee checkus("Thoun",100000,2001) ; 
    cout << "Employee Name : " << checkus.us<<endl ; 
    double sal = 10000 ; 
    checkus.setmn(sal) ; 
    cout << "Employee Salary :$"<<checkus.getmn() <<endl ; 

 
    Manage m("Dara" , 1000 ,3000); 
    m.showDetail() ; 
    return 0 ; 

}

