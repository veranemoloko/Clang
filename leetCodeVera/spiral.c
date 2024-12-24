
bool leftRight(int *x, int y, int **m, int *val, int last, int right){
   for(; *x <= right; *x++){
      if (*val + 1 > last){
        return false;
      }
      m[y][*x] = *val++;
    }
    *x--;
    return true;
}

bool upDown(int x, int *y, int **m, int *val, int last, int down){
   for(; *y <= down; *y++){
      if (*val + 1 > last){
        return false;
      }
      m[*y][x] = *val++;
    }
    *y--;
    return true;
}

bool rightLeft(int *x, int y, int **m, int *val, int last, int left){
   for(; *x >= left; *x--){
      if (*val + 1 > last){
        return false;
      }
      m[y][*x] = *val++;
    }
    *x++;
    return true;
}

bool downUp(int x, int *y, int **m, int *val, int last, int up){
   for(; *y >= up; *y--){
      if (*val + 1 > last){
        return false;
      }
      m[*y][x] = *val++;
    }
    *y++;
    return true;
}

int main() {
  int X, Y;
  scanf("%d %d", &X, &Y);
    
  int m[10][10] = {0};
    
  int left = 0;
  int right = X - 1;
  int up = 0;
  int down = Y - 1;
    
  int last = X*Y;
  int val = 1;
    
  for(;;){
    int x = left;
    int y = up;

    if (!leftRight(&x, y, m, &val, last, right))
        break;
   /* if (!upDown(x, &y, m, &val, last, down))
        break;
    if (!rightLeft(&x, y, m, &val, last, left))
        break;
    if (!downUp(x, &y, m, &val, last, up))
        break;*/
    
    left++;
    up++;
    right--;
    down--;
  }

  return 0;
}