#include <stdio.h>

int main(){
    char name[30];
    int age;
    float height;
    char suject;
    float grade;
    char gradeChar;

    printf("Enter name, age, height, subject, grade, grade symbol: ");
    scanf("%s %d %f %c %f %c", &name, &age, &height, &suject, &grade, &gradeChar);

    printf("%s is %d years old and %.1f centumeters tall.\n", name,age,height);
    printf("In subject %c, %s got %.2f which is symbolized as '%c'.\n",suject,name,grade,gradeChar);

    return 0;
}
