#include <stdio.h>
int addTen(int *numbers, int n){ //
    for (int i = 0; i < n; i++){
        printf("[%p] = %d\n", numbers+i, *(numbers+i));
        *(numbers+i) += 10;
    *numbers = 0;

    }
}
int addTwenty(int *n){
    *n += 20;
}
int main(){
    int numbers[] = {4, 5, 6, 7, 8};
    int n = 5;
    addTen(numbers,n); 
    for (int i = 0; i < n; i++){
        printf("main [%p] = %d\n", numbers+i, *(numbers+i));
    }
    addTwenty(&n); 
    printf("n = %d\n",n);

}