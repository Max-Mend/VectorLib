#include "vector3.h"

Vector3 vector3_create(float x, float y, float z) {
    Vector3 v = {x, y, z};
    return v;
}

Vector3 vector3_add(Vector3 a, Vector3 b) {
    Vector3 result = {a.x + b.x, a.y + b.y, a.z + b.z};
    return result;
}

Vector3 vector3_sub(Vector3 a, Vector3 b) {
    Vector3 result = {a.x - b.x, a.y - b.y, a.z - b.z};
    return result;
}

Vector3 vector3_scale(Vector3 v, float s) {
    Vector3 result = {v.x * s, v.y * s, v.z * s};
    return result;
}

float vector3_dot(Vector3 a, Vector3 b) {
    return a.x * b.x + a.y * b.y + a.z * b.z;
}

float vector3_length(Vector3 v) {
    return sqrtf(v.x * v.x + v.y * v.y + v.z * v.z);
}

Vector3 vector3_normalize(Vector3 v) {
    float len = vector3_length(v);
    if (len == 0) {
        Vector3 zero = {0, 0, 0};
        return zero;
    }
    return vector3_scale(v, 1.0f / len);
}

Vector3 vector3_cross(Vector3 a, Vector3 b) {
    Vector3 result = {
        a.y * b.z - a.z * b.y,
        a.z * b.x - a.x * b.z,
        a.x * b.y - a.y * b.x
    };
    return result;
}