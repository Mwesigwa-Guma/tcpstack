#include <ctype.h>

void enableRawMode(void);
void initEditor(void);
void editorOpen(char* filename);
void editorRefreshScreen(void);
void editorProcessKeyPress(void);
void disableRawMode(void);
int getCursorPosition(int *rows, int *cols);
void editorMoveCursor(int key); 
int editorReadKey(void);
int getWindowSize(int *rows, int *cols);
void editorAppendRow(char *s, size_t len);
void editorOpen(char* filename);
