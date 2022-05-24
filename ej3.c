#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  int m = atoi(argv[1]);

  char *months[] = {
    "",
    "Enero",
    "Febrero",
    "Marzo",
    "Abril",
    "Mayo",
    "Junio",
    "Julio",
    "Agosto",
    "Septiembre",
    "Octubre",
    "Noviembre",
    "Diciembre"
  };

  if (m < 1 || m > 12) {
    printf("Por favor, un número de 1 a 12\n");
    return 0;
  }
  printf("%s\n", months[m]);
  return 0;
}
