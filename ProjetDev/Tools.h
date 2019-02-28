#define BLACK         0
#define LOW_BLUE      1
#define LOW_GREEN     2
#define LOW_CYAN      3
#define LOW_RED       4
#define LOW_MAGENTA   5
#define LOW_YELLOW    6
#define LOW_WHITE     7
#define GRAY          8
#define HIGH_BLUE     9
#define HIGH_GREEN   10
#define HIGH_CYAN    11
#define HIGH_RED     12
#define HIGH_MAGENTA 13
#define HIGH_YELLOW  14
#define HIGH_WHITE   15

#define SPECIAL_KEYS -32
#define CURSOR_LEFT  75
#define CURSOR_RIGHT 77
#define CURSOR_UP	 72
#define CURSOR_DOWN	 80
#define ESC          27
#define EXT_KEYS     70
#define ENTER        13


void setColor(WORD color, WORD backgroud);
WORD getColor();
char readKey();
char readMenu(const char* strTemplate);
int readName(char* value, int maxLenght);
