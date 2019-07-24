/**
 * File    : swap.c
 * Author  : Kazune Takahashi
 * Created : 7/24/2019, 4:01:16 PM
 * Powered by Visual Studio Code
 */

#include <stdio.h>

#define swap(a, b) (((a) ^= (b)), ((b) ^= (a)), ((a) ^= (b)))

int main()
{
  int s, t;
  scanf("%d%d", &s, &t);
  printf("s = %d, t = %d\n", s, t);
  swap(s, t);
  printf("s = %d, t = %d\n", s, t);
}