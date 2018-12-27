#include <stdio.h>
extern void Increment(void);
extern int GetNum(void);
extern int num;

int sub_27_c(void) {
	Increment();
	printf("%d", num);
}
