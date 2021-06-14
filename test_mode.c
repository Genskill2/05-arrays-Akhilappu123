#include <stdio.h>
#include <assert.h>


int mode(int [], int);

int main(void) {
  int x[] = {4, 9,5,6,5,10,0,2,-3, -3,4, 4};
  assert ((mode(x, 12) == 4));

  int y[] = {5};
  assert (mode(y, 1) == 5);
  printf("Mode: passed\n");
  }
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
