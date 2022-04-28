
#include <stdio.h>
#include <string.h>
class Student {
public:
    char name[30];
     int grade;
};

Student student[100];
int main()
{

        FILE * fin = fopen("input.txt", "r");
        int N;
        fscanf( fin, "%d", &N );
        //printf("讀到N是: %d\n", N);
        for(int i=0; i<N; i++){

            fscanf( fin, "%s %d", student[i].name, &student[i].grade );
            //printf("讀到了 %s %d\n", name[i], grade[i] );
        }
        for(int k=0; k<N-1; k++){
            for(int i=0; i<N; i++){
                if( student[i].grade < student[i+1].grade ){
                    Student temp = student[i];
                    student[i] = student[i+1];
                    student[i+1] = temp;

                }
                }
            }

        for(int i=0; i<N; i++){
            printf("%s %d\n", student[i].name, student[i].grade );

        }
}
