#include <arpa/inet.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(void) {
  FILE * fp;
  fp = fopen("imagetest.ff", "wb");
  int width = 10000;
  int height = 10000;

  unsigned int geom[2] = {htonl(width), htonl(height)};

  puts("hi");
  unsigned short * pixels = malloc(width * height * 4 * sizeof(short));
  puts("hi");

  for (int i = 0; i < width * height * 4; i++) {
    if (i % 4 == 3) {
      pixels[i] = 0xFFFF;
    } else {
      pixels[i] = rand() % (1 << 16);
    }
  }
  puts("hi");

  char * magic = "farbfeld";
  fwrite(magic, sizeof(char), 8, fp);
  puts("hi");
  fwrite(geom, sizeof(int), 2, fp);
  puts("hi");
  fwrite(pixels, sizeof(short),  width * height * 4, fp);
  puts("hi");
  fclose(fp);
  puts("hi");

  return 0;
}
