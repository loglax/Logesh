#include<stdio.h>
#include<conio.h>
main()
{
    int choice, a, b, i, sum;

    printf("Welcome to my calculator\n");
    start:
    printf("\n1. Add numbers");
    printf("\n2. Subtract numbers");
    printf("\n3. Multiply numbers");
    printf("\n4. Divide numbers");
    printf("\n5. Exit");
    printf("\nEnter your choice:: ");
    scanf("%d", &choice);
    switch(choice)
    {
    case 1:
        {
            add:
            printf(" ****** Addition ****** ");
            printf("\nEnter First number : ");
            scanf("%d",&a);
            printf("\nEnter Second number : ");
            scanf("%d",&b);
            sum=a+b;
            printf("\nAddition is :: %d", sum);
            printf("\nDo you want to continue Addition 1 : ");
            scanf("%d", &i);
            if(i==1)
            {
               system("cls");
               goto add;
            }
            else
                goto start;
            break;

        }

    case 2:
        {
            sub:
            printf(" ****** Substract ****** ");
            printf("\nEnter First number : ");
            scanf("%d",&a);
            printf("\nEnter Second number : ");
            scanf("%d",&b);
            sum=a-b;
            printf("\nSubtract is :: %d", sum);
            printf("\nDo you want to continue Subtract 1 : ");
            scanf("%d", &i);
            if(i==1)
            {
               system("cls");
               goto sub;
            }
            else
                goto start;
            break;
        }
    case 3:
        {
            multi:
            printf(" ****** Multiply ****** ");
            printf("\nEnter First number : ");
            scanf("%d",&a);
            printf("\nEnter Second number : ");
            scanf("%d",&b);
            sum=a*b;
            printf("\nMultiply is :: %d", sum);
            printf("\nDo you want to continue Multiplication 1 : ");
            scanf("%d", &i);
            if(i==1)
            {
               system("cls");
               goto multi;
            }
            else
                goto start;
            break;
        }
    case 4:
        {
            div:
            printf(" ****** Divide ****** ");
            printf("\nEnter First number : ");
            scanf("%d",&a);
            printf("\nEnter Second number : ");
            scanf("%d",&b);
            sum=a/b;
            printf("Divide is :: %d", sum);
            printf("\nDo you want to continue Division 1 : ");
            scanf("%d", &i);
            if(i==1)
            {
               system("cls");
               goto div;
            }
            else
                goto start;
            break;
        }


    default:
        printf("Bye");
    }
}
