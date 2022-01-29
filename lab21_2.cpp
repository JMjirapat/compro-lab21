#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *R1, Rect *R2){
	double max_X = max(R1->x,R2->x);
	double min_X = min(R1->x+R1->w,R2->x+R2->w);
	double min_Y = min(R1->y,R2->y);
	double max_Y = max(R1->x-R1->h,R2->x-R2->h);
	double overlap_X = min_X-max_X;
	double overlap_Y = min_Y-max_Y;
	if(overlap_X <= 0 || overlap_Y <= 0)
		return 0;
	return overlap_X*overlap_Y;
}