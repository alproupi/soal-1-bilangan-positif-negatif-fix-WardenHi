#include <stdio.h>

int main(){
    // level sedang
    int tahun;
    printf("Masukkan tahun: ");
    scanf("%d", &tahun);

    int check_tahun1 = tahun % 4;
    int check_tahun2 = tahun % 100;
    int check_tahun3 = tahun % 400;
    if (check_tahun1 == 0 && check_tahun2 != 0 || check_tahun3 == 0){
        printf("Tahun ini adalah tahun kabisat");
    } else {
        printf("Tahun ini tidak spesial");
    }
    return 0;
}