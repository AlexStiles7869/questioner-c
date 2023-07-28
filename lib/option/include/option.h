#ifndef OPTION_H
#define OPTION_H

#include <stdbool.h>

typedef struct {
	char* optionStr;
	uint8_t optionLen;
} option_content_t;

typedef struct {
	option_content_t optionContent;
	bool selectable;
} option_t;

int option_example(void);

#endif // OPTION_H
