#include <stdint.h>

void initSerial(void);
void eputchar(char c);
char egetchar(void);
void eputs(char *String);
void printDecimal(int32_t Value);
void eputTime(uint32_t value);