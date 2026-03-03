#ifndef VECTOR2_H
#define VECTOR2_H

#include <math.h>

typedef struct {
    float x;
    float y;
} Vector2;

Vector2 vector2_create(float x, float y);
Vector2 vector2_add(Vector2 a, Vector2 b);
Vector2 vector2_sub(Vector2 a, Vector2 b);
Vector2 vector2_scale(Vector2 v, float s);
Vector2 vector2_normalize(Vector2 v);
float vector2_dot(Vector2 a, Vector2 b);
float vector2_length(Vector2 v);

#endif