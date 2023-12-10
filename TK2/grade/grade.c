#include <stdio.h>
#include "grade.h"
#include <stdlib.h>

struct StudentGrade {
    int ID;
    int Quiz;
    int Tugas;
    int Praktek;
    int Absensi;
    int UAS;
};

void evaluateGrade(){

    int isTeminated = 0;
    int maxStudentsLen = 100;
    struct StudentGrade allGrades[maxStudentsLen];

    int idx = 0;

    while (isTeminated != 1){

        if (idx> maxStudentsLen){
            printf("max student reached\n");
            break;
        }

        int studentId;
        int quizScore;
        int tugasScore;
        int praktekScore;
        int absensiScore;
        int uasScore;
        // input student grade
        printf("input new student id :\n");
        scanf("%d",&studentId);

        printf("input quiz :\n");
        scanf("%d",&quizScore);

        printf("input absensi :\n");
        scanf("%d",&absensiScore);

        printf("input praktik :\n");
        scanf("%d",&praktekScore);

        printf("input tugas :\n");
        scanf("%d",&tugasScore);

        printf("input uas :\n");
        scanf("%d",&uasScore);

        //input new student
        allGrades[idx].ID = studentId;
        allGrades[idx].Quiz = quizScore;
        allGrades[idx].Tugas = tugasScore;
        allGrades[idx].Praktek = praktekScore;
        allGrades[idx].Absensi = absensiScore;
        allGrades[idx].UAS = uasScore;
        idx++;

        if (idx >= 10){
            printf("input 1 to finish or any number to continue\n");
            scanf("%d",&isTeminated);
        }
    }

    // evaluate score for each student
    printf("#############################\n");
    for(int i=0;i<idx;i++){
        struct StudentGrade s = allGrades[i];
        printf("studentId of %d\n",s.ID);

        int sumGrade = s.Absensi+s.Praktek+s.Quiz+s.Tugas+s.UAS;
        double avgGrade = (double) sumGrade / 5;

        if (avgGrade <= 55){
            printf("score is E\n");
            printf("Tidak Lulus\n");
        }else if (avgGrade <= 65){
            printf("score is D\n");
            printf("Tidak Lulus\n");
        }else if (avgGrade <= 75){
            printf("score is C\n");
        }else if (avgGrade <= 85){
            printf("score is B\n");
        }else {
            printf("score is A\n");
        }

        printf("\n");
    }
    printf("#############################\n");

}