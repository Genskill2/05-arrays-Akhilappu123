/* Enter your solutions in this file */
#include <stdio.h>
// mode
int mode(int numbers[],int num) {
int count=0;int modevalue=0; int ret;
 for (int i=0;i<num;i++) {
   for (int j=0;j<num;j++) {
      if (numbers[i]==numbers[j])
        count+=1;
   if (count>modevalue){
    modevalue=count;
    ret=numbers[i];}}
    }
    return ret;}
//minimum
int min(int numbers[],int num) {
 int ret =numbers[0];
 for (int i=0;i<num;i++) {
  if (numbers[i]<ret)
  ret=numbers[i]; }
  return ret; }
//maximum
int max(int numbers[],int num) {
 int ret =numbers[0];
 for (int i=0;i<num;i++) {
   if (numbers[i]>ret)
    ret=numbers[i]; }
    return ret; }
//prime factors
int factors(int num,int ret[]) {
int max=0; int j=0;
 for (int i=2;num>1;i++) {
  while (num%i==0) {
   ret[j]=i;
   j++;
   max++;
   num=num/i;}
   }
   return max; }
//average
   float average(int numbers[],int num) {
float ret=0;
for (int i=0;i<num;i++) {
   ret+=numbers[i];}
return ret/num; }
