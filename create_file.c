#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void create(int y){
  FILE *fp;
  char files[31][31];
  char message[100];
  char option[100];
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
  //ADD PERMISSION EXECUTE TO OWNER
  //for(int a = 0; a < y; a++){
  //  sprintf(option, "chmod u+x %s", files[a]);
  //  system(option);
  // }
  //ADD EXTENSION .C
  for(int i = 0; i < y; i++){
    sprintf(option, "mv %s %s.c", files[i], files[i]);
    system(option);
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
