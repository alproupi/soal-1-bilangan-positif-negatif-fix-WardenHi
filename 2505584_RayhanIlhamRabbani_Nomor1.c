#include <stdio.h>

int main(){
    // level mudah
    int num;
    printf("Masukkan bilangan: ");
    scanf("%d", &num);

    if(num < 0){
        printf("Bilangan negatif");
    } else if (num == 0){
        printf("Bilangan nol");
    } else {
        printf("Bilangan positif");
    }
    return 0;
}