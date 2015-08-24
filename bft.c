#include <stdio.h>

const char* code = ">+[[->+>+<<]>[-<+>]>+]<+><<[<<]>+>>>[+[-.<+>[->+>>+<<<]>-<>>[<[>>[>>+<<-]<<[>>+<<-]>>-]>[-]>[-<+>]<[>+>>+<<<-]->->]<[-]>>[-]-[+<<-]>]>>]";

#define MAX_STORAGE 1024
 unsigned char values[MAX_STORAGE];

unsigned char GET(unsigned int index) {
 if (index < MAX_STORAGE) return values[index];
 return 0;
}

unsigned char SET(unsigned int index, unsigned char value)
{
 if (index < MAX_STORAGE) values[index] = value;
 return value;
}

int main()
{
 int ip = 0;
 unsigned int index = 0;
 int length = strlen(code);

 while (ip < length) {
  switch (code[ip])
 {
  case '.': printf("%i\n", GET(index));
   break;
  case '+': SET(index, GET(index) + 1);
   break;
  case '-': SET(index, GET(index) - 1);
   break;
  case '>': index = (index+1)%MAX_STORAGE;
   break;
  case '<': index = (index-1)%MAX_STORAGE;
   break;
  case '[': 
    if (GET(index) == 0)
    {
     int matches = 1;
     while (matches && ++ip < length)
     {
      if (code[ip] == '[') matches++;
      if (code[ip] == ']') matches--;
     }
     ip--;
    }
   break;
  case ']':
    if (GET(index) != 0)
    {
     int matches = 1;
     while (matches && --ip > 0)
     {
      if (code[ip] == ']') matches++;
      if (code[ip] == '[') matches--;
     }
    }
   break;
 }

 ip++;
 }
 return 0;
}
