#include<stdio.h>
#include<stdlib.h>
#define MIN(x,y) (x<y)?x:y
void main()
{
 int cap=0,out=0,i=0,input[50]={0},nsec=0,count=0,ch;
 int x=0,drop=0;
 printf("enter bucket size :\n");
 scanf("%d",&cap);
 printf("enter output rate:\n");
 scanf("%d",&out);
 do
 {
 printf("enter number of packets at time t = %d : \n",i+1);
 scanf("%d",&input[i]);
 if(input[i]>cap)
 {
 printf("bucket overflow -> packet discarded \n");
 exit(1);
 }
 else
 i++;
 printf("insert next packet ?1(yes) 0(no) : \n");
 scanf("%d",&ch);
 }while(ch);
 printf(" Time\tRecieved\tSent\t Dropped\tRemaining \n");
 nsec=i;
 for(i=0;count||i<nsec;i++)
 {
 if((x=input[i]+count-out)>0)
 {
 if(x>cap)
 {
 count=cap;
 drop=x-cap;
 }
 else
 {
 count=x;
 drop=0;
 }
 }
 else
 {
 count=0;
 drop=0;
 }
 printf("%d\t%d\t \t%d \t%d \t\t%d \n",(i+1),input[i],MIN(input[i]+count,out),drop,count);
 }
}
