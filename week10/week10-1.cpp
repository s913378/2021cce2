
#include <stdio.h>
char name[100][30];
int grade[100];
int main()
{

        FILE * fin = fopen("input.txt", "r");
        int N;
        fscanf( fin, "%d", &N );
        //printf("讀到N是: %d\n", N);
        for(int i=0; i<N; i++){

            fscanf( fin, "%s %d", name[i], &grade[i] );
            //printf("讀到了 %s %d\n", name[i], grade[i] );
        }
        for(int i=0; i<N; i++){
            printf("%s %d\n", name[i], grade[i] );

        }
}
