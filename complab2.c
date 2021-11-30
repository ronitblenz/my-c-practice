//1. print first n natural no. using while
/*

#include<stdio.h>

int main()
{
    int i, end;

    printf("Print all natural numbers from 1 to : ");
    scanf("%d", &end);

    i=1;
    while(i<=end)
    {
        printf("%d\n", i);
        i++;
    } 

    return 0;
}

*/

//2. Sum of first n natural numbers using while

/*
#include<stdio.h>  

int main()  
{  
    int num, i, sum = 0; 
    printf("Enter a positive number : ");  
    scanf("%d", &num);
    i = 0;  
    while (i <= num)
    {  
        sum = sum + i; 
        i++;
    }  
     
    printf(" \n Sum of first %d natural number is : %d", num, sum);  
    return 0;
}  

*/

//3. Factorial of first n natural numbers using while

/*

#include<stdio.h>
int main()
{
    int n,i,f;
    f=i=1;
    printf("Enter a Number to Find Factorial: ");
    scanf("%d",&n);
    while(i<=n)
    {
        f*=i;
        i++;
    }
    printf("The Factorial of %d is : %d",n,f);
    return 0;
}

*/

//4. Number of digits using while
/*

#include<stdio.h>  
int main()  
{  
   int n;   
   int count=0;    
   printf("Enter a number");  
   scanf("%d",&n);  
   while(n!=0)  
   {  
       n=n/10;  
       count++;  
   }  
     
   printf("\nThe number of digits in an integer is : %d",count);  
    return 0;  
}  

*/

//5. multiplication table using while

/*

#include<stdio.h>
int main()
{
   int n, i;
 
    printf("Enter a Number ");
    scanf("%d",&n);
    i=1;
    while(i<=10){
                
        printf("%d * %d = %d \n", n, i, n*i);
        ++i;
    }
     
return 0;
    
}

*/

//6. Power of a number

/*

#include<stdio.h>

int main()
{
  int i, Number, Exponent; 
  long Power = 1;
  
  printf("\n Please Enter any Number : ");
  scanf(" %d", &Number);

  printf("\n Please Enter the Exponent Value: ");
  scanf(" %d", &Exponent);
    
  for(i = 1; i <= Exponent; i++)
  {
  	Power = Power * Number;
  }
  
  printf("\n The Final result of %d Power %d = %ld", Number, Exponent, Power);
  
  return 0;
}
*/