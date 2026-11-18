#include <iostream>
using namespace std;

int main() {
     int size;
     cout<<"enter the size of array"<<endl;
     cin>>size;
     int NUMs[size];
     cout<<"enter the value of numbers"<<endl;
     for(int i=0;i<size;i++){
        cin>>NUMs[i];
     }
     int smallest=INT_FAST8_MAX;
     for( int i=0;i<size;i++ ){
        if(NUMs[i]<smallest){
            smallest=NUMs[i];
        }
     }
     cout<<"smallest number is "<<smallest<<endl;
    return 0;
}