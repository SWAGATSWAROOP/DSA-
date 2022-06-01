#include<iostream>
#include<stdlib.h>
using namespace std;

struct Array{
    int *A;
    int size;
    int length;
};

void swap(int* x,int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void Display(Array arr){
        for(int i=0;i<arr.length;i++){
            cout<<arr.A[i]<<" ";
        }
        cout<<endl;
}

void Append(Array *arr,int x){
    if(arr->length<arr->size){
        arr->A[arr->length++]=x;
    }
}

void Insert(Array *arr,int index,int x){
    if((0<=index) && (index<=arr->length)){
        for(int i=arr->length;i>index;i--){
            arr->A[i]=arr->A[i-1];
        }
        arr->A[index]=x;
        arr->length++;
    }
}

int Delete(Array *arr,int index){
    int x = arr->A[index];
    if((0<=index) && (index<=arr->length)){
    for(int i=index;i<arr->length;i++){
        arr->A[i]=arr->A[i+1];
    }
    arr->length--;
    return x;
    }
    return 0;
}

int LinearSearch(struct Array* arr,int key){
    for(int i=0;i<arr->length;i++){
        if(arr->A[i]==key)
        {   // move to head
            swap(&arr->A[i],&arr->A[0]);
            return i;  
        }
    }
    return -1;
}

int BinarySearch(struct Array* arr,int key){
    int i=0,e=arr->length-1;
    while(i<=e){
        int mid = (i+e)/2;
        if(arr->A[mid]==key){
           return mid;
        }
        if(arr->A[mid]>key){
            e = mid - 1;
        }
        else{
            i = mid + 1;
        }
    }
    return -1;
}

int RBinarySearch(Array* a,int l,int h,int key){
    int mid;
    if(l<=h){
        mid = (l+h)/2;
        if(a->A[mid]==key){
            return mid;
        }
        else if(a->A[mid]>key){
            return RBinarySearch(a,l,mid-1,key);
        }
        else{
            return RBinarySearch(a,mid+1,h,key);
        }
    }
    return -1;
}

void AReverse(Array* arr){
    int *B = new int[arr->length];
    for(int i=arr->length-1,j=0;i>=0;i--,j++){
        B[i]=arr->A[j];
    }
    for(int i=0;i<arr->length;i++){
        arr->A[i]=B[i];
    }
    delete [] B;
    B = NULL;
}

void Reverse(Array* arr){
    for(int i=0,j=arr->length-1;i<j;i++,j--){
        swap(&arr->A[i],&arr->A[j]);
    }
}

void Rearrange(Array* arr){
    int i = 0;
    int j = arr->length-1;
    while(i<j){
        while(arr->A[i]<0){
            i++;
        }
        while(arr->A[j]>=0){
            j--;
        }
        if(i<j)swap(&arr->A[i],&arr->A[j]);
    }
}

void InsertSort(Array* arr,int x){
    int i = arr->length-1;
    if(arr->length==arr->size){
        return;
    }
    while(i>=0 && x<arr->A[i]){
        arr->A[i+1]=arr->A[i];
        i--;
    }
    arr->A[i+1]=x;
    arr->length++;
}

bool issorted(Array arr){
    for(int i=1;i<arr.length;i++){
        if(arr.A[i-1]>arr.A[i]){
            return false;
        }
    }
    return true;
}

Array* Merging(Array* arr1,Array* arr2){
    Array * arr3 = new Array;
    arr3->size = arr1->size + arr2->size;
    arr3->A = new int [arr3->size];
    int i,j,k = i = j = 0;
    while(i<arr1->length && j<arr2->length){
        if(arr1->A[i]>arr2->A[j]){
            arr3->A[k++]=arr2->A[j++];
        }
        else{
            arr3->A[k++]=arr1->A[i++];
        }
    }
    for(;i<arr1->length;i++){
        arr3->A[k++]=arr1->A[i];
    }

    for(;j<arr2->length;j++){
        arr3->A[k++]=arr2->A[j];
    }

    arr3->length = k;
    return arr3;
}

Array* Union(Array* arr1,Array* arr2){
    Array * arr3 = new Array;
    arr3->size = arr1->size + arr2->size;
    arr3->A = new int [arr3->size];
    int i,j,k = i = j = 0;
    while(i<arr1->length && j<arr2->length){
        if(arr1->A[i]>arr2->A[j]){
            arr3->A[k++]=arr2->A[j++];
        }
        else if(arr1->A[i]<arr2->A[j]){
            arr3->A[k++]=arr1->A[i++];
        }
        else{
            arr3->A[k++]=arr1->A[i++];
            j++;
        }
    }
    for(;i<arr1->length;i++){
        arr3->A[k++]=arr1->A[i];
    }

    for(;j<arr2->length;j++){
        arr3->A[k++]=arr2->A[j];
    }

    arr3->length = k;
    return arr3;
}

Array* Intersection(Array* arr1,Array* arr2){
    Array * arr3 = new Array;
    arr3->size = arr1->size + arr2->size;
    arr3->A = new int [arr3->size];
    int i,j,k = i = j = 0;
    while(i<arr1->length && j<arr2->length){
        if(arr1->A[i]>arr2->A[j]){
            j++;
        }
        else if(arr1->A[i]<arr2->A[j]){
            i++;
        }
        else{
            arr3->A[k++]=arr1->A[i++];
            j++;
        }
    }

    arr3->length = k;
    return arr3;
}

Array* Difference(Array* arr1,Array* arr2){
    Array * arr3 = new Array;
    arr3->size = arr1->size + arr2->size;
    arr3->A = new int [arr3->size];
    int i,j,k = i = j = 0;
    while(i<arr1->length && j<arr2->length){
        if(arr1->A[i]>arr2->A[j]){
            arr3->A[k++]=arr2->A[j++];
        }
        else if(arr1->A[i]<arr2->A[j]){
            i++;
        }
        else{
            i++;
            j++;
        }
    }
    for(;j<arr2->length;j++){
        arr3->A[k++]=arr2->A[j];
    }

    arr3->length = k;
    return arr3;
}

int main(){
    Array arr;
    cout<<"Enter size of Array: ";
    cin>>arr.size;
    arr.A=(int *)malloc(arr.size*sizeof(int));
    cout<<"Enter The number of numbers: ";
    cin>>arr.length;

    cout<<"Enter the elements\n";
    for(int i=0;i<arr.length;i++){
        cin>>arr.A[i];
    }

    Array arr1;
    cout<<"Enter size of Array: ";
    cin>>arr1.size;
    arr1.A=(int *)malloc(arr1.size*sizeof(int));
    cout<<"Enter The number of numbers: ";
    cin>>arr1.length;

    cout<<"Enter the elements\n";
    for(int i=0;i<arr1.length;i++){
        cin>>arr1.A[i];
    }
    Array* arr3 = Difference(&arr,&arr1);
    Display(*arr3);
    delete [] arr3->A;
    arr3->A = NULL;
    delete arr3;
    arr3 = NULL;
    free(arr.A);
    arr.A = NULL;
    return 0;
}


