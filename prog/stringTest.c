#include <stdio.h>

/*
  This is a (terrible) program that I'm going to use
  to demonstrate how to use the tool `strings` on
  Linux.

  `strings` is a part of the GNU binutils package.
*/

int main()
{
  char *pass = "hunter123";
  char userPass[100];
  printf("Enter the password: ");
  scanf("%s", userPass);
  if (strcmp(userPass, pass) == 0) {
    printf("You got in!\n");
  }
  else {
    printf("Wrong password.\n");
  }
  return 0;
}
