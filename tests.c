#include <stdio.h>
#include "ansi.h"

void test_clear_and_home() {
    printf(ANSI_CLEAR ANSI_HOME);
}

void test_foreground_colors() {
    printf("Foreground colors:\n");

    printf(ANSI_BLACK   "███" ANSI_RESET);
    printf(ANSI_RED     "███" ANSI_RESET);
    printf(ANSI_GREEN   "███" ANSI_RESET);
    printf(ANSI_YELLOW  "███" ANSI_RESET);
    printf(ANSI_BLUE    "███" ANSI_RESET);
    printf(ANSI_MAGENTA "███" ANSI_RESET);
    printf(ANSI_CYAN    "███" ANSI_RESET);
    printf(ANSI_WHITE   "███" ANSI_RESET);
    printf("\n");

    printf(ANSI_BRIGHT_BLACK   "███" ANSI_RESET);
    printf(ANSI_BRIGHT_RED     "███" ANSI_RESET);
    printf(ANSI_BRIGHT_GREEN   "███" ANSI_RESET);
    printf(ANSI_BRIGHT_YELLOW  "███" ANSI_RESET);
    printf(ANSI_BRIGHT_BLUE    "███" ANSI_RESET);
    printf(ANSI_BRIGHT_MAGENTA "███" ANSI_RESET);
    printf(ANSI_BRIGHT_CYAN    "███" ANSI_RESET);
    printf(ANSI_BRIGHT_WHITE   "███" ANSI_RESET);
    printf("\n");
}

void test_background_colors() {
    printf("Background colors:\n");

    printf(ANSI_BLACK_BACKGROUND   "   " ANSI_RESET);
    printf(ANSI_RED_BACKGROUND     "   " ANSI_RESET);
    printf(ANSI_GREEN_BACKGROUND   "   " ANSI_RESET);
    printf(ANSI_YELLOW_BACKGROUND  "   " ANSI_RESET);
    printf(ANSI_BLUE_BACKGROUND    "   " ANSI_RESET);
    printf(ANSI_MAGENTA_BACKGROUND "   " ANSI_RESET);
    printf(ANSI_CYAN_BACKGROUND    "   " ANSI_RESET);
    printf(ANSI_WHITE_BACKGROUND   "   " ANSI_RESET);
    printf("\n");

    printf(ANSI_BRIGHT_BLACK_BACKGROUND   "   " ANSI_RESET);
    printf(ANSI_BRIGHT_RED_BACKGROUND     "   " ANSI_RESET);
    printf(ANSI_BRIGHT_GREEN_BACKGROUND   "   " ANSI_RESET);
    printf(ANSI_BRIGHT_YELLOW_BACKGROUND  "   " ANSI_RESET);
    printf(ANSI_BRIGHT_BLUE_BACKGROUND    "   " ANSI_RESET);
    printf(ANSI_BRIGHT_MAGENTA_BACKGROUND "   " ANSI_RESET);
    printf(ANSI_BRIGHT_CYAN_BACKGROUND    "   " ANSI_RESET);
    printf(ANSI_BRIGHT_WHITE_BACKGROUND   "   " ANSI_RESET);
    printf("\n");
}

void test_graphics() {
    printf("Graphics (not all widely supported):\n");
    printf(ANSI_BOLD "bold " ANSI_RESET);
    printf(ANSI_FAINT "faint " ANSI_RESET);
    printf(ANSI_ITALIC "italic " ANSI_RESET);
    printf(ANSI_UNDERLINE "underline" ANSI_RESET);
    printf(ANSI_BLINK_SLOW " slow blink " ANSI_RESET);
    printf(ANSI_BLINK_RAPID "rapid blink " ANSI_RESET);
    printf(ANSI_REVERSE "reverse" ANSI_RESET);
    printf(ANSI_CONCEAL " conceal " ANSI_RESET);
    printf(ANSI_CROSSED_OUT "crossed-out"  ANSI_RESET);
    printf("\n");
}

int main() {
    test_clear_and_home();

    test_foreground_colors();
    test_background_colors();

    test_graphics();
}
