#include <stdio.h>
#include <stdlib.h>

int main(void){
  char filename[] = "tail.c";
  int ch;

  FILE *fp = fopen(filename,"r");
  fprintf(stdout, "%sを標準出力します\n",filename);
  while((ch = getc(fp)) != EOF){
    putchar(ch);
  }
}
