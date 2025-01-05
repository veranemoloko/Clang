#include <stdio.h>
#include <stdlib.h>
int dayOfYear(char *date) {}

int main(int argc, char *argv[]) {
  int res = 0;
  char *date = argv[1];

  int yy = 1000 * (date[0] - '0') + 100 * (date[1] - '0') +
           10 * (date[2] - '0') + (date[3] - '0');
  int dd = 10 * (date[8] - '0') + (date[9] - '0');
  int mm = 10 * (date[5] - '0') + (date[6] - '0');

  for (int m = 1; m < mm; m++) {
    switch (m) {
    case 2:
      res += 28;
      if (((yy % 4 == 0) && (yy % 100 != 0)) || (yy % 400 == 0)) {
        res += 1;
      }

      break;
    case 4:
    case 6:
    case 9:
    case 11:
      res += 30;
      break;
    default:
      res += 31;
      break;
    }
  }

  res += dd;

  printf("%d.%d.%d = %d\n", dd, mm, yy, res);
  return 0;
}