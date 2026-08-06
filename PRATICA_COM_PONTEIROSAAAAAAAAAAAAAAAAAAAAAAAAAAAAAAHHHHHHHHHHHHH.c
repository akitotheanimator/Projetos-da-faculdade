#include <stdio.h> 

int main ( ) { 
    int vet1 [] = {1 , 2 , 3 , 4 , 5 , 6 , 7 };
    int vet2 [] = {7 , 6 , 5 , 4 , 3 , 2 , 1 };
    
    int *ptr1 = vet1;      //mesma coisa que vet1[0]
    int *ptr2 = vet1 + 3;  //mesma coisa que vet1[0 + 3]
    int *ptr3 = vet2 + 5;  //mesma coisa que vet2[0 + 5]
    
    (*ptr1)++;
    (*ptr2)++;
    (*ptr3)--;
    
    printf( "vet1 [0]: %d, vet1 [3]: %d, vet2 [5]: %d\n" , vet1[0] , vet1[3] , vet2[5]) ; 
    return 0; 
} 
