//program 1

/*

#include <stdio.h>
int main ()
{
	float x,y;
	int n;
	printf("enter n and x");
	scanf("%d",&n);
	scanf("%f",&x);
	switch ( n )
	{
		case 1: 
		y = 1 + x*x;
		printf("%f",y);
		break;
		case 2 : y = 1 + (x/n);
			printf("%f",y);
		break;
		case 3: y = 1 + 2*x;
			printf("%f",y);
		break;
		default: y = 1 + n*x;
			printf("%f",y);
		}
		return 0;
	
}

*/

//program 2

/*

#include <stdio.h>
int main() {
  char op;
  double first, second;
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &op);
  printf("Enter two operands: ");
  scanf("%lf %lf", &first, &second);

  switch (op) {
    case '+':
      printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
      break;
    case '-':
      printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
      break;
    case '*':
      printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
      break;
    case '/':
      printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
      break;
    
    default:
      printf("Error! operator is not correct");
  }

  return 0;
}

*/

//program 3

/*
#include<stdio.h>

int main()
{
 int no;
 printf("\n Enter Day no between 1-7 : ");
 scanf("%d",&no);
 switch(no)
 {
  case 1:
   printf("\n Sunday");
   break;
  case 2:
   printf("\n Monday");
   break;
  case 3:
   printf("\n Tuesday");
   break;
  case 4:
   printf("\n Wednesday");
   break;
  case 5:
   printf("\n Thursday");
   break;
  case 6:
   printf("\n Friday");
   break;
  case 7:
   printf("\n Saturday");
   break;
  default:
   printf("\n Please Enter Proper Input");
   break;
 }
 return 0;
}

*/

//program 4

/*
#include <stdio.h>

int main()
{
    int month;

    printf("Enter month no. (1-12): ");
    scanf("%d", &month);

    switch(month)
    {
        case 1: 
            printf("31 days");
            break;
        case 2: 
            printf("28/29 days");
            break;
        case 3: 
            printf("31 days");
            break;
        case 4: 
            printf("30 days");
            break;
        case 5: 
            printf("31 days");
            break;
        case 6: 
            printf("30 days");
            break;
        case 7: 
            printf("31 days");
            break;
        case 8: 
            printf("31 days");
            break;
        case 9: 
            printf("30 days");
            break;
        case 10: 
            printf("31 days");
            break;
        case 11: 
            printf("30 days");
            break;
        case 12: 
            printf("31 days");
            break;
        default: 
            printf("Invalid input! Please enter month number between 1-12");

    }

    return 0;
}

*/



//program 5

/*
#include <stdio.h>
 
int main()
{
    int dd,mm,yy;
     
    printf("Enter date (DD/MM/YYYY format): ");
    scanf("%d/%d/%d",&dd,&mm,&yy);
     
    //check year
    if(yy>=1900 && yy<=9999)
    {
        //check month
        if(mm>=1 && mm<=12)
        {
            //check days
            if((dd>=1 && dd<=31) && (mm==1 || mm==3 || mm==5 || mm==7 || mm==8 || mm==10 || mm==12))
                printf("Date is valid.\n");
            else if((dd>=1 && dd<=30) && (mm==4 || mm==6 || mm==9 || mm==11))
                printf("Date is valid.\n");
            else if((dd>=1 && dd<=28) && (mm==2))
                printf("Date is valid.\n");
            else if(dd==29 && mm==2 && (yy%400==0 ||(yy%4==0 && yy%100!=0)))
                printf("Date is valid.\n");
            else
                printf("Day is invalid.\n");
        }
        else
        {
            printf("Month is not valid.\n");
        }
    }
    else
    {
        printf("Year is not valid.\n");
    }
 
    return 0;    
}

*/

//program 6 

/*
#include <stdio.h>

void main() {
    int m, n;
    printf("\nEnter the first number\n");
    scanf("\n%d", &m);
    printf("\nEnter the second number\n");
    scanf("\n%d", &n);

    switch (m > n) { 
      case 0:
        printf("\nThe greater number is %d\n", n);
        break;
      case 1:
        printf("\nThe greater number is %d\n", m);
        break;
      default:
        printf("\nBoth number's are same\n");
    }
}

*/
//program 7 

/*

#include <stdio.h>

int main()
{
    int num;


    printf("Enter any number to check even or odd: ");
    scanf("%d", &num);

    switch(num % 2)
    {
        
        case 0: 
            printf("Number is Even");
            break;

        
        case 1: 
            printf("Number is Odd");
            break;
    }

    return 0;
}

*/