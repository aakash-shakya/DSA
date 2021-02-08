#include<bits/stdc++.h>
#define max 10

/* type 1 to use struct */
struct{
    int roll_no;
    char name[max];
    char first_letter;
} student;

/* type 2 to use struct */
struct Employee{
    int employee_id;
    char name[max];
    char department[max];
    int salary;
};

/* type 3 */
typedef struct{
    int dob;
    char name[max];
    char address[max];
}Person;


int main(){
    struct Employee employee;
    Person p;

    // printf("enter roll no: ");
    // scanf("%d", &student.roll_no);
    // printf("enter name: ");
    // scanf("%19s",student.name);

    // printf("your roll no is %d \n",student.roll_no);
    // student.first_letter = student.name[0];
    // printf("your name is %s \nand your first letter is %c ",student.name, student.first_letter);

    employee.employee_id = 1;
    printf("employee details: \n");
    scanf("%s",employee.name);              // can't really use employee.name = "name", because the employee.name is array 
    scanf("%s",employee.department);
    employee.salary = 30000;

    printf("%d\n",employee.employee_id);
    printf("%s\n",employee.name);
    printf("%s\n",employee.department);
    printf("%d\n",employee.salary);

    p.dob = 2000;
    printf("person details: \n");
    scanf("%s",p.name);
    scanf("%s",p.address);
    printf("%d %s %s\n",p.dob,p.name,p.address);
    

    return 0;
}