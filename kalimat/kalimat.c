#include <stdio.h>
#include <string.h>
#include "kalimat.h"

void pengolahanKalimat(){
    
    //deklarasi variabel
    char kalimat1[100], kalimat2[100], kalimat3[100], gabungan[100], keBalik[100];
    int jumHuruf1 = 0, jumHuruf2 = 0, jumHuruf3 = 0, totalHuruf = 0, len, i;

    //Membuat inputan
    printf("Masukkan kalimat pertama: ");
    scanf(" %[^\n]", kalimat1);
    printf("Masukkan kalimat kedua: ");
    // fgets(kalimat2, sizeof(kalimat2), stdin);
    scanf(" %[^\n]", kalimat2);
    printf("Masukkan kalimat ketiga: ");
    // fgets(kalimat3, sizeof(kalimat3), stdin);
    scanf(" %[^\n]", kalimat3);
    
    //mengabungkan 3 kalimat 
    sprintf(gabungan, "%s %s %s", kalimat1, kalimat2, kalimat3);

    // Hasil Membalik kalimat gabungan
    len = strlen(gabungan);
    
    int j = 0;
    for (i = len - 1; i >= 0 ; i--) {
      keBalik[j] = gabungan[i];
      j++;
    }

    //Menghitung Jumlah kalimat
    for (int i = 0; kalimat1[i] != '\0'; i++){
        if((kalimat1[i] >= 'a' && kalimat1[i] <= 'z') || (kalimat1[i] >= 'A' && kalimat1[i] <= 'Z')){
            jumHuruf1++;
        }
    }

    // menghitung kalimat 2
    for (int i = 0; kalimat2[i] != '\0'; i++){
        if((kalimat2[i] >= 'a' && kalimat2[i] <= 'z') || (kalimat2[i] >= 'A' && kalimat2[i] <= 'Z')){
            jumHuruf2++;
        }
    }
    
    // menghitung kalimat 3
    for (int i = 0; kalimat3[i] != '\0'; i++){
        if((kalimat3[i] >= 'a' && kalimat3[i] <= 'z') || (kalimat3[i] >= 'A' && kalimat3[i] <= 'Z')){
            jumHuruf3++;
        }
    }

    //Menghitung total semua huruf
    for (int i = 0; gabungan[i] != '\0'; i++){
        if((gabungan[i] >= 'a' && gabungan[i] <= 'z')||(gabungan[i] >= 'A' && gabungan[i] <= 'Z')){
            totalHuruf++;
        }
    }

    printf("Gabungan 3 buah inputan kalimat = %s \nHasil membalik kalimat gabungan = %s \nJumlah huruf kalimat kedua = %d \nJumlah huruf kalimat kedua = %d \nJumlah huruf kalimat ketiga = %d \nTotal Jumlah huruf= %d \n", 
            gabungan, keBalik, jumHuruf1, jumHuruf2, jumHuruf3, totalHuruf);

}