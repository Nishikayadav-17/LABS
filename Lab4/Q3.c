//WAP to check if three points (x1,y1), (x2,y2) and (x3,y3) are collinear or not.

#include<stdio.h>
int main(){
    int x1,x2,x3,y1,y2,y3, slope1, slope2;
     printf("Enter the value of x1 ");
    scanf("%d",&x1);
     printf("Enter the value of x2 ");
    scanf("%d",&x2);
     printf("Enter the value of x3 ");
    scanf("%d",&x3);
     printf("Enter the value of y1 ");
    scanf("%d",&y1);
     printf("Enter the value of y2 ");
    scanf("%d",&y2);
     printf("Enter the value of y3 ");
    scanf("%d",&y3);
    
    slope1= (y2-y1)/(x2-x1);
    slope2= (y3-y2)/(x3-x2);

    if(slope1==slope2)
    {printf("The three points are collinear");}
    else{
        printf("The points are not collinear"); }
    return 0; }