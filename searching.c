#include<stdio.h>

    int linearSearch(int arr[] , int n , int key ){
        for( int i=0 ; i<n ; i++){

        
        if (arr[i] == key)
        return i ;
    }
    return -1;
}
    int main(){
     int arr[]= {3,5,34,54,64,66};
     int n = sizeof(arr)/sizeof(arr[0]);
     int key = 34; 
    
     int result= linearSearch(arr , n , key );
     
     if ( result != -1 )
     printf(" Element %d found at index  %d \n " , key , result );
     else
     printf("Element %d not found in the array \n " ,key );

     return 0 ;
}