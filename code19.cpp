#include <iostream>
using namespace std;
// two pinter approach 
int main() {
    int arr[]={1,2,3,4};
    int size=sizeof(arr)/sizeof(arr[0]);
    int start=0;
    int end=size-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    cout<<"revarsed array is :-"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i];
    } 
    
    return 0;
}