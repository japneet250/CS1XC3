 /**

@brief A struct representing a student with their first name, last name, ID number, grades, and the number of grades.


The Student struct is used to hold information about a student, including their first name, last name, ID number,
a pointer to their grades, and the number of grades they have. The grades are stored as a dynamic array of double values.
Functions are provided to add a grade to the student's record, calculate the average grade, print the student's information,
and generate a random student with a specified number of grades.
*/
typedef struct _student 
{ 
  char first_name[50];
  char last_name[50];
  char id[11];
  double *grades; 
  int num_grades; 
} Student;

void add_grade(Student *student, double grade);
double average(Student *student);
void print_student(Student *student);
Student* generate_random_student(int grades); 
