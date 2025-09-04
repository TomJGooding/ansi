#include "ansi.h"
#include <stdio.h>
#include <unistd.h>

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

void test_default_colors() {
    printf("Default foreground/background:\n");
    printf(ANSI_RED_BACKGROUND ANSI_YELLOW "Before");
    printf(ANSI_DEFAULT_BACKGROUND ANSI_DEFAULT_COLOR " After\n");
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

void test_clear_line() {
    printf("Clear line:\n");
    for (int i = 100; i >= 0; i -= 10) {
        printf("%3d%% ", i);
        int num_bars = i / 2;
        for (int j = 0; j < num_bars; j++) {
            printf("|");
        }
        fflush(stdout);
        usleep(200 * 1000);
        printf(ANSI_CLEAR_LINE "\r");
    }
    printf("%3d%%\n", 0);
}

void test_cursor_controls() {
    printf("Cursor controls:\n");

    printf("   |   |   \n");
    printf("---|---|---\n");
    printf("   |   |   \n");
    printf("---|---|---\n");
    printf("   |   |   \n");

    printf(ANSI_CURSOR_UP(5));
    printf(ANSI_CURSOR_RIGHT(10));
    printf("\bX");
    fflush(stdout);
    usleep(500 * 1000);

    printf(ANSI_CURSOR_LEFT(8));
    printf("\bO");
    fflush(stdout);
    usleep(500 * 1000);

    printf(ANSI_CURSOR_DOWN(4));
    printf("\bX");
    fflush(stdout);
    usleep(500 * 1000);

    printf(ANSI_CURSOR_UP(2));
    printf(ANSI_CURSOR_RIGHT(4));
    printf("\bO");
    fflush(stdout);
    usleep(500 * 1000);

    printf(ANSI_CURSOR_RIGHT(4));
    printf(ANSI_CURSOR_DOWN(2));
    printf("\bX");
    fflush(stdout);
    usleep(500 * 1000);

    printf(ANSI_CURSOR_UP(2));
    printf("\bO");
    fflush(stdout);
    usleep(500 * 1000);

    printf(ANSI_CURSOR_DOWN(2));
    printf(ANSI_CURSOR_LEFT(4));
    printf("\bX");
    fflush(stdout);
    usleep(500 * 1000);

    printf(ANSI_CURSOR_DOWN(2) "\r");
}

int main() {
    test_clear_and_home();

    test_foreground_colors();
    test_background_colors();
    test_default_colors();
    printf("\n");
    test_graphics();
    printf("\n");
    test_clear_line();
    printf("\n");
    test_cursor_controls();
}
