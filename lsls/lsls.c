#include <stdio.h>
#include <dirent.h>
#include <sys/stat.h>
#include <string.h>

/**
 * Main
 */
int main(int argc, char **argv)
{
  // Parse command line
  struct dirent *dirent;
  DIR *dir;

  struct stat buf;
  // Open directory
  if (argv[1] != NULL){
    printf("%d is argc", argc);
    dir = opendir(argv[1]);
  }
  else{
    dir = opendir(".");
  }
  char filepath[] = "./";
  // Repeatly read and print entries
  while ((dirent = readdir(dir)) != NULL){
    char *pathstr = strdup(filepath);
    strcat(pathstr, dirent->d_name);
    stat(pathstr, &buf);
    printf("%11ld %s\n", buf.st_size, dirent->d_name);
  }
  // Close directory
  closedir(dir);
  return 0;
}