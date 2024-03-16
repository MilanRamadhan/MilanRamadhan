Tugas Pemrograman 1 dengan melakukan konversi bilangan Desimal, Biner, Oktal.
  
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

ketika user run kode program di atas maka akan menampilkan pilihan operasi kepada user, yaitu:
a. bilangan desimal ke biner
b. bilangan biner ke desimal
c. bilangan desimal ke oktal
d. bilangan oktal ke desimal

User akan di minta memilih salah satu operasi dengan memasukkan huruf yang sesuai (a, b, c, d).
Jika user memilih kode operasi atau case a seperti kode program di bawah ini, maka program akan mengeksekusi kode operasi bilangan desimal ke biner.

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

Setelah memilih case a, user akan di minta untuk memasukkan bilangan desimal, lalu bilangan desimal tersebut akan di ubah menjadi bilangan biner dengan membagi bilangan desimal tersebut secara berulang dengan 2 dan memasukkan sisa dari hasil pembagian tersebut untuk membentuk bilangan biner.

Jika user memilih kode operasi atau case b seperti kode program di bawah ini, maka program akan mengeksekusi kode operasi bilangan biner ke desimal.

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

Setelah memilih case b, user akan di minta untuk memasukkan bilangan biner, lalu bilangan biner tersebut akan di ubah menjadi bilangan desimal dengan mengambil setiap digit biner dari kanan ke kiri, kemudian mengalikan bilangan tersebut dengan pangkat 2 untuk menghitung nilai desimalnya. Proses ini akan dilakukan secara berulang sampai angka habis dan akan mendapatkan hasilnya.

Jika user memilih kode operasi atau case c seperti kode program di bawah ini, maka program akan mengeksekusi kode operasi bilangan desimal ke oktal.

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

Setelah memilih case c, user akan di minta untuk memasukkan bilangan desimal, lalu bilangan desimal tersebut akan di ubah ke dalam bilangan oktal dengan membagi bilangan tersebut secara berulang dengan 8 dan mengumpulkan dari sisa pembagian tersebut untuk membentuk bilangan oktal.

Jika user memilih kode operasi atau case d seperti kode program di bawah ini, maka program akan mengeksekusi kode operasi bilangan oktal ke desimal.

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

Setelah memilih case c, user akan di minta untuk memasukkan bilangan oktal yang terdiri dari  0, 1, 2, 3, 4, 5, 6, dan 7. Lalu bilangan oktal tersebut akan di ambil dari kanan ke kiri, kemudian mengalikan bilangan tersebut dengan pangkat 8 yang sesuai untuk menghitung nilai desimalnya.

Tugas Pemrograman 2 menentukan tahun kabisat.

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

Ketika user run kode program di atas, maka program akan meminta user untuk menginput 4 angka.

    printf("Masukkan tahun: ");
        scanf("%d", &tahun);
        while(getchar() != '\n');

    while(tahun > 9999 || tahun < 1000){
        printf("Masukkan kembali tahun: ");
        scanf("%d", &tahun);
        while(getchar() != '\n');
    }

Kode program di atas merupakan kode program untuk memasukkan inputan sesuai dengan syarat yang di minta, apabila user menginput kurang dari 4 angka, maka program akan meminta user untuk memasukkan kembali angka. Apabila user menginput lebih dari 4 angka maka user akan di minta untuk memasukkan kembali angka. Apabila user menginput selain dari angka atau user menginput huruf ataupun simbol maka program akan meminta user untuk memasukkan kembali angka.
Jika user memasukkan 4 angka, maka program akan memastikan 4 angka tersebut apakah tahun kabisat atau bukan.

    if(tahun %4 == 0 && tahun %100 != 0 || tahun %400 == 0){
        printf("Tahun kabisat");
    } else {
        printf("Bukan tahun kabisat");
    }
    return 0;
    }

jika angka tersebut habis di bagi 4 maka itu adalah tahun kabisat (tahun %4 == 0).
jika angka tersebut tidak habis di bagi 100 maka angka tersebut bukan tahun kabisat (tahun %100 != 0).
jika angka tersebut habis di bagi 400 maka angka tersebut adalah tahun kabisat (tahun %400 == 0). 
