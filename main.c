#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(void)
{
  char str[30] = "Happy C programming";
      
  printf("문자열 \"%s \"의 길이: %i\n", str, strlen(str));
  
  system("PAUSE");	
  return 0;
}
