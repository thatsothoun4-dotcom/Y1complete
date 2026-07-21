#include <bits/stdc++.h>
using namespace std ;
class Solution {
 
    public :
    string name ; 
    int age ;  
    void show() {
        std::cout << "Name : " << name <<endl ; 
        std::cout << "age : " << age <<endl ; 
    }
}  ;  
class Calculate {
    public :
    int w , h ; 

     void cal(){
        double  res = w * h ;  
        cout << "result : " << res <<endl ; 
    }
} ; 
int main() {
 
    Solution s ; 
    cout << "name : " ; cin>>s.name ; 
    cout << "age : " ; cin>>s.age ;  
    s.show() ;  
    Calculate c ; 
    cout <<"Width  : " ; cin >> c.w ;
    cout << "height : " ; cin>> c.h ; 
    c.cal() ; 
    return 0 ; 
}