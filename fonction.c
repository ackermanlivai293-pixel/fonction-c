#include <unistd.h>
void afficher(char c ) 
{
	write(1, &c, 1);
}
int main(void) {
  afficher('a');
return (0);
}
