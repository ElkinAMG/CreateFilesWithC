#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void create(int y){
  FILE *fp;
  char files[31][31];
  char message[100];
  char chmod[100];
  int x;
  for(int i = 0; i < y; i++){
    printf("Type the name of the file<<< ");
    scanf("%s", files[i]);
    }
  for(int i = 0; i < y; i++){
    fp = fopen(files[i], "w");
    fclose(fp);
  }
  system("echo \"you have created these files>>>\"");
  sprintf(message, "ls -t | head -n %i | sort -f", y);
  for(int a = 0; a < y; a++){
    sprintf(chmod, "chmod u+x %s", files[a]);
    system(chmod);
  }
  system(message);
  }

int main(void){
  int i = 0;
  printf("Type quantity of files to create<<< ");
  scanf("%i", &i);
  create(i);
  return 0;
}
