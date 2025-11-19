#include <stdio.h>
typedef struct Student{
    char name[32];
    char usn[11];
    float averageScore;
    long long int phoneNumber;
}Student;
int main()
{
    Student student1={"Ria","4GW24AD045",95.57,8904327689},
    student2={"","",0.0f,0};
    printf("%d  %d  \n",sizeof(Student),sizeof(student1));
}