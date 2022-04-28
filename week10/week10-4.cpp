#include <stdio.h>
#include <vector>
#include <algorithm>
class Student{
public:
 int grade;
 char name[30];

};
Student student[100];
bool compare(Student a,Student b)
{
    return (a.grade>b.grade);
}
int main()
{
    FILE*fin=fopen("input.txt","r");
    int N;
    fscanf(fin,"%d",&N);
    std::vector<Student>student(20);
    //printf("讀到N是: %d\n",N);
    for(int i=0;i<N;i++){
        fscanf(fin,"%s %d",student[i].name,&student[i].grade);
        //printf("讀到了 %s %d\n",name[i],grade[i]);
    }
     std::sort(student.begin(),student.end(),compare);

    for(int i=0;i<N;i++){
        printf("%s %d\n",student[i].name,student[i].grade);
    }
}
