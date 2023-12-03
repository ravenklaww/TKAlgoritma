#include <stdio.h>
#include <stdlib.h>

void detikConverter(){

    int second, hour, minute; 
    unsigned int secondInput;
    printf("Masukkan detik: ");
    scanf("%d", &secondInput);
 
    // Menghitung jam, menit, dan sisa detik
    hour = (secondInput/3600); 
    minute = (secondInput -(3600*hour))/60;
    second = (secondInput -(3600*hour)-(minute*60));
	
    // Print ke dalam format H:M:S
    printf("H:M:S - %d:%d:%d\n",hour,minute,second);
    
}