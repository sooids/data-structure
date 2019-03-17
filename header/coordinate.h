#pragma once
#ifndef _COORDINATE_H
#define _COORDINATE_H
struct point {
	int x;
	int y;
};

extern struct point center;

void printCoordinate(struct point p);
int isSameCoordinate(struct point p1, struct point p2);

#endif