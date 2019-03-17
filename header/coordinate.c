#include "coordinate.h"
#include "stdio.h"

struct point center = { 10, 10 };

void printCoordinate(struct point p)
{
	printf("%d,%d\n", p.x, p.y);
}

int isSameCoordinate(struct point p1, struct point p2)
{
	if (p1.x == p2.x && p1.y == p2.y) return 1;
	else return 0;
}
