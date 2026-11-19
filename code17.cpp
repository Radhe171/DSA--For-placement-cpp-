#include <iostream>
using namespace std;

int main() {
    int index=-1;
    int arr[]={ 4,2,7,8,1,2,5};
    int  size= sizeof(arr)/sizeof(arr[0]);
    int target=8;
    int i;
    for( i=0 ;i<size;i++){
        if(arr[i]==target){
            index=i;
            cout<<"target found at index "<<index;
            return 0;
            
        }
      
    }
      if(index==-1){
          cout<<index<<endl;
          return 0;
        }
       
  
   
    return 0;
}