#include <stdio.h>

int main(){
    int tahun;
        printf("Masukkan tahun: ");
        scanf("%d", &tahun);
        while(getchar() != '\n');

    while(tahun > 9999 || tahun < 1000){
        printf("Masukkan kembali tahun: ");
        scanf("%d", &tahun);
        while(getchar() != '\n');
    }
        

    if(tahun %4 == 0 && tahun %100 != 0 || tahun %400 == 0){
        printf("Tahun kabisat");
    } else {
        printf("Bukan tahun kabisat");
    }
    return 0;
}