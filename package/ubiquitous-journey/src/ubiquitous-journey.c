#include <syslog.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    openlog("ubiquitous-journey", LOG_CONS | LOG_PID | LOG_NDELAY, LOG_LOCAL1);
    for (int i = 0; i < 60; i++)
    {
        sleep(1); syslog(LOG_NOTICE, "tick");
        sleep(1); syslog(LOG_NOTICE, "tock");
    }
    closelog();
    return EXIT_SUCCESS;
}
