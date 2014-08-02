#include <stdio.h>
#include <signal.h>
#include <sys/time.h>
#include "time.h"


void timerHandler( int sig, siginfo_t *si, void *uc )
{
    timer_t *tidp;
    tidp = si->si_value.sival_ptr;
    if ( *tidp == firstTimerID )
		sem_post(&main_sem);
    else if ( *tidp == secondTimerID );
		//sem_post(&mouse_sem);
    

}

int makeTimer( char *name, timer_t *timerID, int expireMS, int intervalMS )
{
    struct sigevent         te;
    struct itimerspec       its;
    struct sigaction        sa;
    int                     sigNo = SIGRTMIN;
    /* Set up signal handler. */
    sa.sa_flags = SA_SIGINFO;
    sa.sa_sigaction = timerHandler;
    sigemptyset(&sa.sa_mask);
    if (sigaction(sigNo, &sa, NULL) == -1)
    {
        printf("error !! \n");
        return(-1);
    }
    /* Set and enable alarm */
    te.sigev_notify = SIGEV_SIGNAL;
    te.sigev_signo = sigNo;
    te.sigev_value.sival_ptr = timerID;
    timer_create(CLOCK_REALTIME, &te, timerID);
    its.it_interval.tv_sec = 0;
    its.it_interval.tv_nsec = intervalMS * 1000000;
    its.it_value.tv_sec = 0;
    its.it_value.tv_nsec = expireMS * 1000000;
    timer_settime(*timerID, 0, &its, NULL);
    return(0);
}















