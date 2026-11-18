#include <iostream>
using namespace std;

int main() {
   int index=-1;

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
            index=i;

        }
     }
     cout<<"smallest number is "<<smallest<<"  on index "<<index<<endl;
    return 0;
}