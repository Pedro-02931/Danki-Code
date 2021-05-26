#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int
main ()
{
  char nm[256];
  int id;

  printf ("Diga o seu nome?\n");
  scanf ("%s", nm);

  printf ("\nDiga sua idade?\n");
  scanf ("%d", &id);

  printf ("nome: %s\nidade: \n%d", nm, id);

  printf ("\nSeu nome está na categoria: %c", nm[0]);

  if (id > 18)
    {
      printf ("\nSubcategoria: adulto");
    }
  else if (id > 12)
    {
      printf ("\nSubcategoria:menor de idade");
    }
  else
    {
      printf ("\nSubcategoria: criança");
    }


  return 0;
}
