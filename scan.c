#include <stdio.h>
#include <stdlib.h>
void main()
{
int c,head,n,i,q[10],d=0,st=0,temp,p,loc,j;
printf("Enter the number of cylinders\n");
scanf("%d",&c);
printf("Enter the current head position\n");
scanf("%d",&head);
printf("Enter the maximum number for work queue\n");
scanf("%d",&n);
printf("Enter the previous head position\n");
scanf("%d",&p);
printf("enter the elements -of the work queue\n");
for(i=1;i<=n;i++){
scanf("%d",&q[i]);}
q[0]=head;
for(i=0;i<=n-1;i++){
for(j=0;j<=n-i-1;j++){
if(q[j]>q[j+1]){
temp=q[j];
q[j]=q[j+1];
q[j+1]=temp;}}}
for(i=0;i<=n;i++)
{
if(q[i]==head){
loc=i;
break;}
}
if(p<head)
{
for(i=loc;i<n;i++){
d=abs(q[i]-q[i+1]);
printf("from %d to %d--->%d\n",q[i],q[i+1],d);
st=st+d;}
d=abs(q[n]-(c-1));
st=st+d;
printf("from %d to %d--->%d",q[n],c-1,d);
d=abs((c-1)-q[loc-1]);
printf("from %d to %d--->%d\n",q[loc-1],c-1,d);
st=st+d;
for(i=loc-1;i>0;i--){
d=abs(q[i]-q[i-1]);
printf("from %d to %d--->%d\n",q[i],q[i-1],d);
st=st+d;}}
else
{
for(i=loc;i>0;i--)
{
d=abs(q[i]-q[i-1]);
printf("from %d to %d --->%d\n",q[i],q[i-1],d);
st=st+d;
}
d=abs(q[0]-0);
printf("from %d to 0--->%d\n",q[0],d);
st=st+d;
d=abs(0-q[loc+1]);
printf("from 0 to %d--->%d\n",q[loc+1],d);
st=st+d;
for(i=loc+1;i<n;i++){
d=abs(q[i]-q[i+1]);
printf("from %d to %d--->%d\n",q[i],q[i+1],d);
st=st+d;}}
printf("Total head movements =%d\n",st);}