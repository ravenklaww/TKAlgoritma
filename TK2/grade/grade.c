#include <stdio.h>
#include "grade.h"
#include <stdlib.h>

void evaluateGrade()
{
    //deklarasi
    double nilaiQuiz, nilaiTugas, nilaiAbsensi, nilaiPraktek, nilaiUas, rataRata, totalNilai = 0, rataRataTotal;
    int counter = 0, lanjut;

    //perulangan inputan harus lebih dari 10 mahasiswa
    do
    {
        printf("\nMasukkan nilai mahasiswa %d: \n", counter + 1);
        printf("Masukkan nilai Quiz: ");
        scanf("%lf", &nilaiQuiz);
        printf("Masukkan nilai Tugas: ");
        scanf("%lf", &nilaiTugas);
        printf("Masukkan nilai Absensi: ");
        scanf("%lf", &nilaiAbsensi);
        printf("Masukkan nilai Praktek: ");
        scanf("%lf", &nilaiPraktek);
        printf("Masukkan nilai UAS: ");
        scanf("%lf", &nilaiUas);

        //hitung rata-rata
        rataRata = (nilaiQuiz + nilaiTugas + nilaiAbsensi + nilaiPraktek + nilaiUas) / 5;
        totalNilai += rataRata;
        printf ("Rata-rata nilai mahasiswa: %.2f\n", rataRata);

        // Pengodisian untuk grade
        printf("Grade: ");
        if (rataRata <= 55){
            printf ("E\n");
        } else if (rataRata <= 65) {
            printf ("D\n");
        } else if (rataRata <= 75){
            printf ("C\n");
        } else if (rataRata <= 85){
            printf ("B\n");
        } else if (rataRata <= 100){
            printf ("A\n");
        }
        
        //menampilkan jika mahasiswa lulus atau tidak
        if (rataRata <= 65){
            printf("Maaf anda tidak lulus.\n", counter + 1);
        } else {
            printf("Selamat anda lulus\n");
        }

        //menambahkan counter untuk mengetahui jumlah mahasiswa yang sudah diinputkan
        counter++;

        //pertanyaan jika ingin menginputkan lebih dari 10 mahasiswa
        if (counter >= 10)
        {
            printf("Apakah anda ingin menginputkan nilai mahasiswa lagi? (1: Ya, 0: Tidak): ");
            scanf("%d", &lanjut);
        }
        
    } while (lanjut == 1 || counter < 10);

    //Rata-rata semua mahasiswa
    rataRataTotal = totalNilai / counter;
    printf("\nRata - rata nilai semua mahasiswa: %.2f\n", rataRataTotal);

}