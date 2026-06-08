#include <stdio.h>
#include <math.h>

struct Kalkulator {
    int n;
    int a;
    int b;
    int hasil;
    float c;
    float d;
    float e;
    float f;
    float hasilbagi;
}; // variabel dideklarasikan untuk menyimpan nilai yang digunakan dalam operasi kalkulator.

#define PI 3.14159265 // mendefenisikan nilai phi

void printMenu() {
    printf("====================================\n");
    printf(" ^^ Program Kalkulator Sederhana ^*\n");
    printf("====================================\n\n");
    printf("\tDaftar menu :\n");
    printf("\t1. Penjumlahan\n");
    printf("\t2. Pengurangan\n");
    printf("\t3. Perkalian\n");
    printf("\t4. Pembagian\n");
    printf("\t5. Pangkat dua\n");
    printf("\t6. Sisa bagi\n");
    printf("\t7. Turunan\n");
    printf("\t8. Integral Subsitusi\n");
    printf("\t9. Faktorial\n");
    printf("\t10. Pangkat tiga\n");
    printf("\t11. Logaritma\n");
    printf("\t12. Logaritma Natural (ln)\n");
    printf("\t13. Trigonometri\n");
    printf("\t14. Konversi Suhu\n"); 
    
    
}

void printTrigonometriMenu() {
    printf("--------------------------------------------\n");
    printf("Daftar menu trigonometri\n") ;
    printf("\t1. Sinus\n");
    printf("\t2. Kosinus\n");
    printf("\t3. Tangen\n");
    printf("\t4. Kembali ke menu utama\n");
}

int hitungPenjumlahan() {
    struct Kalkulator k; //kita dapat mengakses dan menyimpan nilai dalam variabel-variabel yang didefinisikan dalam struktur tersebut.
    printf("\n1. Penjumlahan :\n");
    printf("Masukkan banyak bilangan untuk dijumlah: ");
    scanf("%d", &k.n); //Menerima input banyak bilangan yang akan dijumlahkan.

    k.hasil = 0;
    for (int i = 1; i <= k.n; i++) {
        printf("Masukkan bilangan ke-%d: ", i);
        scanf("%d", &k.a);  //Melakukan loop sebanyak k.n kali untuk menerima input bilangan dan menjumlahkannya.
        k.hasil += k.a; 
    }

    printf("------------------------------- +\n");
    printf("Hasil:\t\t\t   %d\n", k.hasil); // hasil penjumlahan disimpan dalam k.hasil dan akan diprintkan kelayar
    return 0;
}

int hitungPengurangan() {
    struct Kalkulator k;
    printf("\n2. Pengurangan :\n");
    printf("Contoh : \nBilangan 1: 3\nBilangan 2: 4\nBilangan 3: 7\nMaka cara kerja program: 3 - 4 - 7 = -8 \n\n");
    printf("Masukkan banyak bilangan untuk dikurangkan: ");
    scanf("%d", &k.n);

    k.hasil = 0;
    for (int i = 1; i <= k.n; i++) {
        printf("Masukkan bilangan ke-%d: ", i);
        scanf("%d", &k.a);
        if (i == 1) {
            k.hasil = k.a;
        } else {
            k.hasil -= k.a;
        }
    }

    printf("------------------------------- -\n");
    printf("Hasil:\t\t\t   %d\n", k.hasil);
    return 0;
}

int hitungPerkalian() {
    struct Kalkulator k;
    printf("\n3. Perkalian :\n");
    printf("Masukkan banyak bilangan untuk dikalikan: ");
    scanf("%d", &k.n);

    k.hasil = 1;
    for (int i = 1; i <= k.n; i++) {
        printf("Masukkan bilangan ke-%d: ", i);
        scanf("%d", &k.a);
        k.hasil *= k.a;
    }

    printf("------------------------------- *\n");
    printf("Hasil:\t\t\t   %d\n", k.hasil);
    return 0;
}

int hitungPembagian() {
    struct Kalkulator k;
    printf("\n4. Pembagian :\n");
    printf("Masukkan banyak bilangan untuk dibagikan: ");
    scanf("%d", &k.n);

    printf("Masukkan bilangan ke-1: ");
    scanf("%f", &k.c);
    k.hasilbagi = k.c; // Menginisialisasi hasilbagi dengan bilangan pertama

    for (int i = 2; i <= k.n; i++) {
        printf("Masukkan bilangan ke-%d: ", i);
        scanf("%f", &k.c);
        k.hasilbagi /= k.c; // Menggunakan operator /= untuk pembagian
    }

    printf("------------------------------- :\n");
    printf("Hasil:\t\t\t   %.2f\n", k.hasilbagi);
    return 0;
}

int hitungPangkatDua() {
    struct Kalkulator k;
    printf("\n5. Pangkat dua :\n");
    printf("Masukkan bilangan: ");
    scanf("%d", &k.a);
    k.hasil = k.a * k.a;
    printf("------------------------------- ^2\n");
    printf("Hasil:\t\t\t   %d\n", k.hasil);
    return 0;
}

int hitungSisaBagi() {
    struct Kalkulator k;
    printf("\n6. Sisa bagi :\n");
    printf("Masukkan angka: ");
    scanf("%d", &k.a);
    printf("Masukkan pembagi: ");
    scanf("%d", &k.b);
    k.hasilbagi = k.a % k.b;
    printf("------------------------------- %%\n");
    printf("Hasil:\t\t\t   %.2f\n", k.hasilbagi);
    return 0;
}

int hitungTurunan() {
    struct Kalkulator k;
    printf("\n7. Turunan :\n");
    printf("Bentuk Umum (ax^2) + (bx) + (c)\n");
    printf("Masukkan nilai a: ");
    scanf("%f", &k.f);
    printf("Masukkan nilai b: ");
    scanf("%f", &k.d);
    printf("Masukkan nilai c: ");
    scanf("%f", &k.e);
    printf("Fungsinya Adalah: (%.2fx^2) + (%.2fx) + (%.2f)\n", k.f, k.d, k.e);
    printf("-------------------------------------------------------------------- :\n");
    float t;
    t = 2 * k.f;
    printf("Turunannya adalah: (%.2fx) + (%.2f)\n", t, k.d);
    return 0;
}

int hitungIntegralSubsitusi() {
    struct Kalkulator k;
    printf("\n8. Integral Subsitusi :\n");
    printf("Bentuk Umum (ax^2) + (bx) + (c)\n");
    printf("Masukkan nilai a: ");
    scanf("%f", &k.f);
    printf("Masukkan nilai b: ");
    scanf("%f", &k.d);
    printf("Masukkan nilai c: ");
    scanf("%f", &k.e);
    printf("Fungsinya Adalah: (%.2fx^2) + (%.2fx) + (%.2f)\n", k.f, k.d, k.e);
    printf("----------------------------------------------------------------------- :\n");
    float i, j;
    i = k.f / 3;
    j = k.d / 2;
    printf("Integralnya adalah: (%.2fx^3) + (%.2fx^2) + (%.2fx) + c\n", i, j, k.e);
    return 0;
}

int hitungFaktorial() {
    struct Kalkulator k;
    printf("\n9. Faktorial :\n");
    printf("Masukkan nilai: ");
    scanf("%d", &k.a);
    int y;
    k.hasil = 1;
    for (y = 1; y <= k.a; y++) {
        k.hasil = k.hasil * y;
    }
    printf("%d! = %d\n", k.a, k.hasil);
    return 0;
}

int hitungPangkatTiga() {
    struct Kalkulator k;
    printf("\n10. Pangkat tiga :\n");
    printf("Masukkan bilangan: ");
    scanf("%d", &k.a);
    k.hasil = k.a * k.a * k.a;
    printf("------------------------------- =\n");
    printf("Hasil:\t\t\t   %d\n", k.hasil);
    return 0;
}

int hitungLogaritma() {
    struct Kalkulator k;
    printf("\n11. Logaritma:\n");
    float x, hasilLog;
    printf("Masukkan nilai: ");
    scanf("%f", &x);
    hasilLog = log10(x);
    printf("-------------------------------\n");
    printf("log %.2f = %.2f\n", x, hasilLog);
    return 0;
}

int hitungLogaritmaNatural() {
    struct Kalkulator k;
    float x;
    float hasilLog;
    printf("\n12. Logaritma Natural (ln):\n");
    printf("Masukkan nilai: ");
    scanf("%f", &x);
    hasilLog = log(x);
    printf("------------------------------- ln\n");
    printf("Hasil:\t\t\t   %.2f\n", hasilLog);
    return 0;
}

int hitungSinus() {
    struct Kalkulator k;
    printf("\n1. Sinus :\n");
    float degree, hasilSin;
    printf("Masukkan nilai dalam derajat: ");
    scanf("%f", &degree);
    hasilSin = sin(degree * PI / 180.0); // Konversi derajat ke radian
    printf("-------------------------------\n");
    printf("sin %.2f = %.2f\n", degree, hasilSin);
    return 0;
}

int hitungKosinus() {
    struct Kalkulator k;
    float degree;
    printf("\n2. Kosinus :\n");
    float hasilCos;
    printf("Masukkan nilai dalam derajat: ");
    scanf("%f", &degree);
    hasilCos = cos(degree * PI / 180.0); // Konversi derajat ke radian
    printf("-------------------------------\n");
    printf("cos %.2f = %.2f\n", degree, hasilCos);
    return 0;
}

int hitungTangen() {
    struct Kalkulator k;
    printf("\n3. Tangen :\n");
    float hasilTan;
    float degree;
    printf("Masukkan nilai dalam derajat: ");
    scanf("%f", &degree);
    if (degree == 90) {
        printf("-------------------------------\n");
        printf("Tangennya tidak terdefinisi.\n");
        return 0;
    }
    hasilTan = tan(degree * PI / 180.0); // Konversi derajat ke radian
    printf("-------------------------------\n");
    printf("tan %.2f = %.2f\n", degree, hasilTan);
    return 0;
}


// konversi suhu
void konversiSuhu() {
    struct Kalkulator k;
    printf("\n14. Konversi Suhu:\n");
    int pilihan;
    
    printf("Pilih opsi konversi suhu:\n");
    printf("\t1. Celsius ke Fahrenheit\n");
    printf("\t2. Fahrenheit ke Celsius\n");
    printf("\t3. Celsius ke Kelvin\n");
    printf("\t4. Kelvin ke Celsius\n");
    printf("\t5. Kembali ke Menu Utama\n");
    printf("Pilihan: ");
    scanf("%d", &pilihan);

    switch (pilihan) {
        case 1:
            printf("\nMasukkan suhu dalam Celsius: ");
            scanf("%f", &k.c);
            k.f = (k.c * 9 / 5) + 32;
            printf("Suhu dalam Fahrenheit: %.2f\n\n", k.f);
            break;
        case 2:
            printf("\nMasukkan suhu dalam Fahrenheit: ");
            scanf("%f", &k.f);
            k.c = (k.f - 32) * 5 / 9;
            printf("Suhu dalam Celsius: %.2f\n\n", k.c);
            break;
        case 3:
            printf("\nMasukkan suhu dalam Celsius: ");
            scanf("%f", &k.c);
            k.d = k.c + 273.15;
            printf("Suhu dalam Kelvin: %.2f\n\n", k.d);
            break;
        case 4:
            printf("\nMasukkan suhu dalam Kelvin: ");
            scanf("%f", &k.d);
            k.c = k.d - 273.15;
            printf("Suhu dalam Celsius: %.2f\n\n", k.c);
            break;
        case 5:
            return; // Kembali ke menu utama
        default:
            printf("\nPilihan tidak valid. Silakan pilih opsi 1-5.\n\n");
    }
}

int main() {
    int menu;

    do {
        printMenu();
        printf("\nPilih menu (1-15) atau 0 untuk keluar: ");
        scanf("%d", &menu);

        switch (menu) {
            case 1:
                hitungPenjumlahan();
                break;
            case 2:
                hitungPengurangan();
                break;
            case 3:
                hitungPerkalian();
                break;
            case 4:
                hitungPembagian();
                break;
            case 5:
                hitungPangkatDua();
                break;
            case 6:
                hitungSisaBagi();
                break;
            case 7:
                hitungTurunan();
                break;
            case 8:
                hitungIntegralSubsitusi();
                break;
            case 9:
                hitungFaktorial();
                break;
            case 10:
                hitungPangkatTiga();
                break;
            case 11:
                hitungLogaritma();
                break;
            case 12:
                hitungLogaritmaNatural();
                break;
            case 13:
                do {
                    printTrigonometriMenu();
                    printf("Pilih menu trigonometri: ");
                    scanf("%d", &menu);

                    switch (menu) {
                        case 1:
                            hitungSinus();
                            break;
                        case 2:
                            hitungKosinus();
                            break;
                        case 3:
                            hitungTangen();
                            break;
                        case 4:
                            break;
                        default:
                            printf("Pilihan tidak valid. Silakan coba lagi.\n");
                            break;
                    }
                } while (menu != 4);
                break;
            case 14:
                konversiSuhu();
                break;
            case 0:
                printf("Terima kasih! Program kalkulator selesai.\n");
                break; 
        
            default:
                printf("Menu yang Anda pilih tidak valid. Silakan pilih menu dari 1-15 atau 0 untuk keluar.\n");
        }
    } while (menu != 0);

    return 0;
}
