#include <stdio.h>

#include <stdlib.h>

int main() 
{
   int _Aaaaaaa, _Aaaaaa2, _Bbbbbbb, _Xxxxxxx, _Cccccc1, _Cccccc2;
   printf("Enter _Aaaaaaa:");
   scanf("%d", &_Aaaaaaa);
   printf("Enter _Bbbbbbb:");
   scanf("%d", &_Bbbbbbb);
   for (int _Aaaaaa2 = _Aaaaaaa; _Aaaaaa2 <= _Bbbbbbb; _Aaaaaa2++)
   printf("%d\n", _Aaaaaa2 * _Aaaaaa2);
   for (int _Aaaaaa2 = _Bbbbbbb; _Aaaaaa2 <= _Aaaaaaa; _Aaaaaa2++)
   printf("%d\n", _Aaaaaa2 * _Aaaaaa2);
   _Xxxxxxx = 0;
   _Cccccc1 = 0;
   while (_Cccccc1 < _Aaaaaaa)
   {
   {
   _Cccccc2 = 0;
   while (_Cccccc2 < _Bbbbbbb)
   {
   {
   _Xxxxxxx = _Xxxxxxx + 1;
   _Cccccc2 = _Cccccc2 + 1;
   }
   }
   _Cccccc1 = _Cccccc1 + 1;
   }
   }
   printf("%d\n", _Xxxxxxx);
   _Xxxxxxx = 0;
   _Cccccc1 = 1;
   do
   {
   _Cccccc2 = 1;
   do
   {
   _Xxxxxxx = _Xxxxxxx + 1;
   _Cccccc2 = _Cccccc2 + 1;
   }
   while (!(_Cccccc2 > _Bbbbbbb));
   _Cccccc1 = _Cccccc1 + 1;
   }
   while (!(_Cccccc1 > _Aaaaaaa));
   printf("%d\n", _Xxxxxxx);
   system("pause");
    return 0;
}
