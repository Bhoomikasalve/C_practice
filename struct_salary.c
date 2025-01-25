#include<stdio.h>
#include<stdlib.h>
typedef enum department{hr, sales, research, software, executive} department;
typedef struct employee{department dep; int salary; unsigned int ssn;} employee;
int base_salary = 10000, idx = 0;

void print_emp(employee* emp){
const char* name[] = {"hr", "sales", "research", "software", "executive"};
printf("\ndepartment is: %s", name[emp->dep]);
printf("\nsalary is: %d", emp->salary);
printf("\nssn is: %u\n", emp->ssn);
}

employee* generate(employee* emp){
emp->dep = idx % 5;
emp->salary = (base_salary + random()) % 999999;
emp->ssn = random() % 999999999;
}


int main(void){

employee emp1;

for(idx = 0; idx < 10; idx++){
	generate(&emp1);
        print_emp(&emp1);
} 

return 0;
}
 
