# include <stdio.h>
#include <stdlib.h>
void main(){
int c,head,n,i,q[10],d=0,st=0;
printf("Enter the maximum number of cylinders\n");
scanf("%d",&c);
printf("Enter the current head position\n");
scanf("%d",&head);
printf("Enter the maximum number for work queue\n");
scanf("%d",&n);
printf("enter the elements -of the work queue\n");
for(i=1;i<=n;i++){
scanf("%d",&q[i]);}
q[0]=head;
for(i=0;i<n;i++){
d=abs(q[i]-q[i+1]);
printf("from %d to %d---> %d\n",q[i],q[i+1],d);
st=st+d;}
printf("Total head movements = %d\n",st);}
