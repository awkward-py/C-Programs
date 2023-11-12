#include <stdio.h>
#include <time.h>

int main() {
    while (1) {

        time_t abhi = time(NULL);

        printf("%02d:%02d:%02d\r", (abhi / 3600) % 24, (abhi / 60) % 60, abhi % 60);
        fflush(stdout);

        sleep(1);
    }

    return 0;
}
