#include <stdio.h>

char nation[2001][80];
int main()
{
    int N;
    scanf("%d", &N);

    std::map< std:string, int > table;
    for(int i=0; i<N; i++){
        scanf("%s", nation[i] );

        table[ nation[i] ] ++;

        char line[80];
        gets(line);
     }

     for( const auto & one: table ){
          printf("%s %d\n", table.first.c_str(), table.second);
     }
 }
