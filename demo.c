#include "demo.h"

void strlcat_test(const char *dst, const char* src, size_t size) {
  char* aux = malloc(20);
  if (aux == NULL)
    return;
  strcpy(aux, dst);
#ifdef STD
  size_t result = strlcat(aux, src, size);
#else
  size_t result = ft_strlcat(aux, src, size);
#endif
  printf("DST: %4s SRC: %5s size: %2ld strlcat: %-9s return: [%ld]\n", dst, src, size, aux, result);
  free(aux);
}

int main(void) {
  strlcat_test("", "", 0);
  strlcat_test("", "", 0);
  strlcat_test("", "", 0);
  strlcat_test("", "", 1);
  strlcat_test("", "", 0);
  strlcat_test("", "", 0);
  strlcat_test("", "", 1);
  strlcat_test("HOLA", "", 0);
  strlcat_test("HOLA", "", 3);
  strlcat_test("HOLA", "", 4);
  strlcat_test("HOLA", "", 5);
  strlcat_test("HOLA", "", 3);
  strlcat_test("HOLA", "", 4);
  strlcat_test("HOLA", "", 5);
  strlcat_test("", "MUNDO", 0);
  strlcat_test("", "MUNDO", 0);
  strlcat_test("", "MUNDO", 0);
  strlcat_test("", "MUNDO", 1);
  strlcat_test("", "MUNDO", 4);
  strlcat_test("", "MUNDO", 5);
  strlcat_test("", "MUNDO", 6);
  strlcat_test("HOLA", "MUNDO", 0);
  strlcat_test("HOLA", "MUNDO", 3);
  strlcat_test("HOLA", "MUNDO", 4);
  strlcat_test("HOLA", "MUNDO", 5);
  strlcat_test("HOLA", "MUNDO", 8);
  strlcat_test("HOLA", "MUNDO", 9);
  strlcat_test("HOLA", "MUNDO", 10);
  return (0);
}
