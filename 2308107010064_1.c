#include <stdio.h>

int main() {
    char pilihan;
    int desimal, biner = 0, oktal = 0, angka, place = 1, copydesimal;

    printf("Pilih operasi:\n");
    printf("a. Bilangan Desimal ke Biner\n");
    printf("b. Bilangan Biner ke Desimal\n");
    printf("c. Bilangan Desimal ke oktal\n");
    printf("d. Bilangan oktal ke Desimal\n");
    printf("Masukkan pilihan anda:\n");
    scanf("%s", &pilihan);

    switch (pilihan) {
        case 'a':
            printf("Masukkan bilangan desimal: ");
            scanf("%d", &desimal);
            copydesimal = desimal;

            // desimal ke biner
            while (desimal > 0) {
                angka = desimal % 2;
                biner += angka * place;
                desimal /= 2;
                place *= 10;
            }

            printf("Biner: %d\n", biner);
            break;
        case 'b':
            printf("Masukkan bilangan biner: ");
            scanf("%d", &biner);

            // biner ke desimal
            desimal = 0;
            place = 1;
            while (biner > 0) {
                angka = biner % 10;
                desimal += angka * place;
                biner /= 10;
                place *= 2;
            }

            printf("Desimal: %d\n", desimal);
            break;
        case 'c':
            printf("Masukkan bilangan desimal: ");
            scanf("%d", &desimal);
            copydesimal = desimal;

            // desimal ke oktal
            place = 1;
            while (desimal > 0) {
                angka = desimal % 8;
                oktal += angka * place;
                desimal /= 8;
                place *= 10;
            }

            printf("oktal: %d\n", oktal);
            break;
        case 'd':
            printf("Masukkan bilangan oktal: ");
            scanf("%d", &oktal);

            // oktal ke desimal
            desimal = 0;
            place = 1;
            while (oktal > 0) {
                angka = oktal % 10;
                desimal += angka * place;
                oktal /= 10;
                place *= 8;
            }

            printf("Desimal: %d\n", desimal);
            break;
        default:
            printf("Pilihan tidak valid.\n");
            break;
    }

    return 0;
}
