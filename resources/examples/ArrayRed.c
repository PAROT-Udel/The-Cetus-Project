/* Array Reduction

  The loop contains an array reduction operation, 
  a.k.a irregular reduction or histogram reduction

*/

#include <stdio.h>
#include <math.h>
int main(){

  float a[10000], sum[10000];
  int i, n, tab[10000];
  
  /* define content of sum and a */

  for (i=1; i<10000; i++) {
    sum[tab[i]] = sum[tab[i]] + a[i];
  }
	
   return 0;
}
