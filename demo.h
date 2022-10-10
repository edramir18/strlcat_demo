#ifndef DEMO_H
#define DEMO_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef STD
  size_t	ft_strlcat(char *dst, const char *src, size_t size);
#endif

void strlcat_test(const char *dst, const char *src, size_t size);

#endif
