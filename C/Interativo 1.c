#include <stdio.h>

int
main ()
{
  char nome[256];
  int idade, an;

  printf ("qual seu nome e sobrenome\n");
  scanf ("%s", nome);
  printf ("Bom %s, diga sua idade e seu ano de nascimento ", nome);
  scanf ("%d %d", &idade, &an);
  printf ("Bom, o %s tem %d anos, nascido em %d", nome, idade, an);

  return 0;
}