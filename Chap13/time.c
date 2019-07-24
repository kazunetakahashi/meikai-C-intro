/**
 * File    : time.c
 * Author  : Kazune Takahashi
 * Created : 7/24/2019, 6:38:41 PM
 * Powered by Visual Studio Code
 */

#include <time.h>
#include <stdio.h>

char *data_file = "data.txt";

void get_data()
{
  FILE *fp;
  if ((fp = fopen(data_file, "r")) == NULL)
  {
    puts("First use.\n");
  }
  else
  {
    int year, month, day, h, m, s;
    fscanf(fp, "%d%d%d%d%d%d", &year, &month, &day, &h, &m, &s);
    printf("Last use: %d-%d-%d %d:%d:%d\n", year, month, day, h, m, s);
    fclose(fp);
  }
}

void put_data()
{
  FILE *fp;
  time_t current = time(NULL);
  struct tm *timer = localtime(&current);
  if ((fp = fopen(data_file, "w")) == NULL)
  {
    puts("cannot open.\n");
  }
  else
  {
    fprintf(fp, "%d %d %d %d %d %d\n", timer->tm_year + 1900, timer->tm_mon + 1, timer->tm_mday, timer->tm_hour, timer->tm_min, timer->tm_sec);
    fclose(fp);
  }
}

int main()
{
  get_data();
  put_data();
  return 0;
}