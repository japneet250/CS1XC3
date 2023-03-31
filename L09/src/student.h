 /**
@file Student.h
@author Japneet Singh
@date 29thMarch2023

@brief A struct representing a student with their first name, last name, ID number, grades, and the number of grades.


The Student struct is used to hold information about a student, including their first name, last name, ID number,
a pointer to their grades, and the number of grades they have. The grades are stored as a dynamic array of double values.
Functions are provided to add a grade to the student's record, calculate the average grade, print the student's information,
and generate a random student with a specified number of grades.
*/
/**
 * A struct representing a student, containing their first name, last name, ID,
 * an array of their grades, and the number of grades in the array.
 */
typedef struct _student 
{ 
  char first_name[50]; /**< The student's first name */
  char last_name[50]; /**< The student's last name */
  char id[11]; /**< The student's ID */
  double *grades; /**< An array of the student's grades */
  int num_grades; /**< The number of grades in the array */
} Student;

/**
 * Adds a grade to the student's array of grades.
 * 
 * @param student The student to add the grade to.
 * @param grade The grade to add.
 */
void add_grade(Student *student, double grade);

/**
 * Calculates and returns the average of the student's grades.
 * 
 * @param student The student to calculate the average for.
 * @return The student's average grade.
 */
double average(Student *student);

/**
 * Prints out the student's information, including their name, ID, grades, and average grade.
 * 
 * @param student The student to print the information for.
 */
void print_student(Student *student);

/**
 * Generates a new random student, with a given number of grades.
 * 
 * @param grades The number of grades to generate for the student.
 * @return A pointer to the generated student.
 */
Student* generate_random_student(int grades);
