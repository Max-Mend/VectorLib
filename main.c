#include <stdio.h>
#include "vector/vector2.h"
#include "vector/vector3.h"

int main() {
    // Vector2
    Vector2 a2 = vector2_create(1, 2);
    Vector2 b2 = vector2_create(3, 4);

    Vector2 add2 = vector2_add(a2, b2);
    Vector2 sub2 = vector2_sub(a2, b2);
    Vector2 scale2 = vector2_scale(a2, 2.0f);
    Vector2 norm2 = vector2_normalize(a2);
    float dot2 = vector2_dot(a2, b2);
    float len2 = vector2_length(a2);

    printf("=== Vector2 ===\n");
    printf("add: (%.2f, %.2f)\n", add2.x, add2.y);
    printf("sub: (%.2f, %.2f)\n", sub2.x, sub2.y);
    printf("scale x2: (%.2f, %.2f)\n", scale2.x, scale2.y);
    printf("normalize: (%.2f, %.2f)\n", norm2.x, norm2.y);
    printf("dot: %.2f\n", dot2);
    printf("length: %.2f\n", len2);

    // Vector3
    Vector3 a3 = vector3_create(1, 2, 0);
    Vector3 b3 = vector3_create(3, 4, 8);

    Vector3 add3 = vector3_add(a3, b3);
    Vector3 sub3 = vector3_sub(a3, b3);
    Vector3 scale3 = vector3_scale(a3, 2.0f);
    Vector3 norm3 = vector3_normalize(a3);
    Vector3 cross3 = vector3_cross(a3, b3);
    float dot3 = vector3_dot(a3, b3);
    float len3 = vector3_length(a3);

    printf("\n=== Vector3 ===\n");
    printf("add:(%.2f, %.2f, %.2f)\n", add3.x, add3.y, add3.z);
    printf("sub:(%.2f, %.2f, %.2f)\n", sub3.x, sub3.y, sub3.z);
    printf("scale x2:(%.2f, %.2f, %.2f)\n", scale3.x, scale3.y, scale3.z);
    printf("normalize:(%.2f, %.2f, %.2f)\n", norm3.x, norm3.y, norm3.z);
    printf("cross:(%.2f, %.2f, %.2f)\n", cross3.x, cross3.y, cross3.z);
    printf("dot:%.2f\n", dot3);
    printf("length:%.2f\n", len3);

    return 0;
}