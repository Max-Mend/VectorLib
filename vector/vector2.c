#include "vector2.h"

Vector2 vector2_create(float x, float y) {
    Vector2 v = {x, y};
    return v;
}

Vector2 vector2_add(Vector2 a, Vector2 b) {
    Vector2 result = {a.x + b.x, a.y + b.y};
    return result;
}

Vector2 vector2_sub(Vector2 a, Vector2 b) {
    Vector2 result = {a.x - b.x, a.y - b.y};
    return result;
}

Vector2 vector2_scale(Vector2 v, float s) {
    Vector2 result = {v.x * s, v.y * s};
    return result;
}

float vector2_dot(Vector2 a, Vector2 b) {
    return a.x * b.x + a.y * b.y;
}

float vector2_length(Vector2 v) {
    return sqrtf(v.x * v.x + v.y * v.y);
}

Vector2 vector2_normalize(Vector2 v) {
    float len = vector2_length(v);
    if (len == 0) {
        Vector2 zero = {0, 0};
        return zero;
    }
    return vector2_scale(v, 1.0f / len);
}