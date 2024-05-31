/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
#include <string.h>

//String Program
// scan and print 
void strprint();

//string length
void strlength();

// 3 reverce String
void reverce();

// 4 check palindrom
void strpalindrom();

// 5 check to string are same or not 
void strequal();

// 6 string copy one to another
void strcopy();

// 7 vowel and constent count
void strvowel();

// 8 store reverce string in another string
void strcpyrev();

//  9 merge to string
void strmerge();

// 10 charecter search
void strsearch();

// 11 convert string to upper case
void strupper();

// 12 lower case
void strlower();

//  13 TO TOGGEL CASE
void strtoggel();
    
//Converting sentence case
void strsentence();

// ARRAY Programs

// sUM OF ARRAY ELEMENT
int sumofallelement(int [],int);
// PRINT ARRAY ELEMENT
void printelement(int [ ],int);
// GRETEST NUMBER IN ELEMENT
int gretestelement( int [],int);
//count even or countodd
void countevenorodd(int [],  int);
//search array ELEMENT
void searchelement(int [], int);
//palindrom in array
void palindrom(int [], int );
//Insert ELEMENT in array
void insert(int [],int);
//selection Sort 
void sortarray(int [],int);
//Delete Element
void delete(int [],int);
//Check Palindrom Number in array
void palindrom(int [] , int);
//Avearge of all Element
int average(int [] , int);
//Search and replace Element
void searchandreplace(int [], int);

//two D array

// print Both DIGONAL
void printdigonal(int [][20],int);
//print 2D ARRAY
void print2Darray(int [][20],int);
//print Transpose Matrix
void Transpose(int [][20],int);
// Sum of DIGONAL
void sumofdigonal(int [][20],int);
//Boundry Element
void Boundry(int [][20],int);
//Sum of Two Matrix
void sumof2metrix(int [][20],int [][20],int);
//multiplay two Matrix
void multiplay(int [][20],int [][20],int);


// Loop Programs

//Loop Natural number
void natural(int);
// Reverse natural number loop
void revercenatural(int);
//print Even number serise loop
void even(int);
//print odd number serice loop
void odd(int);
//Sum of Natural Number loop
int sumnatural(int);
//count Input  number loop
void countinput();
//Fibonachi serise loop
void fibo(int );
//sum of Fibonachi serise loop
int sumoffibo(int );
//search number in loop
void search(int);
// check Armstrong number Loop
void Armstrong();
//check prime Number Loop
void prime();
//print the table
void table();
//GCD of Two Number
void gcd();

//serise Programs

//serise 1
void one();
//serise 2
void two();
//serise 3
void three();
//serise 4
void four();
//serise 5
void five();
//serise 6
void six();
 


//Conditional Statment

//check gretestelement 
void gretest(int,int,int);
// check leap YEAR
void leapyear(int);
//Even or Odd check
void evenoddcondi(int );
//check Marriage Eligibility
void  Marriage(int);
//check Vowel or not
void vowel(char);
//calculate Electric bill
void billcalculate();
//check perfect Number
void perfect();
//Rupees divide in note
void Rupees(int x);
//Calculet percentage
void percent();
//Check ASCII value
void ascii();


//Simple Programs

// First and Last digit
void firstlast();

//Salary Calculet
void Salary();

//palindrom Number
void palind();

//area of circul
void circul();

//power function without using function
void power();




int main()
{
   int c=1;
   while(c)
   {
       printf("\n---->MENU<----\n 0. Exit \n 1. Loop Program\n 2. Array Program\n 3. Conditional Statment\n 4. Simple Program\n 5. String Programs\n");
        printf("Enter your choice:- ");  
        scanf("%d",&c);
       
       switch(c){
           //Loop Program switch
           case 1:
            int np;
            printf("\n----->Welcom To Loop Program's<-----");
            
            printf("\n 1. Series Program\n 2. Loop Program\n");
            printf("\nEnter Your choice:- ");
            scanf("%d",&c);
            switch(c)
            {
              case 1:
                    printf("\n----->Welcom To Loop Series Program's<-----\n");
                    printf("\n1. 1/1! - 2/2! + 3/3! - 4/4!....\n 2. 1,3,6,10,15,21....\n 3. 0,2,5,9,14,20....\n 4. 1,5,11,19,29....\n 5. 1,5,14,30,55,91...\n 6. 0,1,1,2,3,5,8,13....\n 7.");
                    printf("\nEnter Your choice:- ");
                    scanf("%d",&c);
             switch(c)
             {
                 case 1:
                 //series 1 
                 one();
                 break;
                 
                 case 2:
                 //series 2
                 two();
                 break;
                 
                 case 3:
                 //series 3
                 three();
                 break;
                 
                 case 4:
                 //series 4
                 four();
                 break; 
                 
                 case 5:
                //  series 5
                five();
                break;
                
                case 6:
                //  series 6
                six();
                break;
             }
             break;
              
            case 2:
                 
                        //Loop Program 
                    printf("\n----->Welcom To Single Loop Program's<-----");
            printf("\n 1.print Natural Number\n 2. Print Natural Number in Reverse order\n 3. print Even Number series\n 4. Print Odd Number serise \n 5. Sum of All Natural Number \n 6. Count Input Digit\n 7. Fibonachi serise\n 8. Sum of Febonachi serise\n 9. Search Digit\n 10. Check Armstrong number\n 11. Check prime Number\n 12. Print Table\n 13. GCD Of Two Number\n ");
            
            printf("\nEnter your choise:- ");
            scanf("%d",&c);
            switch(c)
            {
               case 1: 
                     //Natural Number call
                        int hp;
                     printf("\nEnter Loop Exicution Number:- ");
                     scanf("%d",&hp);
                     natural(hp);
                     break;
                case 2: 
                    //Natural number Reverse
                        int gp;
                     printf("\nEnter Loop Exicution Number:- ");
                     scanf("%d",&gp);
                    revercenatural(gp);
                    break;
                
                case 3:
                    //Even Number serise
                        int fp;
                     printf("\nEnter Loop Exicution Number:- ");
                     scanf("%d",&fp);
                    even(fp);
                    break;
                
                case 4:
                    //Odd Number serise
                        int ep;
                     printf("\nEnter Loop Exicution Number:- ");
                     scanf("%d",&ep);
                    odd(ep);
                    break;
                
                case 5:  
                    //Sum of natural Number
                        int dp;
                     printf("\nEnter Loop Exicution Number:- ");
                     scanf("%d",&dp);
                   int r= sumnatural(dp);
                   printf("\nSum of All Natural Number is :-%d",r);
                    break;
                case 6:
                    //Count Input Number
                    countinput();
                    break;
                
                case 7:
                    //Fibonachi serise
                    int cp;
                     printf("\nEnter Loop Exicution Number:- ");
                     scanf("%d",&cp);
                    fibo(cp);
                    break;
                
                case 8: 
                       //Sum of Fibonachi serise
                       int bp;
                        printf("\nEnter Loop Exicution Number:- ");
                     scanf("%d",&bp);
                       int s=sumoffibo(bp);
                       printf("sum of Fibonachi serise:-%d",s);
                       break;
                       
                case 9:
                      //search Number
                      int ap;
                       printf("\nEnter Loop Exicution Number:- ");
                     scanf("%d",&ap);
                      search(ap);
                      
                case 10:
                     //Armstrong number CALL
                     Armstrong();
                     break;
                
                case 11:
                     //Check prime number
                    
                     prime();
                     break;
                     
                case 12:
                     //Print Table
                     
                     table();
                     break;
                     
                case 13: 
                    //GCD of Two Number
                    gcd();
                    break;
            }
            break;
            }
            
            break;
                 
            
            
            
       case 2:
               //Array Programs
       int d;
       printf("\n----->Welcom To Array Program's<-----");
   printf("\n 1. Two Dimontion DIGONAL\n 2. One Dimontion\n");
   printf("\nEnter Your choice:- ");
   scanf("%d",&c);
   switch(c){
       case 1:
       // Two 2D ARRAY
       printf("\n----->Welcom To 2D Array Program's<-----");
       printf("\n 1. Print 2D ARRAY\n 2. Both DIGONAL Print\n 3. Transpose Matrix\n 4. Sum Of DIGONAL\n 5. Print Boundry Element\n 6. Sum Of Two Matrix\n 7. Multiplay Of Two Matrix\n");
   printf("\nEnter your choice:- ");
   scanf("%d",&c);
    int f[20][20],i,j,n;
    printf("\nEnter Two Dimontion Array Size:- ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&f[i][j]);
        }
       
    }
 
    
   switch(c){
       case 1:     // print 2D ARRAY
        
    print2Darray(f,n);
    break;
    
    case 2:
    // print 2D ARRAY DIGONAL
     
    printdigonal(f,n);
    break;
     
     case 3: 
    //  print Transpose matrix
     
     Transpose(f,n);
     break;
         
    case 4:
     //print sum of all DIGONAL
       
     sumofdigonal(f,n);
     break;
     
     case 5:
     //print Boundry elements
       
     Boundry(f,n);
     break;
     
     case 6:
       // Sum of Two matrix
        
      int g[20][20],k,l,m;
    printf("\nEnter Two Dimontion Array Size:- ");
    scanf("%d",&m);
    for(k=0; k<m; k++)
    {
        for(l=0; l<m; l++)
        {
            scanf("%d",&g[k][l]);
        }
       
    }
    
    sumof2metrix(f,g,n);
    break;
    
    case 7: 
       //multiplay Two matrix
        printf("\nEnter second matrix\n");
       
        int arr2[20][20],x,y;
        for(x=0; x<n; x++)
    {
        for(y=0; y<n; y++)
        {
           scanf("%d",&arr2[x][y]);
        }
        
    }
    multiplay(f,arr2,n);
    
    
    
   }
    
   break;
    
    // ONE D ARRAY
 
 case 2 :
 printf("\n----->Welcom To 1D ARRAY Program's<-----");
    int a[20],q,k;
    printf("\nenter the size of array:-");
    scanf("%d",&q);
    printf("\nEnter array elements:- ");
    for(k=0; k<q; k++)
    {
        scanf("%d",&a[k]);
    }
    
    printf("\n 0.EXIT\n 1 Print array\n 2 Sum of array\n 3 Gretest Element\n 4 Count Odd or Even \n 5 Search Number\n 6 Insert Element \n 7. Sort Array\n 8. Delete Element\n 9. Check Palindrom Numberin array\n 10. Avearge of All Elemennt in Array\n");
    printf("11. Search And Replace A Number\n 12. Check prime Number in Array\n");
    printf("\nEnter proces Number you praform:- ");
    scanf("%d",&c);
    switch(c){
        case 1:
        //Print Array call
        printelement(a,q);
   break;
   case 2:
   //Sum of all element call
    int ret=sumofallelement(a,q);
    printf("\nsum of all array element is:-%d\n",ret);
 break;
 case 3:
 //Gretest element call
  int ret2=gretestelement(a,q);
  printf("\nGretest Element in array:-%d\n",ret2);
  break;
  
  case 4:
  //Count EVEN AND ODD CALL
  countevenorodd(a,q);
  break;
    
  case 5:
  //SEARCH ELEMENT CALL
  searchelement(a,q);
  
    break;
    
    case 6: 
    //INSERT ELEMENT CALL
            insert( a,q);
            break;
            
    case 7:
    //SORT ARRAY CALL
           sortarray(a, q);
           break;
          
    case 8:
         //DELETE ARRAY CALL
         delete(a,q);
    case 9:
         //check Palindrom number CALL
         palindrom(a,q);
         break;
    
    case 10:
         //avearage of all element CALL
         
         float re=average(a,q);
         printf("\nAverage of All Element if %.2f\n",re);
         break;
    case 11:
         //Search and replace element CALL
         searchandreplace(a,q);
         break;
   }
   
  
   }
   break;
   //Conditional stetment
   case 3: 
   printf("----->Welcome To Conditional Stetment<-----");
   printf("\n 1. GRETEST ELEMENT\n 2. LEAP YEAR\n 3. Check Even or Odd\n 4. Check Marriage Eligibility\n 5. Check Vowel or Not\n 6. Calculate Electricity Bill\n 7. perfect Number Check\n 8. Converting Money Into Notes\n 9. Calculate Percentage\n 10. ASCII Value Check\n");
   printf("\nEnter your choice:- ");
   scanf("%d",&c);
   switch(c)
   {
       case 1:
            //gretest ELEMENT
            int a,b,e;
            printf("\nEnter Three ELEMENT:- ");
            scanf("%d%d%d",&a,&b,&e);
            gretest(a,b,e);
            break;
            
        case 2:
             //leap YEAR
             int year;
             printf("\nEnter to cheace year :- ");
             scanf("%d",&year);
             leapyear(year);
             break;
             
        case 3:
            //even or odd check
            int num1;
            printf("\nEnter Number to check Even or Odd :- ");
            scanf("%d",&num1);
            evenoddcondi(num1);
            break;
        
        case 4:
            //check Marriage Eligibility
            int age;
            printf("\nEnter to check Marriage Eligibility:- ");
            scanf("%d",&age);
            Marriage(age);
            break;
        
        case 5:
            //check vowel or not
            char ch;
            printf("\nEnter character:- ");
            scanf("%c",&ch);
            vowel(ch);
            break;
            
        case 6:
            //calculate electricity bill
            billcalculate();
            break;
            
        case 7:
        //check perfect number 
        perfect();
        break;
        
        case 8:
        //Rupees devide in note
        int rup;
        printf("\Enter Amount To Devide:- ");
        scanf("%d",&rup);
        Rupees(rup);
        break;
        
        case 9:
        //calculate percentage
        percent();
        break;
        
        case 10:
        //Check ASCII value 
        ascii();
        break;
   }
   break;
    
    
    //simple Programs
    case 4:
    printf("\n----->Welcom To Simple Program's<-----");
    printf("\n0. Exit\n 1. First And Last Digit\n 2. Calculate  Employ Salary\n 3. Check Input Number palindrom or not\n 4. Area of Circul\n 5. Power Of ELEMENT\n ");
    printf("Enter Your choice:- ");
    scanf("%d",&c);
    switch(c){
        
        case 1: 
        //first and last Digit
        firstlast();
        break;
        
        case 2:
        //Employ Salary
        Salary();
        break;
        
        case 3:
        //check palindrom
        palind();
        break;
        
        case 4:
        //area of circul
         circul();
         break;
         
         case 5:
         //Power of ELEMENT
         power();
    }
    break;
    
    //String Programs
    case 5:
    printf("\n----->Welcome To String Programs<-----");
    printf("\n 0. Exit\n 1. Print String\n 2. String Length\n 3. Reverce String\n 4. Check Palindrom String\n 5. Check String Equal or Not\n 6. String copy to another String\n 7. String store Reverce in another String\n 8. vowel and constent count\n 9. Merge Two String\n 10. Search charecter in String\n 11. Convert String To Upper Case\n 12. Convert String To Lower Case\n 13. Convert String To TOGGEL CASE\n 14. Converting sentence case\n");
    printf("\nEnter your Choice:- ");
    scanf("%d",&c);
    switch(c)
    {
        case 1:
        //print String
        strprint();
        break;
        
        case 2:
        //print String Length
        strlength();
        break;
        case 3:
        // 3 reverce String
         void reverce();
         break;
         
         case 4:
         // 4 check palindrom
          strpalindrom();
         break;
         
         case 5:
         // 5 check to string are same or not 
          strequal();
         
         break;
         
         case 6:
         // 6 string copy one to another
         strcopy();
         
         break;
         
         case 7:
         // 8 store reverce string in another string
            strcpyrev();
         break;
         
         case 8:
         // 7 vowel and constent count
           strvowel();
         break;
         
         case 9:
         //  9 merge to string
           strmerge();
         break;
         
         case 10:
         // 10 charecter search
          strsearch();
         break;
         
         case 11:
         // 11 convert string to upper case
            strupper();
         break;
         
         case 12:
         // 12 lower case
         strlower();
         break;
         
         case 13:
         //  13 TO TOGGEL CASE
         strtoggel();
         break;
         
         case 14:
         //Converting sentence case
          strsentence();
         break;
    }
   }
   }
   
 return 0;
 }
 
// PRINT ARRAY ELEMENT
void printelement(int a[ ],int n)
{
    int j;
    printf("print all element of array\n");
    for(j=0; j<n; j++)
    {
        printf("%d\t",a[j]);
    }
}
// SUM OF ARRAY ELEMENT
int sumofallelement(int a[],int n)
{
    int k,sum=0;
    for(k=0; k<n; k++)
    {
        sum=sum+a[k];
    }
    return sum;
}
// GRETEST NUMBER IN ARRAY
int gretestelement(int a[],int n)
{
    int l,min=0,second;
    for(l=0; l<n; l++)
    {
        if(min<a[l])
        {
            second=min;
            min=a[l]; 
        }
       
    }

     return min;
}


//count even or odd
void countevenorodd(int a[20], int n)
{
    int i,counteven=0,countodd=0;
    for(i=0; i<n; i++)
     {
         if(a[i]%2==0)
         {
             counteven++;
         }
         else
         {
             countodd++;
         }
     }
     printf("\nEven number in array %d",counteven);
     printf("\nodd number in array %d",countodd);
}
// search element in array
void searchelement(int a[20],int n)
{
    int i,s,count=-1,x=0;
    printf("\nenter search number:- ");
    scanf("%d",&s);
    for(i=0; i<n; i++)
    {
        count++;
        
            if(a[i]==s)
            {
                x=1;
                break;
            }
        
        
    }
    if(x==1){
    printf("\nsearch Number %d present at index %d",s,count);
}
else
{
    printf("\nsearch Number %d  not present ",s);
}
}

//Insert ELEMENT
void insert(int a[20], int n)
{
    int i,num,z,j,tem=0;
   
    
    printf("\nEnter What's position you change:- ");
    scanf("%d",&z);
     printf("\nenter insert Element:- ");
    scanf("%d",&num);
    
    for(i=0; i<n; i++)
    {
        if(i==z-1)
        {
            a[i]=num;
            printf("Element Insert successfull\n");
            tem=1;
            break;
        }
    }
    if(tem==0)
    {
        printf("Wrong position Enter\n");
    }
printelement(a,n);
}

//Shorting array selection Sort

void sortarray( int a[20], int n)
{
    int x,temp,y;
    for(x=0; x<n; x++)
    {
     for(y=x+1; y<n; y++){
         
      if(a[x]>a[y])
        {
           temp=a[x];
           a[x]=a[y];
           a[y]=temp;
        }
     }
    }
    
     printelement(a,n);
}


//DELETE ARRAY ELEMENT
void delete(int a[20],int n)
{
    int i,pos; 
    printf("\nEnter position to delete Element:- ");
    scanf("%d",&pos);
    if(pos>=n)
    {
        printf("Deletion is not possible in the array\n");
    }
    for(i=pos-1; i<n-1; i++)
    {
      a[i]=a[i+1];
    }
    printelement(a,n);
}

//Check palindrom Numberin array

void palindrom(int a[20], int n)
{
    int i,rev=0,rem,x=0,b[20],count=0;
    
    for(i=0; i<n; i++)
    {b[i]=a[i];
    count++;
        while(b[i]!=0)
        {
            rem=b[i]%10;
            rev=rem+(rev*10);
            b[i]=b[i]/10;    
            }
    
    if(a[i]==rev)
    {
        printf("\n%d number is palindrom index number %d \n",a[i],count);
        x=1;
        break;
    }
    
    }
    if(x==0)
    {
        printf("\nNot any palindrom number in array\n");
    }
    
    printelement( a, n);
}

//avrreage of all element in array

int average(int a[20], int n)
{
    int i;
    float aver,sum=0;
    for(i=0; i<n; i++)
    {
        sum=sum+a[i];
        
    }
    aver=sum/n;
    return aver;
}

//Element search and Replace to another number

void searchandreplace(int a[20], int n)
{
    int x,num,i;
    printf("\nEnter Search Number:- ");
    scanf("%d",&x);
    printf("\nEnter Replace Number:- ");
    scanf("%d",&num);
    for(i=0; i<n; i++)
    {
        if(a[i]==x)
        {
            a[i]=num;
        }
    }
    printelement(a,n);
}

//Loop Natural number 
void natural(int n)
{
    int i;
    printf("Natural Number\n");
    for(i=1; i<=n; i++)
    {
        printf("%d\t",i);
    }
}

//Reverse order Natural Number
void revercenatural(int n)
{
    int i;
    for(i=n; i>0; i--)
    {
        printf("%d/t",i);
    }
}
//Even Number
void even(int n)
{
    int i;
    for(i=1; i<=n*2; i++)
    {
        if(i%2==0)
        {
            printf("%d\t",i);
        }
    }
}

//Odd Number
void odd(int n)
{
    int i;
    for(i=1; i<=n*2; i++)
    {
        if(i%2==0)
        {
            printf("%d\t",i);
        }
    }
}

// sum of All Natural Number
int sumnatural(int n)
{
    int i,sum=0;
    for(i=1; i<=n; i++)
    {
        sum=sum+i;
    }
    return sum;
}

void countinput( )
{
  int n,count=-1;
  printf("\nFor exit loop Enter 0");
  printf("\nEnter number:- ");
    while(1)
    {
      if(n==0)
      {
          break;
      }
        else
        {
            
            scanf("%d",&n);
        count++;
        }
    }
    printf("User was Enter %d Number",count);
}

//Fibonachi serise
void fibo(int n)
{
    int i,a=0,b=1,temp;
    printf("%d\t%d\t",a,b);
   temp=a+b;
   while(temp<=n)
   {
       printf("%d\t",temp);
       a=b;
       b=temp;
       temp=a+b;
   }
}

//Sum of Fibonachi serise
int sumoffibo(int n)
{
    int i,a=0,b=1,temp,sum=0;
    printf("%d\t%d\t",a,b);
   temp=a+b;
   while(temp<=n)
   {
       printf("%d\t",temp);
       a=b;
       b=temp;
       temp=a+b;
       sum=sum+temp;
   }
   return sum;
}

//search Number 
void search(int n)
{
    int i,x,count=0,temp=0;
    printf("\nEnter search Number :- ");
    scanf("%d",&x);
    for(i=1; i<=n; i++)
    {
        count++;
        if(i==x)
        {
            printf("%d if found ",x);
              temp=1;
            break;
        }
    }
    if(x==0)
    {
        printf("%d is not found",x);
    }
}

//Armstrong Number
void Armstrong()
{
    int b,a,rem,arm=0;
    printf("\nEnter Number to check Armstrong:- ");
    scanf("%d",&b);
    a=b;
    while(b>0)
    {
        rem=b%10;
        arm=arm+pow(rem,3);
        b=b/10;
       
    }
   
    if(a==arm)
    {
        printf("\nEnter Number %d is Armstrong number",a);
    }
    else
    {
        printf("\nEnter Number %d is not Armstrong number",a);
    }
}

// Check prime number
void prime()
{
    int n,i,temp=0;
    printf("Enter the Number to check prime or Not:- ");
    scanf("%d",&n);
    for(i=2; i<=n/2; i++){
        if(n%i==0)
        {
            printf("%d is not prime Number",n);
            temp=1;
            break;
        }
    }
    if(temp==0)
    {
        printf("%d is prime Number",n);
    }
}

//print table
void table()
{
    int i,n,tab;
    printf("Enter the number you want table:- ");
    scanf("%d",&n);
    for(i=1; i<=10; i++)
    {
        tab=n*i;
        
    printf("%d\t",tab);
    }
}


//GCD Of Two Number 
void gcd()
{
     int a,b,rem;
    printf("entr two numbet:- ");
    scanf("%d%d",&a,&b);
    while(b!=0)
    {
        rem=a % b;
        a=b;
        b=rem;
    }
    printf(" GCD of two number:- %d",a);
}

//serise Programs
void one()
{
    int n ,sum,fact=1,i;
float factsum=0;
printf("enter number :- ");
scanf("%d",&n);
for(i=1; i<=n; i++)
{
    if(i%2!=0)
    {
        printf("+%d/%d!\t",i,i);
    }
    else{
        printf("-%d/%d!\t",i,i);
    }
    fact=fact*i;
   if(i%2!=0){
        factsum=factsum+(float)i/(float)fact;
   }
   else{
        factsum=factsum-(float)i/(float)fact;
   }
}
printf("factsum:- %f",factsum);
}

//serise Programs 2
void two()
{
    int a=0,c,n;
    
    int i;
    
    printf("\\nEnter Loop Exicution Time:- ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        c=a+i;
        a=c;
        printf("%d\t",c);
    }
}

// serise Programs Three
void three()
{
    int a=1,c,n;
    
    int i;
    
    printf("\nEnter Loop Exicution Time:- ");
    scanf("%d",&n);
    printf("0\t");
    for(i=1; i<=n-1; i++)
    {
        c=a+i;
        a=c;
        printf("%d\t",c);
    }
}


//serise Programs four
void four()
{
    int a=-1,c,n;
    
    int i;
    
    printf("\nEnter Loop Exicution Time:- ");
    scanf("%d",&n);
    
    for(i=1; i<=n; i++)
    {
        c=a+i*2;
        a=c;
        printf("%d\t",c);
    }
}

//serise Programs five
void five()
{
    int a=0,c,n;
    
    int i;
    
    printf("\nEnter Loop Exicution Time:- ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        c=a+i*i;
        a=c;
        printf("%d\t",c);
    }
}

//serise Programs six
void six()
{
    int a=0,b=1,c,n;
    
    int i;
    
    printf("\nEnter Loop Exicution Time:- ");
    scanf("%d",&n);
    printf("%d\t%d\t",a,b);
    for(i=1; i<=n-2; i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d\t",c);
    }
}

// Conditional Statment

//Gretest Element
void gretest(int a, int b, int c)
{
    if(a==b&&c>a)
    {
        printf("%d and %d are equal and %d is gretest Element",a,b,c);
    }
    
    else if(a==c&&b>a)
    {
         printf("%d and %d are equal and %d is gretest Element",a,c,b);
    }
    
    else if(c==b&&a>b)
    {
        printf("%d and %d are equal and %d is gretest Element",b,c,a);
    }
   else if(a>b&&a>c)
    {
        printf("%d is gretest Element",a);
    }
    else if(b>a&&b>c)
    {
        printf("%d is gretest Element",b);
    }
    else if(c>a&&c>b)
    {
        printf("%d is gretest Element",c);
    }
    else 
    {
        printf("%d %d and %d are equal",a,b,c);
    }
}

//Leap year
void leapyear(int a)
{
    if(a%4==0&&a%100==0||a%400!=0)
    {
        printf("\n%d is leap year",a);
    }
    else{
        printf("\n%d is not leap year",a);
    }
}

//Even or odd Conditional Statment
void evenoddcondi(int n)
{
    if(n%2==0)
    {
        printf("\n%d is Even Number",n);
    }
    else if(n%2!=0)
    {
        printf("\n%d is Odd Number",n);
    }
    else{
        printf("\nEnter valid Number");
    }
}

//Marriage Eligibility
void Marriage( int age)
{
    if(age>18&&age<50)
    {
        printf(" you age is %d soo you are Eligibilityto Marriage\n",age);
    }
    else if(age>50)
    {
        printf(" your age is %d you are senior citizen\n " ,age);
    }
    else if(age>0&&age<18)
    {
        printf(" your age is %d you are child\n",age);
    }
    else
    {
        printf("pleace Enter Valid age\n");
    }
}


//check Vowel or not
void vowel(char ch)
{
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        printf("\n%c is vowel",ch);
    }
    else if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
         printf("\n%c is vowel",ch);
    }
    else if(ch>='0'&&ch<='9')
    {
        printf("\n%c is Digit",ch);
    }
    else {
        printf("\n%c is Spacial character",ch);
    }
}

//calculate electricity bill
void billcalculate()
{
     int crb,pvrb,amount;
    printf("enter the  current bill unit:-");
    scanf("%d",&crb);
    
    printf("enter the last month bill unit:-");
    scanf("%d",&pvrb);
    int unit=crb+pvrb;
    
    if (unit>=0&&unit<=100){
        amount=unit*2;
        printf("amount of your electricity bill:-%d",amount);
    }
    
  else if (unit>=101&&unit<=200){
        amount=unit*3;
        printf("amount of your electricity bill:-%d",amount);
    }
    
   else  if (unit>=201&&unit<=300){
        amount=unit*4;
        printf("amount of your electricity bill:-%d",amount);
    }
  else   if (unit>300){
        amount=unit*5;
        printf("amount of your electricity bill:-%d",amount);
    }
}

// check Perfect number
void perfect()
{
int n,sum=0;
printf("enter the number :- ");
scanf("%d",&n);
for(int i=2; i<=n/2; i++)
{
    if(n%i==0){
        sum=sum+i;
        
    }
}
if(sum==n){
    printf("%d is  perfect number",n);
}
else{
    printf("%d is not perfect number ",n);
}
}

// Amount devide in different  note
void Rupees(int amount)
{
int temp;
temp=amount;
temp= temp/1000;
printf("nomber of notes of 1000 X %d\n",temp);
amount=amount%1000;
temp=amount;
temp= temp/500;
printf("nomber of notes of 500 X %d\n",temp);
amount=amount%500;
temp=amount;
temp= temp/200;
printf("nomber of notes of 200 X %d\n",temp);
amount=amount%200;
temp=amount;
temp= temp/100;
printf("nomber of notes of 100 X %d\n",temp);
amount=amount%100;
temp=amount;
temp= temp/50;
printf("nomber of notes of 50 X %d\n",temp);
amount=amount%50;
temp=amount;
temp= temp/20;
printf("nomber of notes of 20 X %d\n",temp);
amount=amount%200;
temp=amount;
temp= temp/10;
printf("nomber of notes of 10 X %d\n",temp);
amount=amount%10;
temp=amount;
temp= temp/5;
printf("nomber of notes of 5 X %d\n",temp);
amount=amount%5;
temp=amount;
temp= temp/2;
printf("nomber of notes of 2 X %d\n",temp);
amount=amount%2;
temp=amount;
temp= temp/1;
printf("nomber of notes of 1 X %d\n",temp);

}

//calculate percentage
void percent()
{
    int math,py,ch,en,hi;
    float pr,pr2;
    printf("entr marks mathe:-");
    scanf("%d",&math);

printf("entr marks py:-");
    scanf("%d",&py);
    
    printf("entr marks ch:-");
    scanf("%d",&ch);
    
    printf("entr marks en:-");
    scanf("%d",&en);
    
    printf("entr marks hi:-");
    scanf("%d",&hi);
    
   pr2 =  (math+py+ch+en+hi);
   pr=pr2/5;
    printf("%f\n",pr);
    if(pr>=60&&pr<=100)
    {
        printf("pass grade A\n");
        printf(" your precentage is:- %.2f",pr);
    }
    
    else if(pr>=50&&pr<=59)
    {
        printf("pass grade B\n");
         printf(" your precentage is:- %.2f",pr);
    }
    
    else if(pr>=40&&pr<=49)
    {
        printf("pass grade C\n");
         printf(" your precentage is:- %.2f",pr);
    }
    
   else if(pr>=33&&pr<=40)
    {
        printf("pass grade D\n");
         printf(" your precentage is:- %.2f",pr);
    }
    else{
        printf("you are fail try next time\n");
        printf(" your precentage is:- %.2f",pr);
        
    }

}

//check ASCII value 
void ascii()
{
    char a;
   printf("Enter character:- ");
   scanf("%c",&a);
   if(a>='A'&&a<='Z'){
       printf("upper case charecter\n");
       printf("cahrecter %c ascii  value is %d",a,a);
   }
   else if(a>='a'&&a<='z'){
       printf("lower case cahrecter\n");
        printf("cahrecter %c ascii value is %d",a,a);
   }
  
   
   else {
       printf("not alphabetical charecter but charecter\n");
        printf("cahrecter %c ascii value is %d",a,a);
   }
}

//2D array 
// TWO D BOTH DIGONAL PRINT
void printdigonal(int a[][20],int n)
{
    int k,l;
    printf("\nBoth DIGONAL Matrix\n");
    for(k=0; k<n; k++)
    {
        for(l=0; l<n; l++)
        {
        
               if(k==l)
               {
                    printf("%d\t",a[k][l]);
               }
               else if(l+k==n-1)
               {
                    printf("%d\t",a[k][l]);
               }
               else{
                   printf("0\t");
               }
        
        }
        printf("\n");
    }
}
 
 //2D ARRAY
 
// TWO D ARRAY PRINT
void print2Darray(int a[][20],int n)
{
    int k,l;
    printf("\nprint 2D ARRAY\n");
    for(k=0; k<n; k++)
    {
        for(l=0; l<n; l++)
        {
        
              printf("%d\t",a[k][l]);
        
        }
        printf("\n");
    }
}

// print Transpose Matrix
void Transpose(int a[][20],int n)
{
    int k,l;
    printf("\nTranspose Matrix\n");
    for(k=0; k<n; k++)
    {
        for(l=0; l<n; l++)
        {
        
              printf("%d\t",a[l][k]);
        
        }
        printf("\n");
    }
}

// TWO D BOTH DIGONAL PRINT
void sumofdigonal(int a[][20],int n)
{
    int k,l,sum=0;
    printf("\nSum of BOTH DIGONAL\n");
    for(k=0; k<n; k++)
    {
        for(l=0; l<n; l++)
        {
        
              if(k==l||l+k==n-1)
              {
                sum=sum+a[k][l];
              }
              
             
        
        }
        printf("\n");
    }
    printf("\nSum of All DIGONAL of Matrix %d\n",sum);
    printdigonal(a,n);
}

//Boundry Element print 
void Boundry( int a[][20],int n)
{
    int i,j;
    printf("Boundry Element\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i==0||j==0||i==n-1|j==n-1)
            {
                printf("%d\t",a[i][j]);
            }
            else{
                printf(" \t");
            }
        }
        printf("\n");
    }
}

//Sum of two Matrix
void sumof2metrix(int a[][20], int b[][20],int n)
{
    int i,j,sum;
    printf("\nSum of Two matrix\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            sum=a[i][j]+b[i][j];
            printf("%d\t",sum);
        }
        printf("\n");
    }
}

// multiplay two matrix
void multiplay(int arr1[ ][20],int arr2[ ][20],int n){
    
    int result [20][20],i,j,k,l,m,sum;
     printf("sum of both matrix\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
          for(k=0; k<n; k++)
          {
              sum=sum+arr1[i][k]*arr2[k][j];
              
          }
            result[i][j]=sum;
              sum=0;
           
        }  
}
for(l=0; l<n; l++)
    {
        for(m=0; m<n; m++)
        {
          printf("%d\t",result[l][m]);
        }
        printf("\n");
    }

}

// Simple Programs

void firstlast(){
    
    int input, d1, d2, sum;
    printf("enter for digit number :-");
    scanf("%d", &input);
    d1 = input/1000;
    d2 = input%10;
    printf("digit first is:-%d\n",d1);
 printf("digit last is:-%d\n",d2);
 sum = d1+d2;
 printf("sum of first and last digit is :-%d\n",sum);
}

//Employ Salary
void Salary()
{
  int bs;
  float ta,da,gs;
  printf("enter basic salary:-");
  scanf("%d",&bs);
  if(bs>0&&bs<10000){
ta=(10*bs)/100;
da=(5*bs)/100;
 gs = bs+ta+da;
 printf("gross slary is:-%.5f",gs);
}

else if(bs>10000)
{
    ta=(12*bs)/100;
    da=(6*bs)/100;
    gs = bs+ta+da;
 printf("gross slary is:-%.5f",gs);
    
}   
}

//check palindrom or Not
void palind()
{
    int input, input2,rem, rev;
    printf("enter the number check the nomber is palandrom and not:-");
    scanf("%d",&input);
    input2=input;
    rem=input%10;
    rev=rev*10+rem;
    input=input/10;
    
     rem=input%10;
    rev=rev*10+rem;
    input=input/10;
    
     rem=input%10;
    rev=rev*10+rem;
    input=input/10;
if(input2==rev)
{
    printf("%d nomber is palandrom ",input2);
}
else{
     printf("%d nomber is not palandrom ",input2);
}
}

//area of circul
void circul()
{
     float r;
    printf("enter radiuse :-  ");
    scanf("%f",&r);
    float c=3.14*(r*r);
    printf("area of circul is:-%.2f ",c);
}

//power funtion without using power function
void power()
{
     int powe=1, m ,n,i;
    printf("eter the number:-");
    scanf("%d",&m);
    printf("ENTER THE POWER OF NUMBER:-");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        powe=powe*m;
    }
    printf("THe power of number %d is:- %d",m,powe);
}



//String Programs
//print string
void strprint()
{
     char name[20];
    printf("ENter string:- ");
    scanf("%[^\n]",name);
    printf("%s",name);
}

//string Length
void strlength()
{
        int i,count=-1;
    char name[20];
    printf("ENter string:- ");
    scanf("%[^\n]",name);
    printf("%s\n",name);
    for(i=0; name[i]!='\0'; i++)
    {
        count++;
    }
    printf("Length of String %s  is :- %d",name,count);

}


// 3 reverce String

void reverce(){

    int i,j,count=-1;
    char name[20];
    printf("ENter string:- ");
    scanf("%[^\n]",name);
    printf("%s\n",name);
    for(i=0; name[i]!='\0'; i++)
    {
        count++;
    }
    printf("Length of String %s  is :- %d\n",name,count);
    
    for(j=count; name[j]>0; j--)
    {
        printf("%c",name[j]);
    }
}

// 4 check palindrom
void strpalindrom(){
int i,j,count=-1, x=0;
    char name[20],ret[20]=" ";
    printf("ENter string:- ");
    scanf("%[^\n]",name);
    printf("%s\n",name);
    for(i=0; name[i]!='\0'; i++)
    {
        count++;
    }
    printf("Length of String %s  is :- %d\n",name,count);
    
    
    for(j=0; j<count/2; j++)
    {
        if(name[j]!=name[count-j])
        {
            x=1;
            break;
        }
    }
    if(x==1)
    {
        printf("staring %s is not palindrom",name);
    }
    else
    {
        printf("string %s is palindrom",name);
    }
  
}


// 5 check to string are same or not 

void strequal(){
  char name1[20],name2[20];
  int name1len,name2len;
  printf("enter Two string:- ");
  scanf("%s%s",name1,name2);
   
  name1len=strlen(name1);
  name2len=strlen(name2);
   
  if(name1len==name2len)
  {
      printf("string length  %d are same\n",name1len);
   

  if(name1==name2)
  {
      printf(" also Both  string is same\n");
  }
   
  else
  {
      printf("string is not same");
  }
   
  }
  else
  {
      printf("string length and string is not same");
  }
  
}



// 6 string copy one to another
void strcopy(){
    

  char name[20],copyname[20];
  int l,i;
  printf("enter String:- ");
  scanf("%[^\n]",name);
    l=strlen(name);
  for(i=0; i<l; i++)
  {
      copyname[i]=copyname[i]+name[i];
  }
  printf("%s",copyname);
   
  }


// 7 vowel and constent count
void strvowel()
{
char name[20],copyname[20];
  int l,i,count=0,count1=0;
  printf("enter String:- ");
  scanf("%[^\n]",name);
    l=strlen(name);
  for(i=0; i<l; i++)
  {
      if(name[i]=='i'||name[i]=='e'||name[i]=='a'||name[i]=='o'||name[i]=='u')
      {
          count++;
      }
      else if(name[i]=='A'||name[i]=='E'||name[i]=='I'||name[i]=='O'||name[i]=='U')
      {
          count++;
      }
      else
      {
          count1++;
      }
       
  }
  printf(" %d Vowel in string  ",count);
  printf("\n %d Constent in string",count1);
   
  
}

// 8 store reverce string in another string
void strcpyrev()
{
  char name[20],copyname[20],temp;
  int l,i,j,count=0,count1=0;
  printf("enter String:- ");
  scanf("%[^\n]",name);
    l=strlen(name)-1;
  
  for(i=0; i<strlen(name)/2; i++)
  {
     temp=name[i];
     name[i]=name[l];
     name[l--]=temp;
  }
  printf("%s\n",name);
   
  for(j=0; j<strlen(name); j++)
  {
      copyname[j]=copyname[j]+name[j];
  }
  printf("reverce %s\n",copyname);
  
   }

//  9 merge to string
void strmerge(){
char name[20],lastname[20],temp;
  int l,m,i,j,count=0,count1=0;
  printf("enter Two String:- ");
  scanf("%s",name);
  scanf("%s",lastname);
    l=strlen(name)-1;
    m=strlen(lastname)-1;
    strcat(name,lastname);
    printf("%s",name);
   
  }

// 10 charecter search
void strsearch()
{
    
  char name[20],lastname[20],cha;
  int l,m,i,j,count=0,count1=-1;
    
  printf("Enter charecter to search:- ");
  scanf("%c",&cha);
  printf("enter String:- ");
  scanf("%s",name);
  printf("%s\n",name);
  
  for(i=0; i<strlen(name); i++)
  {
      count1++;
  if(cha==name[i])
  {
      count=1;
      break;
  }
   
  }
  if(count==1)
  {
     printf("\n %c charecter is exist at index %d",cha,count1); 
  }
  else{
      printf("\n %c charecter not exist",cha);
  }
  
  }

// 11 convert string to upper case

void strupper()
{
  char name[20],lastname[20],cha;
  int l,m,i,j,count=0,count1=-1;
    
   
  printf("enter String:- ");
  scanf("%s",name);
  printf("%s\n",name);
  for(i=0; i<strlen(name); i++)
  {
      if(name[i]>='a'&&name[i]<='z')
      {
          name[i]=name[i]-32;
      }
  }
  printf("Upper case %s",name);
  
} 


// 12 lower case

void strlower()
{
  char name[20],lastname[20],cha;
  int l,m,i,j,count=0,count1=-1;
    
   
  printf("enter String:- ");
  scanf("%s",name);
  printf("%s\n",name);
  for(i=0; i<strlen(name); i++)
  {
      if(name[i]>='A'&&name[i]<='Z')
      {
          name[i]=name[i]+32;
      }
  }
  printf("Lower case %s",name);
  
   }
//  13 TO TOGGEL CASE

void strtoggel(){
  char name[20],lastname[20],cha;
  int l,m,i,j,count=0,count1=-1;
    
   
  printf("enter String:- ");
  scanf("%s",name);
  printf("%s\n",name);
  for(i=0; i<strlen(name); i++)
  {
      if(name[i]>='A'&&name[i]<='Z')
      {
          name[i]=name[i]+32;
      }
      else if(name[i]>='a'&&name[i]<='z')
      {
          name[i]=name[i]-32;   
          }
  }
  
  printf("TOGGEL case %s",name);
   }
// 14 sentence case

void strsentence()
{
      char name[20],lastname[20],cha;
  int l,m,i,j,count=0,count1=-1;
    
   
  printf("enter String:- ");
  scanf("%s",name);
  printf("%s\n",name);
  for(i=0; i<strlen(name); i++)
  {
      if(name[i]>='A'&&name[i]<='Z')
      {
          name[i]=name[i]+32;
      }
      else if(name[i]>='a'&&name[i]<='z')
      {
          name[i]=name[i]-32;   
          }
  }
  
  printf("Sentence case %s",name);
   

}










