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
  struct direc *direc;
  DIR *dir;

  struct stat buf;
  // Open directory
  if (argv[1] != NULL)
  {
    printf("%d is argc", argc);
    dir = opendir(argv[1]);
  }
  else
  {
    dir = opendir(".");
  }
  char filepath[] = "./";
  // Repeatly read and print entries
  while ((direc = readdir(dir)) != NULL)
  {

  }
  // Close directory
  closedir(dir);
  return 0;
}