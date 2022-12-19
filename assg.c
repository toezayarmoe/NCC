#include <stdio.h>
#include <string.h>
int main() {
  
  FILE* file = fopen("word.txt", "r");
  char word[100];
  int c_winhtut = 0;
  int c_ncc = 0;
  while (fscanf(file, "%s", word) == 1) {
    if (strcmp(word,"winhtut") == 0){
    	c_winhtut++;
    }
    if (strcmp(word,"NationalCyberCity") == 0){
    	c_ncc++;
    }

  }
  printf("count of word winhtut in file %d \n", c_winhtut );
  printf("count of word NationalCyberCity in file %d \n", c_ncc );
  fclose(file);

  return 0;
}