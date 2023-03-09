// Final 6: Faça um programa que desenhe uma piramide a partir da altura
// informada. O programa deve usar repetição para criar o desenho

#include <stdio.h>

int main() {

  int altura;

  int x, y, z;

  puts("Entre a altura da piramide:");
  scanf("%i", &altura);

  for (x = 1; x <= altura; x++) {

    for (y = x; y < altura; y++) {
      printf(" ");
    }

    for (z = 1; z < 2 * x; z++) {
      printf("*");
    }

    printf("\n");
  }

  return 0;
}
