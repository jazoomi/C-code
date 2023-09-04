include <math.h>

//finding the distance between two point in a cartesian plane
// d = SQRT(( x1-x2)^2 + (y1 - y2)^2)

struct point { 
  double x;
  double y;
};
double distance (struct point *p1, struct point *p2){
  float fx, fy;
  fx = (*p1).x - (*p2).x;
  fy = (*p1).y - (*p2).y;
  return sqrt((fx * fx) + (fy*fy));
}
