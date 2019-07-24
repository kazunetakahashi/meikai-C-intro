/**
 * File    : literal.c
 * Author  : Kazune Takahashi
 * Created : 7/24/2019, 4:22:02 PM
 * Powered by Visual Studio Code
 */

#include <stdio.h>

int main()
{
  char *p = "ABCD";
  char *q = "ABCD";
  printf("p = %p\n", p);
  printf("q = %p\n", q);
  char s[5] = "ABCD";
  char t[5] = "ABCD";
  printf("s = %p\n", s);
  printf("t = %p\n", t);
}