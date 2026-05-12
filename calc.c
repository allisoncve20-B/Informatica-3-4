#include <stdio.h>
//1.prototype
void add(void);
void subtract(void);
void multiply(void);
void divide(void);

int main(void){
    printf("-------------CALCULATOR-----------\n");
    printf("1. add \n");
    printf("2. subtract \n");
    printf("3. multiply \n");
    printf("4. divide \n");
    printf("Enter your option: ");

    int user_response;
    scanf("%d",&user_response);

    if(user_response == 1){
        //3.call
        add();
    } else if(user_response == 2){
        subtract();
    } else if (user_response == 3){
        multiply();
    } else if(user_response == 4){
        divide();
    } else {
        printf("Invalid option \n");
    }

}
//2.define
void add(void){
    float num1,num2,result;
    printf("Enter the first number:");
    scanf("%f",&num1);
    printf("Enter the second number:");
    scanf("%f",&num2);
     result = num1 + num2;
    printf("%.2f + %.2f =%.2f\n",num1,num2,result);
}
void subtract(void){
    float num1,num2,result;
    printf("Enter the first number:");
    scanf("%f",&num1);
    printf("Enter the second number:");
    scanf("%f",&num2);
     result = num1 - num2;
    printf("%.2f - %.2f =%.2f\n",num1,num2,result);
}
void multiply(void){
    float num1,num2,result;
    printf("Enter the first number:");
    scanf("%f",&num1);
    printf("Enter the second number:");
    scanf("%f",&num2);
     result = num1 * num2;
    printf("%.2f * %.2f =%.2f\n",num1,num2,result);
}
void divide(void){
     float num1,num2,result;
    printf("Enter the first number:");
    scanf("%f",&num1);
    printf("Enter the second number:");
    scanf("%f",&num2);
    result = num1 / num2;
    printf("%.2f / %.2f =%.2f\n",num1,num2,result);
}




