/*
** my_strlen.c for my_strlen in /home/bongol_b/rendu/Piscine_C_J04
** 
** Made by berdrigue bongolo-beto
** Login   <bongol_b@epitech.net>
** 
** Started on  Thu Oct  1 09:29:01 2015 berdrigue bongolo-beto
** Last update Sun Oct 11 21:10:49 2015 berdrigue bongolo-beto
*/

int	my_strlen(char *str)
{
  int	cp;

  cp = 0;
  while (str[cp])
    {
      cp = cp + 1;
    }
  return cp;
}