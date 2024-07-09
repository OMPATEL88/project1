#include<stdio.h>
main(){
    float Basesalary,HRA,DA,TA,valueofHRA,valueofDA,valueofTA,grosssalary;
	printf("what is the Base salary : ");
	scanf("%f",&Basesalary);
	printf("what is the HRA% : ");
	scanf("%f",&HRA);
	printf("what is the DA : ");
	scanf("%f",&DA);
    printf("what is the TA : ");
    scanf("%f",&TA);
    valueofHRA = Basesalary*HRA/100;
    printf("value of HRA is:%f\n",valueofHRA);
    valueofDA = Basesalary*DA/100;
    printf("value of DA is:%f\n",valueofDA);
    valueofTA = Basesalary*TA/100;
    printf("value of TA is:%f\n",valueofTA);
    grosssalary = Basesalary+valueofHRA+valueofDA+valueofTA;
    printf("value of grosssalary is:%f",grosssalary);
    
    
	
	
}
