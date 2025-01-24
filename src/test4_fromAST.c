#include <stdio.h>
#include <stdlib.h>

int main() 
{
   int _Aaaaaaa;
   printf("Enter _Aaaaaaa:");
   scanf("%d", &_Aaaaaaa);
   while (_Aaaaaaa > 1)
   {
   _Aaaaaaa = (_Aaaaaaa - 1);
   printf("%d\n", _Aaaaaaa);
   }
   system("pause");
    return 0;
}
