#include <stdio.h>

int main()
{

  unsigned short array[100] = {0};
  unsigned short short_array[50];
  int i;

  printf("%lu\n", sizeof(array));
  printf("%lu\n", sizeof(short_array));

  // for ( i = 0; i < 100; i++)
  // {
  //   array[i] = 0;
  // }
  // 配列を初期化するのにforループを回す必要はない。

  for (i = 0; i < 100; i++)
  {
    printf("%d\n", array[i] + i);
  }

};
