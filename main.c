#include <stdio.h>

int main(void) 
{
float R,H,ANS;
  printf("Enter R : ");
  scanf("%f", &R);
  printf("Enter H :");
  scanf("%f", &H);
  ANS = (2*22/7*R)*H+2*(22/7*R*R);
  printf("ANSWER IS %0.2f",ANS);
  return 0;
}