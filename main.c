#include <stdio.h>
#include <string.h>
#include "./detik-konverter/detik.h"
#include "./kalimat/kalimat.h"

void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
    }
}

int main(){
    
    int menu;

    do {
        printf("Tugas Kelompok ke-1 - Kelompok 6\n");
        printf("Pilihan menu: ");
        printf("\n1. Konverter detik\n2. Kalimat\n3. Exit Program\n");
      
        scanf("%d",&menu); 

    if (menu == 1){
        // unsigned int x;

        // printf("input x dalam detik\n");
        // scanf("%d",&x);
        detikConverter();
    }else if (menu == 2){
        pengolahanKalimat();
    }

    } while (menu != 3);
    return 0;
}