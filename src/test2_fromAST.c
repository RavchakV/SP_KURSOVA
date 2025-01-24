#include <stdio.h>
#include <stdlib.h>

int main() 
{
   int _Aaaaaaa;
   int _Bbbbbbb;
   int _Ccccccc;
   int _Ddddddd;
   int _Fffffff;
   int _Xxxxxxx;
   printf("Enter _Aaaaaaa:");
   scanf("%d", &_Aaaaaaa);
   _Aaaaaaa = (_Aaaaaaa + 1);
   for (int _Ddddddd = 0; _Ddddddd <= 32767; _Ddddddd++){
   _Bbbbbbb = (_Aaaaaaa - 1);
   for (int _Fffffff = 0; _Fffffff <= 32767; _Fffffff++){
   if (_Bbbbbbb > 2) 
{ 
} 
   else{
   goto _Rrrrrrr;
} 
   _Ccccccc = _Aaaaaaa;
   for (int _Xxxxxxx = 0; _Xxxxxxx <= 32767; _Xxxxxxx++){
   if (_Ccccccc > _Bbbbbbb) 
{ 
} 
   else{
   goto _Lllllll;
} 
   _Ccccccc = (_Ccccccc - _Bbbbbbb);
}
_Lllllll:
   if (_Ccccccc == 0) 
{ 
   goto _Rrrrrrr;
} 
   _Bbbbbbb = (_Bbbbbbb - 1);
}
_Rrrrrrr:
   if (_Bbbbbbb == 1) 
{ 
   goto _Eeeeeee;
} 
   _Aaaaaaa = (_Aaaaaaa + 1);
}
_Eeeeeee:
   printf("%d\n", _Aaaaaaa);
   system("pause");
    return 0;
}
