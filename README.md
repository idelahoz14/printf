# Our printf project
# Description
  This project is its own version of printf that print according to the
  arguments that we pass.

# How to compile ?
  This project works on a Linux operating system
  We can compile the our own printf project by
  do the following command:

  *gcc -Wall -Werror -Wextra -pedantic * . c

  We can show the following operations:
  * (%c) -> Print the corresponding ASCII character.
  * (%d, %i) -> Signed decimal conversion of an integer.
  * (%s) -> Character string (ending in '\ 0').
  * (%%) -> Print the % symbol.

# Example

  *printf("Let's try to printf a simple sentence.\n");
   *Let's try to printf a simple sentence.
  *printf("Length:[%d, %i]\n", 39, 39);
   *Length:[39, 39]
  *printf("String:[%s]\n", "I am a string !");
   *String:[I am a string !]