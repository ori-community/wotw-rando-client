#pragma once

#include <Randomizer/macros.h>

using collision_handler = void (*)(int id);

RANDOMIZER_C_DLLEXPORT int collision_reserve_id();
RANDOMIZER_C_DLLEXPORT int collision_query(app::Vector2 position, app::Vector2 size);
RANDOMIZER_C_DLLEXPORT void collision_query_result(int* buffer, int size);
RANDOMIZER_C_DLLEXPORT void collision_add_rect(int id, app::Vector2 position, app::Vector2 size);
RANDOMIZER_C_DLLEXPORT void collision_remove(int id);
RANDOMIZER_C_DLLEXPORT void collision_clear();
