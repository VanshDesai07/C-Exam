#include <stdio.h>
#include <stdlib.h>

struct Employee {
    char name[100];
    char designation[100];
};

int main() {
    int n = 3;  
    struct Employee employees[n]; 

    for (int i = 0; i < n; i++) {
        printf("Enter details for employee %d:\n", i + 1);

        printf("Name: ");
        getchar();  
        fgets(employees[i].name, sizeof(employees[i].name), stdin);
        employees[i].name[strcspn(employees[i].name, "\n")] = '\0'; 
        printf("Designation: ");
        fgets(employees[i].designation, sizeof(employees[i].designation), stdin);
        employees[i].designation[strcspn(employees[i].designation, "\n")] = '\0'; 
        printf("\n");
    }

    FILE *file = fopen("data.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    for (int i = 0; i < n; i++) {
        fprintf(file, "Employee %d:\n", i + 1);
        fprintf(file, "Name: %s\n", employees[i].name);
        fprintf(file, "Designation: %s\n", employees[i].designation);
        fprintf(file, "\n");
    }

    fclose(file);  
    printf("Employee details successfully written to data.txt\n");

    return 0;
}