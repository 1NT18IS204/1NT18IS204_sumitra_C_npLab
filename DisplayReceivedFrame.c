/*Design a C program in which sender module should count the no of bits in the frame and receiver module should display each frame */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char res[100];
void sender()
{
int n,i,len,b;
char frm[100],l[100];
printf("Enter the number of frames\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter the frame %d\n",i+1);
scanf("%s",&frm);
len=strlen(frm);
b+=len;
sprintf(l,"%d",len);
strcat(l,frm);
strcat(res,l);
}
printf("Count of bits in the frame:%d\n",b);
}
void reciever()
{
int len,i,j;
printf("Received frame:");
for(i=0;i<strlen(res);i++)
{
len=res[i]-'0';
for(j=i+1;j<=(i+len);j++)
printf("%c",res[j]);
i=i+len;
}
}
void main()
{
sender();
reciever();
return 0;
}
