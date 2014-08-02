

#include <semaphore.h> 
#include <pthread.h> 
#include <fcntl.h> 
#include <linux/input.h> 
#include "dlfcn.h" 
#include <stdio.h> 
#include<time.h>
#include<fcntl.h>
#include<unistd.h>
#include<linux/input.h>
#include <errno.h>
#include <signal.h>
#include <sys/time.h>
#include <time.h>

#define MOUSEFILE "/dev/input/mouse2"

#define X_SCALE_LIMIT 0.8
#define Y_SCALE_LIMIT 0.8
#define MAX_POS_X 1000
#define MAX_POS_Y 1000
#define PS2_Y_BITMASK 32
#define TIMER1 60
#define TIMER2 20

int makeTimer( char *name, timer_t *timerID, int expireMS, int intervalMS );

timer_t firstTimerID;
timer_t secondTimerID;

sem_t main_sem;

int i,rc,count;
char buffer[3];
float RELATIVE_X;
float RELATIVE_Y;