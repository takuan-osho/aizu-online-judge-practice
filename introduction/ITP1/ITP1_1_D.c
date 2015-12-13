#include <stdio.h>
#include <math.h>

int main() {
  int hour;
  int minute;
  int second;
  scanf("%d", &second);

  hour = floor(second / 3600);
  second = second % 3600;

  minute = floor(second / 60);
  second = second % 60;

  printf("%d:%d:%d\n", hour, minute, second);
  return 0;
}
