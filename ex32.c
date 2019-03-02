#include <stdio.h>

int main() {
  int arr[10];
  int i, avg = 0;

  for (i = 0; i < 10; i++) {
    printf("Score of %d student? ", i + 1);
    scanf("%d", &arr[i]);
  }

  for (i = 0; i < 10; i++) {
    avg = avg + arr[i];
  }
  avg = avg / 10;
  printf("Average score of all students : %d \n", avg);

  for (i = 0; i < 10; i++) {
    printf("Student %d : ", i + 1);
    if (arr[i] >= avg)
      printf("Pass \n");
    else
      printf("Fail \n");
  }
  return 0;
}
