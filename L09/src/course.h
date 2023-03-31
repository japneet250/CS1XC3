#include "student.h"
#include <stdbool.h>

/**
 * @file course.h
 * @author Japneet Singh
 * @date 29thMarch2023
 * @brief Struct representing a course.
 *
 * This struct contains information about a course, including its name, code, and the
 * students enrolled in the course.
 */ 
typedef struct _course 
{
  char name[100]; /**< The name of the course. */
  char code[10]; /**< The code of the course. */
  Student *students; /**< Pointer to an array of students enrolled in the course. */
  int total_students; /**< The total number of students enrolled in the course. */
} Course;

/**
 * /brief Enroll a student in a course.
 *
 * This function enrolls a student in a given course by adding the student to the
 * students array in the course struct.
 *
 * @param course A pointer to the course to enroll the student in.
 * @param student A pointer to the student to be enrolled.
 */
void enroll_student(Course *course, Student *student);

/**
 * /brief Print the details of a course.
 *
 * This function prints the name, code, and number of students enrolled in a given course.
 *
 * @param course A pointer to the course to be printed.
 */
void print_course(Course *course);

/**
 * /brief Get the top student in a course.
 *
 * This function returns a pointer to the student with the highest average grade in a given course.
 *
 * @param course A pointer to the course to get the top student from.
 * @return A pointer to the student with the highest average grade in the course, or NULL if there are no students in the course.
 */
Student *top_student(Course* course);

/**
 * /brief Get the list of passing students in a course.
 *
 * This function returns a pointer to an array of students who have an average grade of 50 or above in a given course.
 *
 * @param course A pointer to the course to get the list of passing students from.
 * @param total_passing A pointer to an int that will store the total number of passing students.
 * @return A pointer to an array of passing students, or NULL if there are no passing students in the course.
 */
Student *passing(Course* course, int *total_passing);

