#include "arithmetic.h"
#include "coordinate.h"
#include <stdio.h>

//int main() {
//	int a = 10;
//	int b = 20;
//
//	printf("%d + %d = %d\n", a, b, plus(a, b));
//	printf("%d - %d = %d\n", a, b, minus(a, b));
//
//	return 0;
//}

int main() {
	struct point p1, p2;

	p1.x = 10;
	p1.y = 10;
	p2.x = 10;
	p2.y = 20;

	printCoordinate(p1);
	//printCoordinate(p2);
	printCoordinate(center);
	
	// if (isSameCoordinate(p1, p2)) printf("Same\n");
	if (isSameCoordinate(p1, center)) printf("Same\n");
	else printf("Different\n");

	return 0;	 
}