#include <arpa/inet.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <stdint.h>
#include <math.h>

// custom sorting algorithms: https://github.com/swenson/sort
#define SORT_NAME int32
#define SORT_TYPE int32_t
#define SORT_CMP(x, y) ((x) - (y))
#include "sort.h"

#define shuf (true)

void merge(int * arr1, int len1, int * arr2, int len2, int * returnarr);
void mergesort(int * array, size_t length);
bool verifysorted(int * array, int l);
void pparr(int * arr, int len);
bool verifyidentical(int * arr1, int * arr2, int len);
void fillrand(int * array, int length);
void fill(int * array, int length);
void copyarr(int * src, int * dst, int len);
void testsort(char * name, int * arr, int len, void (*sort)(int *, size_t));
void arr2img(int * arr, int arrlen, char * name);
void timingtests(int * testarr, int arrlen, void (**sorters)(int *, size_t),
                 char ** names, int numtests);
unsigned short scale(int val);


void merge(int * arr1, int len1, int * arr2, int len2, int * returnarr) {
  int pos1 = 0, pos2 = 0;
  /* while we haven't reached the end of either array */ 
  while ((pos1 != len1) & (pos2 != len2)) {
    if (arr1[pos1] < arr2[pos2]) {
      /*
        arr1 currently has the smaller element so append it
        and increment position counter.
      */
      returnarr[pos1+pos2] = arr1[pos1];
      pos1 += 1;
    } else {
      /*
        arr2 currently has the smaller element so append it
        and increment position counter.
      */
      returnarr[pos1+pos2] = arr2[pos2];
      pos2 += 1;
    }
  }
  /* merge the remaining array */
  for (; pos1 < len1; pos1++) {
    returnarr[pos1+pos2] = arr1[pos1];
  }
  for (; pos2 < len2; pos2++) {
    returnarr[pos1+pos2] = arr2[pos2];
  }
}

void mergesort(int * array, size_t length) {
  /* 
     log2(length) gives us the biggest power of two
     which is less than the size of our array.
  */
  char fname[] = "A.ff";
  for (int i = 0; i <= (int) log2(length); i++, fname[0]++) {
    arr2img(array, length, fname);
    /* calculate the length of the current arrays to be merged*/
    int arrlen = (int) pow((double) 2, (double) i);
    /* allocate the temp array */
    size_t size = sizeof(int) * arrlen * 2;
    int * temparray = malloc(size);
    
    for (int offset = 0, remaining = length; offset < length;
         offset += arrlen + arrlen, remaining -= arrlen + arrlen) {
      /*
        pointer1 is the pointer to the first sublist,
        and pointer2 is the pointer to the second sublist.
        len1 and len2 should be the same unless one of them
        extends past the end of the array, then we trucate them.
      */
      int * pointer1 = array + offset;
      int * pointer2 = pointer1 + arrlen;
      int len1 = arrlen, len2 = arrlen;

      if (arrlen > length - offset) {
        /* 
           if the length of the sublist is longer than the rest of array then break
        */
        break;
      }

      if (offset + arrlen + arrlen > length) {
        /*
          if the total length of the two sublists at the
          offset is longer than the length of the array
          then trucate the length of the second array to
          make it fit
        */
        len2 = length - offset - arrlen;
      }
      /* merge the two sections into the temp array */
      merge(pointer1, len1, pointer2, len2, temparray);
      /* overwrite the actual array with elements from the temparray */
      for (int i = 0; i < len1+len2; i++) {
        pointer1[i] = temparray[i];
      }
    }
    /* free the temp array */
    free(temparray);
    // puts("Freed the temp array");
  }
}

bool verifysorted(int * array, int l) {
  for (int i = 0; i < l-1; i++) {
    if (array[i] > array[i+1]) {
      return false;
    }
  }
  return true;
}

void pparr(int * arr, int len) {
  for (int i = 0; i < len; i++) {
    if (i != len-1) {
      printf("%d, ", arr[i]);
    } else {
      printf("%d\n\n", arr[i]);
    }
  }
}

bool verifyidentical(int * arr1, int * arr2, int len) {
  for (int i = 0; i < len; i++) {
    if (arr1[i] != arr2[i]) {
      return false;
    }
  }
  return true;
}

void fillrand(int * array, int length) {
  srand(time(NULL));
  for (int i = 0; i < length; i++) {
    /* 
      This may seem arbitrary but it is so that when translating
      the values into pixels the values are evenly distributed between
      red, green and blue as the first three bytes of each int is the
      reg, green and blue values of the image pixels respectively.
    */
    array[i] = rand()%(1 << 16);
  }
}

void fill(int * array, int length) {
  for (int i = 0; i < length; i++) {
    array[i] = i;
  }
}

void shuffle(int * array, int length) {
  /*
    This function implements the modern
    version of a fisher-yates shuffle.
  */
  srand(time(NULL));
  for (int i = 0; i < length; i++) {
    /*
      choose a random element in the first
      n elements, swap it with the nth element
      then decrement n.
      in this case n = length - i
    */ 
    int index = rand() % (length - i);
    int temp = array[index];
    array[index] = array[length - (i+1)];
    array[length - (i+1)] = temp;
  }
}

void copyarr(int * src, int * dst, int len) {
  for (int i = 0; i < len; i++) {
    dst[i] = src[i];
  }
}

void testsort(char * name, int * arr, int len, void (*sort)(int *, size_t)) {
  struct timespec tstart={0,0}, tend={0,0};
  clock_gettime(CLOCK_MONOTONIC, &tstart);
  (*sort)(arr, len);
  clock_gettime(CLOCK_MONOTONIC, &tend);
  printf("%s sort on %d numbers took %f seconds\n", name, len,
         ((double)tend.tv_sec + 1.0e-9*tend.tv_nsec) - 
         ((double)tstart.tv_sec + 1.0e-9*tstart.tv_nsec));
}

void timingtests(int * testarr, int arrlen, void (**sorters)(int *, size_t),
                 char ** names, int numtests) {
  int * copy = malloc( arrlen * sizeof(int));
  for (int i = 0; i < numtests; i++) {
    copyarr(testarr, copy, arrlen);
    testsort(names[i], copy, arrlen, sorters[i]);
  }
  free(copy);
}

double S(double x) {
  double ret = x / (x + 1);
  //printf("%f scaled to %f\n", x, ret);
  return ret;
}

unsigned short scale(int val) {
  unsigned short ret = (unsigned short) (65535.0 * S((double) val));
  //printf("%d scaled to %u\n", val, ret);
  return ret;
}

void arr2img(int * arr, int arrlen, char * name) {
  FILE * fptr;
  fptr = fopen(name, "wb");
  printf("saving array as %s\n", name);
  char * magic = "farbfeld";
  int sidelen = (int) sqrt((double)arrlen/3 - 1);
  unsigned int geom[2] = {htonl(sidelen), htonl(sidelen)};

  printf("width: %d\n", sidelen);
  printf("height: %d\n", sidelen);

  /*
    write the magic number and the geometry of the image.
  */

  fwrite(magic, sizeof(char), 8, fptr);
  fwrite(geom, sizeof(unsigned int), 2, fptr);

  /* 
    create a copy of the pixels so we can set the alpha value
    to 255 without affecting the array values.
  */
  int numpixels = (int) pow(sidelen, 2);

  unsigned short int * pixels = malloc(numpixels * 4 * sizeof(unsigned short));

  for (int i = 0, k = 0; i < numpixels; i++, k += 4) {
      pixels[k]   = arr[(3*i)];
      pixels[k+1] = arr[(3*i)+1];
      pixels[k+2] = arr[(3*i)+2];
      pixels[k+3] = 0xFFFF;
  }

  fwrite(pixels, sizeof(unsigned short), numpixels * 4, fptr);
  fclose(fptr);
  free(pixels);
}

int main(void) {
  int n = 1<<20;
  int * arr = malloc(n * sizeof(int));

  printf("Sorting the randomly shuffled list of numbers from 0 to %d\n", n, n);
  if (shuf == true) {
    fill(arr, n);
    shuffle(arr, n);
  } else {
    fillrand(arr, n);
  }

  arr2img(arr, n, "rand.ff");

  int * copy = malloc(n * sizeof(int));
  copyarr(arr, copy, n);
  mergesort(arr, n);

  arr2img(arr, n, "sorted.ff");

  /* timing tests */
  /* needs to be defined because const int is not actually a constant. */
  #define numtests 6
  char * names[numtests] = {
    "my merge",
    "tim",
    "quick",
    "merge",
    "heap",
    "in-place merge"
  };
  void (*sorters[numtests])(int *, size_t) = {
    mergesort,
    int32_tim_sort,
    int32_quick_sort,
    int32_merge_sort,
    int32_heap_sort,
    int32_merge_sort_in_place,
  };
  //timingtests(copy, n, sorters, names, numtests);

  free(arr);
  free(copy);
  return 0;
}
