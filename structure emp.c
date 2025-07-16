#include <stdio.h>

// Structure to hold employee details
struct Employee {
    int id;
    char name[50];
    char designation[50];
    char department[50];
    float basic_salary;
    float hra;
    float da;
    float gross_salary;
};

// Function to accept employee details
struct Employee acceptEmployee() {
    struct Employee emp;

    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);
    getchar(); // Clear buffer

    printf("Enter Name: ");
    fgets(emp.name, sizeof(emp.name), stdin);

    printf("Enter Designation: ");
    fgets(emp.designation, sizeof(emp.designation), stdin);

    printf("Enter Department: ");
    fgets(emp.department, sizeof(emp.department), stdin);

    printf("Enter Basic Salary: ");
    scanf("%f", &emp.basic_salary);

    return emp;
}

// Function to calculate salary
struct Employee calculateSalary(struct Employee emp) {
    emp.hra = 0.20 * emp.basic_salary;
    emp.da = 0.80 * emp.basic_salary;
    emp.gross_salary = emp.basic_salary + emp.hra + emp.da;

    return emp;
}

// Function to print pay slip
void printPayslip(struct Employee emp) {
    printf("\n------ EMPLOYEE PAY SLIP ------\n");
    printf("ID: %d\n", emp.id);
    printf("Name: %s", emp.name);
    printf("Designation: %s", emp.designation);
    printf("Department: %s", emp.department);
    printf("Basic Salary: %.2f\n", emp.basic_salary);
    printf("HRA: %.2f\n", emp.hra);
    printf("DA: %.2f\n", emp.da);
    printf("Gross Salary: %.2f\n", emp.gross_salary);
    printf("-------------------------------\n");
}

int main() {
    struct Employee emp;

    emp = acceptEmployee();
    emp = calculateSalary(emp);
    printPayslip(emp);

    return 0;
}


