#include<stdio.h>
main(){
    int vector[7]= {3,6,9,12,15,18,21};
    int *ptr;
    ptr=&vector[0];
    printf("%d", ptr);

    for(int i=0; i<7; i++){
        printf(" %d", vector[i]);
        printf("%p\n", ptr);
    }
    return 0;
}