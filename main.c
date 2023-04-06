#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double Addition(){
    double result,num1,num2;
    scanf("%lf %lf",&num1,&num2);
    result=num1+num2;
    return result;
}
double Subtraction(){
    double num1,num2,result;
    scanf("%lf %lf",&num1,&num2);
    result=num1-num2;
    return result;
}
double Multiplication(){
    double result,num1,num2;
    scanf("%lf %lf",&num1,&num2);
    result=num1*num2;
    return result;
}
double Division(){
    double result,num1,num2;
    scanf("%lf %lf",&num1,&num2);
    result=num1/num2;
    return result;
}
double Modulus(){
    double result,num1,num2;
    scanf("%lf %lf",&num1,&num2);
    result = fmod(num1, num2);
    return result;
}
double SquareRoot(){
    double num,result;
    scanf("%d",&num);
    result=sqrt(num);
    return result;
}
double Power(){
    double num1,num2,result;
    scanf("%lf %lf",&num1,&num2);
    result=pow(num1,num2);
    return result;
}
double Average(){
    double cnt=0,sum=0,avg;
    double numbers;
    char stop;
    while(1){
        scanf("%lf",&numbers);
        scanf("%c",&stop);
        if (stop=='s'){
            break;
        }
        sum+=numbers;
        cnt++;
    }
    avg=sum/cnt;

    return avg;
}




int main()
{
    char Operator;
    double result;
    printf("Welcome to the calculator!\n");
    printf("Please choose one of the following calculation methods:\n");
    printf("+ => Addition\n");
    printf("- => Subtraction\n");
    printf("* => Multiplication\n");
    printf("/ => Division\n");
    printf("% => Modulus\n");
    printf("s => Square Root\n");
    printf("^ => Power of a number\n");
    printf("a => Average of numbers\n");
    scanf("%c",&Operator);
    switch(Operator){
        case '+':
            result=Addition();
            printf("%lf",result);
            break;
        case '-':
            result=Subtraction();
            printf("%lf",result);
            break;
        case '*':
            result=Multiplication();
            printf("%lf",result);
            break;
        case '/':
            result=Division();
            printf("%lf",result);
            break;
        case '%':
            result=Modulus();
            printf("%lf",result);
            break;
        case 's':
            result=SquareRoot();
            printf("%lf",result);
            break;
        case '^':
            result=Power();
            printf("%lf",result);
            break;
        case 'a':
            result=Average();
            printf("%lf",result);
            break;
    }

    return 0;
}
