#include<stdio.h>
int main()
{
    printf("Welcome to the Quiz Game\n");

printf("\n\nA. What's the biggest bridge in BD.?\n");
 int x;
printf("1. The Padma\t\t");
printf("2. The Jamuna\n");

printf("Enter the ans. that you think:\n ");
scanf("%d",&x);
switch(x)
{
case 1:
    printf(" \nIt's a correct answer "); break;
case 2:
    printf(" \n it's an incorrect answer.");
}
printf("\n\nB. Is GUB has their permanent campus? ");
 printf(" \n1. No\t\t");
 printf(" 2. Yes\n");
printf("Enter the ans. that you think:\n ");
scanf("%d",&x);
switch(x)
{
case 1:
    printf("\n It's an incorrect answer."); break;
case 2:
    printf("\n It's a correct answer.");
}


printf("\n\nC. ____ is the capital of Bd.? ");
 printf(" \n1. Dhaka \t\t");
 printf(" 2. Barishal \n");
printf("Enter the ans. that you think:\n ");
scanf("%d",&x);
switch(x)
{
case 1:
    printf("\n It's a correct answer."); break;
case 2:
    printf("\n It's an incorrect answer.");
}



printf("\n\n D. Independence day of Bangladesh? ");
 printf(" \n1. 16 Dec.\t\t");
 printf(" 2. 26 March \n");
printf("Enter the ans. that you think:\n ");
scanf("%d",&x);
switch(x)
{
case 1:
    printf("\n It's an incorrect answer."); break;
case 2:
    printf("\n It's a correct answer.");
}



printf("\n\nE. What's the full form of CSE? ");
 printf(" \n1. Computer science Electricity\t\t");
 printf(" 2. Computer Science Engineering\n");
printf("Enter the ans. that you think:\n ");
scanf("%d",&x);
switch(x)
{
case 1:
    printf("\n It's an incorrect answer."); break;
case 2:
    printf("\n It's a correct answer.");
}

    return 0;
}
