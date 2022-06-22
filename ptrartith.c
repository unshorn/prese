#include <stdio.h>

int main() {
  int g[4];
  int v = (&g+100);
  printf("%d %d", g[3], v);
}
