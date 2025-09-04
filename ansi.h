//////////////////////////////////////////////////////////////////////////////
// Graphics (not all widely supported)
#define ANSI_RESET "\x1b[0m"

#define ANSI_BOLD        "\x1b[1m"
#define ANSI_FAINT       "\x1b[2m"
#define ANSI_ITALIC      "\x1b[3m"
#define ANSI_UNDERLINE   "\x1b[4m"
#define ANSI_BLINK_SLOW  "\x1b[5m"
#define ANSI_BLINK_RAPID "\x1b[6m"
#define ANSI_REVERSE     "\x1b[7m"
#define ANSI_CONCEAL     "\x1b[8m"
#define ANSI_CROSSED_OUT "\x1b[9m"

//////////////////////////////////////////////////////////////////////////////
// Colors
#define ANSI_DEFAULT_COLOR      "\x1b[39m"
#define ANSI_DEFAULT_BACKGROUND "\x1b[49m"

#define ANSI_BLACK   "\x1b[30m"
#define ANSI_RED     "\x1b[31m"
#define ANSI_GREEN   "\x1b[32m"
#define ANSI_YELLOW  "\x1b[33m"
#define ANSI_BLUE    "\x1b[34m"
#define ANSI_MAGENTA "\x1b[35m"
#define ANSI_CYAN    "\x1b[36m"
#define ANSI_WHITE   "\x1b[37m"

#define ANSI_BRIGHT_BLACK   "\x1b[90m"
#define ANSI_BRIGHT_RED     "\x1b[91m"
#define ANSI_BRIGHT_GREEN   "\x1b[92m"
#define ANSI_BRIGHT_YELLOW  "\x1b[93m"
#define ANSI_BRIGHT_BLUE    "\x1b[94m"
#define ANSI_BRIGHT_MAGENTA "\x1b[95m"
#define ANSI_BRIGHT_CYAN    "\x1b[96m"
#define ANSI_BRIGHT_WHITE   "\x1b[97m"

#define ANSI_BLACK_BACKGROUND   "\x1b[40m"
#define ANSI_RED_BACKGROUND     "\x1b[41m"
#define ANSI_GREEN_BACKGROUND   "\x1b[42m"
#define ANSI_YELLOW_BACKGROUND  "\x1b[43m"
#define ANSI_BLUE_BACKGROUND    "\x1b[44m"
#define ANSI_MAGENTA_BACKGROUND "\x1b[45m"
#define ANSI_CYAN_BACKGROUND    "\x1b[46m"
#define ANSI_WHITE_BACKGROUND   "\x1b[47m"

#define ANSI_BRIGHT_BLACK_BACKGROUND   "\x1b[100m"
#define ANSI_BRIGHT_RED_BACKGROUND     "\x1b[101m"
#define ANSI_BRIGHT_GREEN_BACKGROUND   "\x1b[102m"
#define ANSI_BRIGHT_YELLOW_BACKGROUND  "\x1b[103m"
#define ANSI_BRIGHT_BLUE_BACKGROUND    "\x1b[104m"
#define ANSI_BRIGHT_MAGENTA_BACKGROUND "\x1b[105m"
#define ANSI_BRIGHT_CYAN_BACKGROUND    "\x1b[106m"
#define ANSI_BRIGHT_WHITE_BACKGROUND   "\x1b[107m"

//////////////////////////////////////////////////////////////////////////////
// Cursor Controls
#define ANSI_HOME "\x1b[H"

#define ANSI_CURSOR_UP(n)    "\x1b[" #n "A"
#define ANSI_CURSOR_DOWN(n)  "\x1b[" #n "B"
#define ANSI_CURSOR_RIGHT(n) "\x1b[" #n "C"
#define ANSI_CURSOR_LEFT(n)  "\x1b[" #n "D"

//////////////////////////////////////////////////////////////////////////////
// Erase Functions
#define ANSI_CLEAR      "\x1b[2J"
#define ANSI_CLEAR_LINE "\x1b[2K"
