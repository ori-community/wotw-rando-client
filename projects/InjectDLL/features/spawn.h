#pragma once

#include <macros.h>
#include <Il2CppModLoader/common.h>

INJECT_C_DLLEXPORT void save();
INJECT_C_DLLEXPORT void teleport(float x, float y, bool wait_for_load);