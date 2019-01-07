/* proto - runtime stuff */



#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "tgi.h"
#include "snazzy.h"


void xbut1_clicked(widget *w){
    printf("hello\n");
};
void xbut2_clicked(widget *w){
    printf("goodbye\n");
    exit(1);
};
void xbut3_clicked(widget *w){
    printf("soon.\n");
};

void xcheck1_clicked(widget *w, unsigned char state){
    printf("check state %d\n", state);
}

void xcheck2_clicked(widget *w, unsigned char state){
    printf("check state %d\n", state);
}

#include "test.c"

int main(int argc, char *argv[]) {
    printf("hello world!\n");
    ll_init();
    s_init(256,192);
    ll_cset(0);
    snazzy_go();
}
