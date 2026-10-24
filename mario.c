#include <stdio.h>
int main(void)
{
  int height;
  printf("Enter the height of the pyramid: ");
  do
  {
    printf("Enter height (1-8): ");
    scanf("%d", &height);
  }
while (height < 1 || height > 8);
  for (int i = 1; i <= height; i++)
  {
    for (int j = 0; j < height - i; j++)
    {
      printf(" ");
    }
    for (int j = 0; j < 2 * i - 1; j++)
    {
      printf("#");
    }
    printf("\n");
  }
  return 0;
}