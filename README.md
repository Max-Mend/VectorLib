# VectorLib

A simple 2D and 3D vector math library written in C.

## Functions

### Vector2
| Function | Description |
|---|---|
| `vector2_create(x, y)` | Create a vector |
| `vector2_add(a, b)` | Addition |
| `vector2_sub(a, b)` | Subtraction |
| `vector2_scale(v, s)` | Multiply by scalar |
| `vector2_dot(a, b)` | Dot product |
| `vector2_length(v)` | Length |
| `vector2_normalize(v)` | Normalize |

### Vector3
| Function | Description |
|---|---|
| `vector3_create(x, y, z)` | Create a vector |
| `vector3_add(a, b)` | Addition |
| `vector3_sub(a, b)` | Subtraction |
| `vector3_scale(v, s)` | Multiply by scalar |
| `vector3_dot(a, b)` | Dot product |
| `vector3_cross(a, b)` | Cross product |
| `vector3_length(v)` | Length |
| `vector3_normalize(v)` | Normalize |

## Usage
```c
#include "vector/vector2.h"
#include "vector/vector3.h"

Vector2 a = vector2_create(1, 2);
Vector2 b = vector2_create(3, 4);
Vector2 c = vector2_add(a, b);
printf("Length: %.2f\n", vector2_length(c));

Vector3 a = vector3_create(1, 2, 0);
Vector3 b = vector3_create(3, 4, 8);
Vector3 c = vector3_add(a, b);
printf("Length: %.2f\n", vector3_length(c));
```

## Build
```bash
git clone https://github.com/Max-Mend/VectorLib.git
cd VectorLib
mkdir build && cd build
cmake ..
make
```

## Requirements
- **C17** or higher
- **CMake** 3.16+
- **GCC** or **Clang**

## License
MIT License
