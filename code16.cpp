#include <iostream>
using namespace std;

int main() {
     int size;
     cout<<"enter the size of array :-"<<endl;
     cin>>size;
     int NUMs[size];
     cout<<"enter the value of numbers:-"<<endl;
     for(int i=0;i<size;i++){
        cin>>NUMs[i];
     }
     int largest=INT_FAST16_MIN;
     for( int i=0;i<size;i++ ){
        if(NUMs[i]>largest){
            largest=NUMs[i];
        }
     }
     cout<<"largest number is := "<<largest<<endl;
    return 0;
}