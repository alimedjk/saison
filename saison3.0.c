#include<stdio.h>
#include<string.h>
 int val(char c[20]){
     int y;
     if (strcmp(c,"janvier")==0)
        y=1;
    else if (strcmp(c,"fevrier")==0)
        y=2;
    else if (strcmp(c,"mars")==0)
       y=3;
    else if (strcmp(c,"avril")==0)
      y=4;
    else if (strcmp(c,"mai")==0)
       y=5;
    else if (strcmp(c,"juin")==0)
      y=6;
    else if (strcmp(c,"juillet")==0)
     y=7;
      else if (strcmp(c,"aout")==0)
      y=8;
     else if (strcmp(c,"septembre")==0)
     y=9;
    else if (strcmp(c,"octobre")==0)
      y=10;
     else if (strcmp(c,"novembre")==0)
      y=11;
    else if (strcmp(c,"decembre")==0)
     y=12;
     return y;
    }
    int numberOfDays(int monthNumber, int year)
{
    // January
    if (monthNumber == 1)
        return (31);
  
    // February
    if (monthNumber == 2) {
        // If the year is leap then Feb
        // has 29 days
        if (year % 400 == 0
            || (year % 4 == 0
                && year % 100 != 0))
            return (29);
        else
            return (28);
    }
  
    // March
    if (monthNumber == 3)
        return (31);
  
    // April
    if (monthNumber == 4)
        return (30);
  
    // May
    if (monthNumber == 5)
        return (31);
  
    // June
    if (monthNumber == 6)
        return (30);
  
    // July
    if (monthNumber == 7)
        return (31);
  
    // August
    if (monthNumber == 8)
        return (31);
  
    // September
    if (monthNumber == 9)
        return (30);
  
    // October
    if (monthNumber == 10)
        return (31);
  
    // November
    if (monthNumber == 11)
        return (30);
  
    // December
    if (monthNumber == 12)
        return (31);
}
    int main(){
    char mois[20];
    int jour,x,anne,day;
    printf("donner le jour:\t");
    scanf("%d",&jour);
    printf("donner le mois:");
    scanf("%s",&mois);
    printf("donner l'annee:");
    scanf("%d",&anne);
    x=val(mois);
    day=numberOfDays(x,anne);
    if (jour>day)
    {
        printf("wrong date !\n");
    }
    
    else if (x>=1&& x<3 && jour<21.)
    
    printf("hiver");
    
    else if (x>=1&& x<=2&&jour>=21)
    
        printf("hiver");
    
    
    else if (x==3&&jour<=20)
    
        printf("hiver");
    
     else if (x>=3&& x<6&& jour>=21)
    
        printf("printemps");
     else if (x>=4&& x<6&& jour<21)

         printf("printemps");
        
    else if (x==6&&jour<=20)
    
        printf("printemps");
    
    else if (x>=6&&x<9&&jour>=21)
    
        printf("Ete");
    else if (x>=7 && x<9 && jour<21)

     printf("Ete");
    
    else if (x==9&&jour<=20)
    
       printf("Ete");
    
    
    else if (x>=9&&x<12&&jour>=12)
    
        printf("automne");
    
    else if (x==12&&jour<=20)
    
     printf("automne");
    
    if(x>=12&& jour>=21)
    
    printf("hiver");
    
    return 0;
}
