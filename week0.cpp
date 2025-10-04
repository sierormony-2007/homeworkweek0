#include <iostream>
using namespace std;
void insertNumber(int array[], int pos, int val, int size){
    if(pos<0||pos>size){
        cout<<"Error!"<<endl;
        return;
    }
    for(int i=size; i>pos; i--){
        array[i]=array[i-1];
    }
    array[pos]=val;
    size++;
}
void deleteNumber(int array[], int pos, int& size){
    if(pos<0||pos>=size){
        cout<<"Error!"<<endl;
        return;
    }
     for(int i=pos; i<size; i++){
        array[i]=array[i+1];
    }
    size--;
}
int main(){
    int a[10]={5,4,3,2,1};
    int size=5;

    cout<<"Original Number: ";
    for(int i=0; i<size; i++){
        cout<<a[i]<<" ";
    }
    
    cout<<endl<<"After Insertion: ";
    insertNumber(a, 2, 10, size);
    for(int i=0; i<=size; i++){
        cout<<a[i]<<" ";
    }
    
    cout<<endl<<"After Deletion: ";
    deleteNumber(a, 2, size);
    for(int i=0; i<size; i++){
        cout<<a[i]<<" ";
    }
}