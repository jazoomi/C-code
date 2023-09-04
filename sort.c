#include <stdio.h>
#include <stdlib.h>
#include "student.h"

typedef struct student{
  char name[128];
  int student_id;
  double grade;
} student_t;
// sorts the student struct
int compare_grades_desc(const void *a, const void *b) {
    student_t *student_a = (student_t *)a;
    student_t *student_b = (student_t *)b;

    if (student_a->grade < student_b->grade) {
        return -1;
    } else if (student_a->grade > student_b->grade) {
        return 1;
    } else {
        return 0;
    }
}

void sort_students_by_descending_grade(student_t *students_array, int num_students) {
    qsort(students_array, num_students, sizeof(student_t), compare_grades_desc);
}
