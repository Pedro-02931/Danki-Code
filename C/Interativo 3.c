#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int
main ()
{
  char p1[256], p2[256];
  printf ("\nP1, pedra,papel ou tesoura?\n");
  scanf ("%s", p1);

  printf ("\nP2, pedra,papel ou tesoura?\n");
  scanf ("%s", p2);

  printf ("\n p1:%s\np2:%s\n", p1, p2);

  if (strcmp (p1, "papel") == 0)
    {
      if (strcmp (p2, "papel") == 0)
	{
	  printf ("Empate");
	}
      else if (strcmp (p2, "tesoura") == 0)
	{
	  printf ("p2 Ganhou");
	}
      else if (strcmp (p2, "pedra") == 0)
	{
	  printf ("p2 perdeu");
	}
      else
	{
	  printf ("Dado invalido");
	}
    }
  else if (strcmp (p1, "tesoura") == 0)
    {
      if (strcmp (p2, "papel") == 0)
	{
	  printf ("p2 perdeu");
	}
      else if (strcmp (p2, "tesoura") == 0)
	{
	  printf ("Empate");
	}
      else if (strcmp (p2, "pedra") == 0)
	{
	  printf ("p2 Ganhou");
	}
      else
	{
	  printf ("Dado invalido");
	}
    }
  else if (strcmp (p1, "pedra") == 0)
    {
      if (strcmp (p2, "papel") == 0)
	{
	  printf ("p2 ganhou");
	}
      else if (strcmp (p2, "tesoura") == 0)
	{
	  printf ("p2 Perdeu");
	}
      else if (strcmp (p2, "pedra") == 0)
	{
	  printf ("Empate");
	}
      else
	{
	  printf ("Dado invalido");
	}
    }
  else
    {
      printf ("Dado invalido");

    }

  return 0;
}
