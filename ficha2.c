#include <stdio.h>

#define PI 3.141516
#define students_len sizeof (students)/sizeof(struct Student)

struct Student {
    int id;
    char* name;
};
const struct Student students[] = {
        {1, "Aluno 1"},
        {2, "Aluno 2"},
};

double calculate_circle_perimeter(double radius) {
    return 2 * PI * radius;
}
double calculate_circle_area(double radius) {
    return PI * radius * radius;
}

int main()
{
    printf("Perimetro (5): %f\n", calculate_circle_perimeter(5));
    printf("Area (5): %f\n", calculate_circle_area(5));
    printf("CHAR: %c DEC: %i OCT: %o HEX: %x\n", 'A', 'A', 'A', 'A');
    printf("Numero | Nome\n");
    printf("----------------------------------------------------\n");
    for (int i = 0; i < students_len; i++) {
        const struct Student student = students[i];
        printf("%i      | %s\n", student.id, student.name);
    }
    printf("----------------------------------------------------\n");
    return 0;
}
