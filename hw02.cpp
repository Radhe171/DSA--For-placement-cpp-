#include <iostream>
using namespace std;
int revnumber(int n ){
    int rev =0;
    int dig =n;
    while(dig>0){
        int last =dig%10;
        rev=rev*10+last;
       
        dig=dig/10;
    }
    return rev;


}
int main() {
   cout<< revnumber(789);
    
    return 0;
}