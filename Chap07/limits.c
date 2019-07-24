/**
 * File    : limits.c
 * Author  : Kazune Takahashi
 * Created : 7/24/2019, 3:39:37 PM
 * Powered by Visual Studio Code
 */

#include <stdio.h>
#include <limits.h>

int main()
{
  puts("minimums and maximums");
  printf("char: %d - %d\n", CHAR_MIN, CHAR_MAX);
  printf("signed char: %d - %d\n", SCHAR_MIN, SCHAR_MAX);
  printf("unsigned char: %d - %d\n", 0, UCHAR_MAX);
  printf("short: %d - %d\n", SHRT_MIN, SHRT_MAX);
  printf("int: %d - %d\n", INT_MIN, INT_MAX);
  printf("long: %ld - %ld\n", LONG_MIN, LONG_MAX);
  printf("long long: %lld - %lld\n", LLONG_MIN, LLONG_MIN);
  printf("unsigned short: %u - %u\n", 0u, USHRT_MAX);
  printf("unsigned int: %u - %u\n", 0u, USHRT_MAX);
  printf("unsigned long: %lu - %lu\n", 0ul, ULONG_MAX);
  printf("unsigned long long: %llu - %llu\n", 0ull, ULLONG_MAX);
}