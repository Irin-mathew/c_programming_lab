#include <stdio.h>
void main(){
int n,i,in[90],f,out[90],fl[90],c[90],j,x=1,pf=0,min=0;
printf("enter the length of integer string\t");
scanf("%d",&n);
printf("enter the integers\n");
for(i=0;i<n;i++){
scanf("%d",&in[i]);
fl[i]=0; }
printf("enter the number of frames\t");
scanf("%d",&f);
for(i=0;i<f;i++) {
out[i]=-1;
printf("%d\t",out[i]); }
printf("\n");
for(i=0;i<f;i++) {
c[i]=0; }
for(i=0;i<n;i++) {
for(j=0;j<f;j++) {
if(out[j]==in[i]) {
fl[i]=1;
c[j]=x;
x++; }}
if(fl[i]==0) {
if(i<f) {
out[i]=in[i];
c[i]=x;
x++; OUTPUT:
pf++; }
else {
for(j=1;j<f;j++) {
if(c[min]>c[j]) {
min=j; } }
out[min]=in[i];
c[min]=x;
x++;
pf++; } }
for(j=0;j<f;j++){
printf("%d\t",out[j]);
}
printf("\tpage faults:%d\n",pf);
}}