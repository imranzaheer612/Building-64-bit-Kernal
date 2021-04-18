#include "print.h"

void kernel_main() {
    print_clear();
    print_set_color(PRINT_COLOR_YELLOW, PRINT_COLOR_BLACK);
    print_str("Welcome to our 64-bit kernel!");
    print_newline();
    print_set_color(9, 0);
    
    print_str("         :::/+-       -:///:-.::///::.    -:///::`  .:/++++/:  `//////////////: "); 
    print_str("         ``.shho.     ``/h:`` `.ohy.`     ``:h+``  /y+.```-sh  .h/....yho....oy ");
    print_str("            oy+hy/`     :h-     ohs         .h:   `hh:     .o  -+     yh+    `o ");
    print_str("            os .ohy:    -h.     ohs         .h-    ohho/-`            sh+       ");
    print_str("            os   -sho.  .h.     ohs         .h-     ./oyhys/.         yh+       ");
    print_str("            os    `/hh+`.h.     ohs         .h-        `./shh:        yh+       ");
    print_str("            sy      `ohy+h.     +hy`        :h.   `o`     `ohs        yh+       ");
    print_str("            sy        -shh.     .yhs-`    ./h/    .ho`    .yh:        yh+       ");
    print_str("         ./+ss+/.       /y-      `/oyyyysso/.     .osysooos/.      -/+sss+/. ");

    print_set_color(PRINT_COLOR_YELLOW, PRINT_COLOR_BLACK);
    print_newline();
    print_str("Designed by Imran. :) ;)");



}