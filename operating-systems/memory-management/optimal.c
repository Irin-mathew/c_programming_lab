#include <stdio.h>
void main(){
int n,i,j,in[90],f,out[90],pf,flag1,flag2,optimal[90],k,pos,max,exist,m=0;
printf("enter the length of string\t");
scanf("%d",&n);
printf("enter the string elements\n");
for(i=0;i<n;i++) {
scanf("%d",&in[i]); }
printf("enter the number of frames\t");
scanf("%d",&f);
for(i=0;i<f;i++) {
out[i]=-1; }
pf=f; //insert into all frames =>that count =>initially set
for(i=0;i<n;i++) {
flag1=0;
flag2=0;
for(j=0;j<f;j++) {
if(out[j]==in[i]) {
flag1=1;
flag2=1;
break;}}
if(flag1==0) {
for(j=0;j<f;j++) {
if(out[j]==-1) {
out[j]=in[i];
flag2=1;
break; } } }
if(flag2==0){
for(j=0;j<f;j++){
optimal[j]=0;
}
for(j=0;j<f;j++){
for(k=j+1;k<=n;k++){
if(out[j]==in[k]){
optimal[j]=k-i;
break; } } }
exist=0;
for(j=0;j<f;j++){
if(optimal[j]==0){
pos=j;
exist=1;
break;
}}
if(exist==0){
max=optimal[0];
pos=0;
for(j=0;j<f;j++){
if(max<optimal[j]) {
max=optimal[j];
pos=j; }
}}
out[pos]=in[i];
pf++;
}
for(j=0;j<f;j++){
printf("%d\t",out[j]);
}
if(i>=f){
printf("\tpage faults :%d\n",pf);
}
else {
m=m+1;
printf("\tpage faults :%d\n",m);
} }}
