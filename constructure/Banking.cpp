#include <bits/stdc++.h>
using namespace std ; 
 
class Banking_Account{
  
    private : 
        double password ; 
        double codeOTP ; 
    public : 
        string name ; 
        int age ; 
        int id ; 
        //concept 
        Banking_Account(string n  , int a , int i  , double pass , double c){
 
            name = n ; 
            age = a ; 
            id = i ; 
            password =  pass ; 
            codeOTP = c ; 
        } 
        double getPass() {
         
            return password ; 
        } 
        double getOTP() {
 
            return codeOTP ; 
        } 
 
        void Banking_Show() {
 
            cout << left ; 
            cout << "Name "<< name <<endl ; 
            cout << "Age :"<< age <<endl ; 
            cout << "Id : "<<id <<endl ; 
            cout << "Password : " <<password <<endl ;
            cout << "code :"<<codeOTP <<endl ; 

        } 
} ;  
int CodeOTP() {
  
    int OTP =100000+rand()%900000; 

    return OTP ; 


}
int main() {
  
    string name  = "Thoun"; 
    int age =12; 
    int id  = 12121 ;  
    double password = 1123 ; 
    double otp  = CodeOTP() ; 
    Banking_Account obj(name , age , id , password , otp ) ; 
 
    obj.Banking_Show() ; 

    return 0; 

}









