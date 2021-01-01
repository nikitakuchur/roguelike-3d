#ifndef ROGUELIKE_DIR_LIGHT_H
#define ROGUELIKE_DIR_LIGHT_H

#include <stddef.h>
#include "../../math/vec3.h"

typedef struct {
    size_t entity_id;
    vec3 color;

    mat4 light_space_mat;
} dir_light_t;

#endif //ROGUELIKE_DIR_LIGHT_H
