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


bool isPowerOfTwo(int n) {
    return n > 0 && (n & (n - 1)) == 0;
}


int main() {
   cout<< revnumber(789)<<endl;
    cout << (isPowerOfTwo(322) ? "Yes" : "No") << endl;
    
    return 0;
}


