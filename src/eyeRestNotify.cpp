#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void func(void);

struct timespec mytimespec;
struct timespec mytimespec2;

int main()
{
  
  mytimespec.tv_sec = 60*20;
  mytimespec2.tv_sec = 2;

  while(1)
  {
    func(); 
    nanosleep(&mytimespec,NULL);
  }
  return 0;
}

void func(void)
{
  printf("This would be printed periodically\n");
  system("/usr/bin/notify-send -t 20000 'REST YOUR EYES' 'Take 20 second rest' ");
  
  nanosleep(&mytimespec2,NULL);
  
  system("/usr/bin/xgamma -gamma 0.3" );
  
  nanosleep(&mytimespec2,NULL);
  
  system("/usr/bin/xgamma -gamma 1" );
  
}

