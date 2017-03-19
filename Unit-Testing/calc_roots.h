// qsolve_roots.h
// version 1.01

// coefs for ax^2 + bx + c = 0
typedef struct {
  float	a;
  float	b;
  float	c;
} Input;

// Real roots for ax^2 + bx + c = 0
typedef struct {
  float	x1;
  float	x2;
} Roots;

// quadratic eqaution solver
int calc_roots(Input *inputs, Roots *roots);
