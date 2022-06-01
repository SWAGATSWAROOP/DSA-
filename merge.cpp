#include<iostream>
using namespace std;

struct Array{
    int A[20];
    int size;
    int length;
};

void Display(Array arr){
        for(int i=0;i<arr.length;i++){
            cout<<arr.A[i]<<" ";
        }
        cout<<endl;
}

Array* Merge(Array*arr,Array*arr2){
    int i,j,k;
    i=j=k=0;
    Array* arr3 = (Array*)malloc(sizeof(struct Array));
    while(i<arr->length && j<arr2->length){
        if(arr->A[i]<arr2->A[j]){
            arr3->A[k++]=arr->A[i++];
        }
        else{
            arr3->A[k++]=arr2->A[j++];
        }
    }
    for(;i<arr->length;i++){
        arr3->A[k++]=arr->A[i];
    }
    for(;j<arr2->length;j++){
        arr3->A[k++]=arr2->A[j];
    }
    arr3->length = arr->length + arr2->length;
    arr3->size = 10;
    return arr3;
}

int main(){
    Array arr1={{2,6,10,15,25},10,5};
    Array arr2={{3,4,7,18,20},10,5};
    Array* arr3=Merge(&arr1,&arr2);
    Display(*arr3);
    return 0;
}