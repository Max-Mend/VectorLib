#ifndef VECTOR3_H
#define VECTOR3_H

#include <math.h>

typedef struct {
    float x;
    float y;
    float z;
} Vector3;

Vector3 vector3_create(float x, float y, float z);
Vector3 vector3_add(Vector3 a, Vector3 b);
Vector3 vector3_sub(Vector3 a, Vector3 b);
Vector3 vector3_scale(Vector3 v, float s);
Vector3 vector3_normalize(Vector3 v);
float vector3_dot(Vector3 a, Vector3 b);
float vector3_length(Vector3 v);
Vector3 vector3_cross(Vector3 a, Vector3 b);

#endif